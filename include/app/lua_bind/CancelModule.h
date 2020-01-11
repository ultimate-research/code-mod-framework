#pragma once

#include "types.h"

namespace app::lua_bind {
    namespace CancelModule {
        u64 enable_cancel(u64) asm("_ZN3app8lua_bind32CancelModule__enable_cancel_implEPNS_26BattleObjectModuleAccessorE");
        bool is_enable_cancel(u64) asm("_ZN3app8lua_bind35CancelModule__is_enable_cancel_implEPNS_26BattleObjectModuleAccessorE");
    }
}