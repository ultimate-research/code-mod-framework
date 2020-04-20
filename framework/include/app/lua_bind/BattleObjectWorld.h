#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace BattleObjectWorld {
        u64 gravity_speed_coefficient(app::BattleObjectWorld *) asm("_ZN3app8lua_bind49BattleObjectWorld__gravity_speed_coefficient_implEPNS_17BattleObjectWorldE") LINKABLE;
        u64 scale_z(app::BattleObjectWorld *) asm("_ZN3app8lua_bind31BattleObjectWorld__scale_z_implEPNS_17BattleObjectWorldE") LINKABLE;
        u64 gravity_pos(app::BattleObjectWorld *) asm("_ZN3app8lua_bind35BattleObjectWorld__gravity_pos_implEPNS_17BattleObjectWorldE") LINKABLE;
        bool is_gravity_normal(app::BattleObjectWorld *) asm("_ZN3app8lua_bind41BattleObjectWorld__is_gravity_normal_implEPNS_17BattleObjectWorldE") LINKABLE;
        bool is_disable_reverse(app::BattleObjectWorld *) asm("_ZN3app8lua_bind42BattleObjectWorld__is_disable_reverse_implEPNS_17BattleObjectWorldE") LINKABLE;
    }
}
