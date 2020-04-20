#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ComboModule {
        u64 set(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind21ComboModule__set_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 reset(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23ComboModule__reset_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 count(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23ComboModule__count_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}
