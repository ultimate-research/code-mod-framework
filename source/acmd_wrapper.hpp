#include <switch.h>

#include "acmd_imports.hpp"
#include "l2c_imports.hpp"
#include "lua_helper.hpp"

using namespace lib;

struct ACMD
{
    L2CAgent* l2c_agent;
    void frame(float f) {
        app::sv_animcmd::frame(l2c_agent->lua_state_agent, f);
        l2c_agent->clear_lua_stack();
    }

    bool is_excute() {
        app::sv_animcmd::is_excute(l2c_agent->lua_state_agent);
        L2CValue is_excute;
        get_lua_stack(l2c_agent, 1, (u64*)&is_excute);
        bool excute = is_excute.raw;
        l2c_agent->clear_lua_stack();
        return excute;
    }

    void ATTACK(
        u64 i1,
        u64 i2,
        u64 h1,
        float f1,
        u64 i3,
        u64 i4,
        u64 i5,
        u64 i6,
        float f2,
        float f3,
        float f4,
        float f5,
        //void,
        //void,
        //void,
        float f6,
        float f7,
        u64 i7,
        u64 i8,
        u64 i9,
        u64 i10,
        float f8,
        u64 i11,
        u64 i12,
        u64 i13,
        u64 i14,
        u64 i15,
        u64 i16,
        u64 i17,
        u64 i18,
        u64 i19,
        u64 i20,
        u64 h2,
        u64 i21,
        u64 i22,
        u64 i23
    ) {
        L2CValue hitbox_params[36] = {
            {.type = L2C_integer, .raw = i1},    // ID
            {.type = L2C_integer, .raw = i2},    // Unk
            {.type = L2C_hash, .raw = h1},   // Joint
            {.type = L2C_number, .raw_float = f1}, // Damage
            {.type = L2C_integer, .raw = i3},   // Angle
            {.type = L2C_integer, .raw = i4},   // KBG
            {.type = L2C_integer, .raw = i5},    // WBKB
            {.type = L2C_integer, .raw = i6},   // BKB
            {.type = L2C_number, .raw_float = f2}, // Size
            {.type = L2C_number, .raw_float = f3},   // X
            {.type = L2C_number, .raw_float = f4}, // Y
            {.type = L2C_number, .raw_float = f5},   // Z
            {.type = L2C_void, .raw = 0},   // X2
            {.type = L2C_void, .raw = 0},   // Y2
            {.type = L2C_void, .raw = 0},   // Z2
            {.type = L2C_number, .raw_float = f6},   // Hitlag
            {.type = L2C_number, .raw_float = f7},   // SDI
            {.type = L2C_integer, .raw = i7},
            {.type = L2C_integer, .raw = i8},
            {.type = L2C_integer, .raw = i9},
            {.type = L2C_integer, .raw = i10},
            {.type = L2C_number, .raw_float = f8},
            {.type = L2C_integer, .raw = i11},
            {.type = L2C_integer, .raw = i12},
            {.type = L2C_integer, .raw = i13},
            {.type = L2C_integer, .raw = i14},
            {.type = L2C_integer, .raw = i15},
            {.type = L2C_integer, .raw = i16},
            {.type = L2C_integer, .raw = i17},
            {.type = L2C_integer, .raw = i18},
            {.type = L2C_integer, .raw = i19},
            {.type = L2C_integer, .raw = i20},
            {.type = L2C_hash, .raw = h2},
            {.type = L2C_integer, .raw = i21},
            {.type = L2C_integer, .raw = i22},
            {.type = L2C_integer, .raw = i23},
        };

        for (size_t i = 0; i < 36; i++)
            l2c_agent->push_lua_stack(&hitbox_params[i]);

        app::sv_animcmd::ATTACK(l2c_agent->lua_state_agent);

        l2c_agent->clear_lua_stack();
    }
};