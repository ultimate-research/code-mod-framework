#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventTouchItem {
        u64 load_from_l2c_table(app::LinkEventTouchItem *,lib::L2CValue const&) asm("_ZN3app8lua_bind44LinkEventTouchItem__load_from_l2c_table_implEPNS_18LinkEventTouchItemERKN3lib8L2CValueE");
        u64 store_l2c_table(app::LinkEventTouchItem const*) asm("_ZN3app8lua_bind40LinkEventTouchItem__store_l2c_table_implEPKNS_18LinkEventTouchItemE");
        u64 store_l2c_table(app::LinkEventTouchItem const*,lib::L2CValue const&) asm("_ZN3app8lua_bind40LinkEventTouchItem__store_l2c_table_implEPKNS_18LinkEventTouchItemERKN3lib8L2CValueE");
    }
}
