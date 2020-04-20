#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventCapturePulled {
        u64 load_from_l2c_table(app::LinkEventCapturePulled *,lib::L2CValue const&) asm("_ZN3app8lua_bind48LinkEventCapturePulled__load_from_l2c_table_implEPNS_22LinkEventCapturePulledERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::LinkEventCapturePulled const*) asm("_ZN3app8lua_bind44LinkEventCapturePulled__store_l2c_table_implEPKNS_22LinkEventCapturePulledE") LINKABLE;
        u64 store_l2c_table(app::LinkEventCapturePulled const*,lib::L2CValue const&) asm("_ZN3app8lua_bind44LinkEventCapturePulled__store_l2c_table_implEPKNS_22LinkEventCapturePulledERKN3lib8L2CValueE") LINKABLE;
    }
}
