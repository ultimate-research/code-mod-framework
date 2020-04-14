#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventMask {
        u64 load_from_l2c_table(app::LinkEventMask *,lib::L2CValue const&) asm("_ZN3app8lua_bind39LinkEventMask__load_from_l2c_table_implEPNS_13LinkEventMaskERKN3lib8L2CValueE");
        u64 store_l2c_table(app::LinkEventMask const*) asm("_ZN3app8lua_bind35LinkEventMask__store_l2c_table_implEPKNS_13LinkEventMaskE");
        u64 store_l2c_table(app::LinkEventMask const*,lib::L2CValue const&) asm("_ZN3app8lua_bind35LinkEventMask__store_l2c_table_implEPKNS_13LinkEventMaskERKN3lib8L2CValueE");
    }
}
