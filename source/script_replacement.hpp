#include <switch.h>

#include <stdint.h>

#include "crc32.h"

#include "l2c.hpp"
#include "l2c_imports.hpp"
#include "acmd_imports.hpp"
#include "lua_helper.hpp"

#define LOAD64 *(u64 *)

using namespace app::sv_animcmd;
using namespace lib;

u64 shine_replace(L2CAgent* l2c_agent, void* variadic);

void replace_scripts(L2CAgent* l2c_agent, u8 category, uint kind) {
    // fighter
    if (category == 0) {
        // fox
        if (kind == 0x7) {
            l2c_agent->sv_set_function_hash(&shine_replace, hash40("game_speciallwstart"));
            l2c_agent->sv_set_function_hash(&shine_replace, hash40("game_specialairlwstart"));
        }

        // peach
        if (kind == 0xD) {
        }
    }
}

// AnimCMD replacement function
u64 shine_replace(L2CAgent* l2c_agent, void* variadic) {
    // Frame 1
    frame(l2c_agent->lua_state_agent, 1);
    l2c_agent->clear_lua_stack();
    is_excute(l2c_agent->lua_state_agent);
    L2CValue is_excute;
    get_lua_stack(l2c_agent, 1, (u64*)&is_excute);
    if (is_excute.raw) {
        // Set up hitboxes
        l2c_agent->clear_lua_stack();

        L2CValue hitbox_params[36] = {
            {.type = L2C_integer, .raw = 0},    // ID
            {.type = L2C_integer, .raw = 0},    // Unk
            {.type = L2C_hash, .raw = 0x31ED91FCALL},   // Joint
            {.type = L2C_number, .raw_float = 10.0}, // Damage
            {.type = L2C_integer, .raw = 10},   // Angle
            {.type = L2C_integer, .raw = 32},   // KBG
            {.type = L2C_integer, .raw = 0},    // WBKB
            {.type = L2C_integer, .raw = 66},   // BKB
            {.type = L2C_number, .raw_float = 7.5}, // Size
            {.type = L2C_number, .raw_float = 0},   // X
            {.type = L2C_number, .raw_float = 6.5}, // Y
            {.type = L2C_number, .raw_float = 0},   // Z
            {.type = L2C_void, .raw = 0},   // X2
            {.type = L2C_void, .raw = 0},   // Y2
            {.type = L2C_void, .raw = 0},   // Z2
            {.type = L2C_number, .raw_float = 1},   // Hitlag
            {.type = L2C_number, .raw_float = 1},   // SDI
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_number, .raw_float = 0},
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_integer, .raw = 1},
            {.type = L2C_integer, .raw = 1},
            {.type = L2C_integer, .raw = 63},
            {.type = L2C_integer, .raw = 31},
            {.type = L2C_integer, .raw = 0},
            {.type = L2C_hash, .raw = 0x13462FCFE4LL},
            {.type = L2C_integer, .raw = 2},
            {.type = L2C_integer, .raw = 7},
            {.type = L2C_integer, .raw = 25},
        };

        for (size_t i = 0; i < 36; i++)
          l2c_agent->push_lua_stack(&hitbox_params[i]);
        ATTACK(l2c_agent->lua_state_agent);

        l2c_agent->clear_lua_stack();

        hitbox_params[0].raw = 1; hitbox_params[0].type =  L2C_integer; // ID
        hitbox_params[4].raw = 24; hitbox_params[4].type =  L2C_integer;    // Angle
        hitbox_params[5].raw = 45; hitbox_params[5].type =  L2C_integer;    // KBG

        for (size_t i = 0; i < 36; i++)
          l2c_agent->push_lua_stack(&hitbox_params[i]);
        ATTACK(l2c_agent->lua_state_agent);
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
