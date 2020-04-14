#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ComboModule {
        void set(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind21ComboModule__set_implEPNS_26BattleObjectModuleAccessorEi");
        u64 reset(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23ComboModule__reset_implEPNS_26BattleObjectModuleAccessorE");
        u64 count(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23ComboModule__count_implEPNS_26BattleObjectModuleAccessorE");
    }
}
