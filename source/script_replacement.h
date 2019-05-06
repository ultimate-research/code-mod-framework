#include <switch.h>

#include <stdint.h>

#include "crc32.h"

#include "l2c.h"
#include "l2c_imports.h"
#include "acmd_imports.h"

#define LOAD64 *(u64 *)

u64 shine_replace(L2CAgent* l2c_agent, void* variadic);

void replace_scripts(L2CAgent* l2c_agent, u8 category, uint kind) {
    // fighter
    if (category == 0) {
        // fox
        if (kind == 0x7) {
            lib_L2CAgent_sv_set_function_hash(l2c_agent, &shine_replace, hash40("game_speciallwstart"));
            lib_L2CAgent_sv_set_function_hash(l2c_agent, &shine_replace, hash40("game_specialairlwstart"));
        }

        // peach
        if (kind == 0xD) {
        }
    }
}

// AnimCMD replacement function
u64 shine_replace(L2CAgent* l2c_agent, void* variadic) {
    // Frame 1
    app_sv_animcmd_frame(l2c_agent->lua_state_agent, 1);
    lib_L2CAgent_clear_lua_stack(l2c_agent);
    app_sv_animcmd_is_excute(l2c_agent->lua_state_agent);
    L2CValue is_excute;
    get_lua_stack(l2c_agent, 1, &is_excute);
    if (is_excute.raw) {
        // Set up hitboxes
        lib_L2CAgent_clear_lua_stack(l2c_agent);

        L2CValue hitbox_params[36] = {
            {.raw = 0, .type = L2C_integer},    // ID
            {.raw = 0, .type = L2C_integer},    // Unk
            {.raw = 0x31ED91FCALL, .type = L2C_hash},   // Joint
            {.raw_float = 10.0, .type = L2C_number}, // Damage
            {.raw = 10, .type = L2C_integer},   // Angle
            {.raw = 32, .type = L2C_integer},   // KBG
            {.raw = 0, .type = L2C_integer},    // WBKB
            {.raw = 66, .type = L2C_integer},   // BKB
            {.raw_float = 7.5, .type = L2C_number}, // Size
            {.raw_float = 0, .type = L2C_number},   // X
            {.raw_float = 6.5, .type = L2C_number}, // Y
            {.raw_float = 0, .type = L2C_number},   // Z
            {.raw = 0, .type = L2C_void},   // X2
            {.raw = 0, .type = L2C_void},   // Y2
            {.raw = 0, .type = L2C_void},   // Z2
            {.raw_float = 1, .type = L2C_number},   // Hitlag
            {.raw_float = 1, .type = L2C_number},   // SDI
            {.raw = 0, .type = L2C_integer},
            {.raw = 0, .type = L2C_integer},
            {.raw = 0, .type = L2C_integer},
            {.raw = 0, .type = L2C_integer},
            {.raw_float = 0, .type = L2C_number},
            {.raw = 0, .type = L2C_integer},
            {.raw = 0, .type = L2C_integer},
            {.raw = 0, .type = L2C_integer},
            {.raw = 0, .type = L2C_integer},
            {.raw = 0, .type = L2C_integer},
            {.raw = 1, .type = L2C_integer},
            {.raw = 1, .type = L2C_integer},
            {.raw = 63, .type = L2C_integer},
            {.raw = 31, .type = L2C_integer},
            {.raw = 0, .type = L2C_integer},
            {.raw = 0x13462FCFE4LL, .type = L2C_hash},
            {.raw = 2, .type = L2C_integer},
            {.raw = 7, .type = L2C_integer},
            {.raw = 25, .type = L2C_integer},
        };

        for (size_t i = 0; i < 36; i++)
            lib_L2CAgent_push_lua_stack(l2c_agent, &hitbox_params[i]);
        app_sv_animcmd_ATTACK(l2c_agent->lua_state_agent);

        lib_L2CAgent_clear_lua_stack(l2c_agent);

        hitbox_params[0].raw = 1; hitbox_params[0].type =  L2C_integer; // ID
        hitbox_params[4].raw = 24; hitbox_params[4].type =  L2C_integer;    // Angle
        hitbox_params[5].raw = 45; hitbox_params[5].type =  L2C_integer;    // KBG

        for (size_t i = 0; i < 36; i++)
            lib_L2CAgent_push_lua_stack(l2c_agent, &hitbox_params[i]);
        app_sv_animcmd_ATTACK(l2c_agent->lua_state_agent);
    }
    
    return 0;
}

void* sv_get_status_func(u64 l2c_agentbase, int status_kind, u64 key) {
  u64 unk48 = LOAD64(l2c_agentbase + 0x48);
  u64 unk50 = LOAD64(l2c_agentbase + 0x50);
  if ( 0x2E8BA2E8BA2E8BA3LL * ((unk50 - unk48) >> 4) > (u64)status_kind)
    return *(void **)(unk48 + 0xB0LL * status_kind + (key << 32 >> 29));
  
  return 0;
}

void sv_replace_status_func(u64 l2c_agentbase, int status_kind, u64 key, void* func) {
  u64 unk48 = LOAD64(l2c_agentbase + 0x48);
  u64 unk50 = LOAD64(l2c_agentbase + 0x50);
  if ( 0x2E8BA2E8BA2E8BA3LL * ((unk50 - unk48) >> 4) > (u64)status_kind) {
    *(void **)(unk48 + 0xB0LL * status_kind + (key << 32 >> 29)) = func;
  }
}

u64 clear_lua_stack_replace(u64 l2c_agent) {
  u64 lua_state = LOAD64(l2c_agent + 8);
  if (lua_state-8 && LOAD64(lua_state-8) && LOAD64(LOAD64(lua_state - 8) + 416LL)) {
    u8 battle_object_category = *(u8 *)(LOAD64(lua_state - 8) + 404LL);
    uint battle_object_kind = *(uint *)(LOAD64(lua_state - 8) + 408LL);
    replace_scripts((L2CAgent*)l2c_agent, battle_object_category, battle_object_kind);
  }

  // Original clear_lua_stack:
  u64 v1 = LOAD64(l2c_agent + 8);
  u64 v2 = LOAD64(v1 + 16);
  u64 i = LOAD64(LOAD64(v1 + 32)) + 16LL;
  for (; v2 < i; v2 = LOAD64(v1 + 16)) {
    LOAD64(v1 + 16) = v2 + 16;
    *(u32 *)(v2 + 8) = 0;
  }
  LOAD64(v1 + 16) = i;
  return l2c_agent;
}