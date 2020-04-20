#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterWorkModuleImpl {
        u64 calc_param(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind38FighterWorkModuleImpl__calc_param_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        u64 calc_escape_air_slide_param(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind55FighterWorkModuleImpl__calc_escape_air_slide_param_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
    }
}
