#pragma once

#include "types.h"

namespace app::lua_bind {
    namespace FighterStopModuleImpl {
        float get_damage_stop_frame(u64) asm("_ZN3app8lua_bind49FighterStopModuleImpl__get_damage_stop_frame_implEPNS_26BattleObjectModuleAccessorE");
        bool is_damage_stop(u64) asm("_ZN3app8lua_bind42FighterStopModuleImpl__is_damage_stop_implEPNS_26BattleObjectModuleAccessorE");
    }
}