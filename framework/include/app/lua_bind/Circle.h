#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace Circle {
        u64 load_from_l2c_table(app::Circle *,lib::L2CValue const&) asm("_ZN3app8lua_bind32Circle__load_from_l2c_table_implEPNS_6CircleERKN3lib8L2CValueE");
        u64 store_l2c_table(app::Circle const*) asm("_ZN3app8lua_bind28Circle__store_l2c_table_implEPKNS_6CircleE");
        u64 store_l2c_table(app::Circle const*,lib::L2CValue const&) asm("_ZN3app8lua_bind28Circle__store_l2c_table_implEPKNS_6CircleERKN3lib8L2CValueE");
    }
}
