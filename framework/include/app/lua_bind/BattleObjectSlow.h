#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace BattleObjectSlow {
        u64 rate(app::BattleObjectSlow *) asm("_ZN3app8lua_bind27BattleObjectSlow__rate_implEPNS_16BattleObjectSlowE");
        bool is_estimate(app::BattleObjectSlow *) asm("_ZN3app8lua_bind34BattleObjectSlow__is_estimate_implEPNS_16BattleObjectSlowE");
        bool is_adjust(app::BattleObjectSlow *) asm("_ZN3app8lua_bind32BattleObjectSlow__is_adjust_implEPNS_16BattleObjectSlowE");
    }
}
