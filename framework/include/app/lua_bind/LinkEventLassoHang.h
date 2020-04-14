#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventLassoHang {
        u64 load_from_l2c_table(app::LinkEventLassoHang *,lib::L2CValue const&) asm("_ZN3app8lua_bind44LinkEventLassoHang__load_from_l2c_table_implEPNS_18LinkEventLassoHangERKN3lib8L2CValueE");
        u64 store_l2c_table(app::LinkEventLassoHang const*) asm("_ZN3app8lua_bind40LinkEventLassoHang__store_l2c_table_implEPKNS_18LinkEventLassoHangE");
        u64 store_l2c_table(app::LinkEventLassoHang const*,lib::L2CValue const&) asm("_ZN3app8lua_bind40LinkEventLassoHang__store_l2c_table_implEPKNS_18LinkEventLassoHangERKN3lib8L2CValueE");
    }
}
