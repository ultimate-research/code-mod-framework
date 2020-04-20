#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterStopModuleImpl {
        bool is_damage_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind42FighterStopModuleImpl__is_damage_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
		float get_damage_stop_frame(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind49FighterStopModuleImpl__get_damage_stop_frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}
