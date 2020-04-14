#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace CancelModule {
        bool is_enable_cancel(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35CancelModule__is_enable_cancel_implEPNS_26BattleObjectModuleAccessorE");
        u64 enable_cancel(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32CancelModule__enable_cancel_implEPNS_26BattleObjectModuleAccessorE");
    }
}
