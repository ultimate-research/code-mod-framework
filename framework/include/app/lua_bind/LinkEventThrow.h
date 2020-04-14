#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventThrow {
        u64 load_from_l2c_table(app::LinkEventThrow *,lib::L2CValue const&) asm("_ZN3app8lua_bind40LinkEventThrow__load_from_l2c_table_implEPNS_14LinkEventThrowERKN3lib8L2CValueE");
        u64 store_l2c_table(app::LinkEventThrow const*) asm("_ZN3app8lua_bind36LinkEventThrow__store_l2c_table_implEPKNS_14LinkEventThrowE");
        u64 store_l2c_table(app::LinkEventThrow const*,lib::L2CValue const&) asm("_ZN3app8lua_bind36LinkEventThrow__store_l2c_table_implEPKNS_14LinkEventThrowERKN3lib8L2CValueE");
    }
}
