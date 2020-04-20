#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace Rhombus2 {
        u64 load_from_l2c_table(app::Rhombus2 *,lib::L2CValue const&) asm("_ZN3app8lua_bind34Rhombus2__load_from_l2c_table_implEPNS_8Rhombus2ERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::Rhombus2 const*) asm("_ZN3app8lua_bind30Rhombus2__store_l2c_table_implEPKNS_8Rhombus2E") LINKABLE;
        u64 store_l2c_table(app::Rhombus2 const*,lib::L2CValue const&) asm("_ZN3app8lua_bind30Rhombus2__store_l2c_table_implEPKNS_8Rhombus2ERKN3lib8L2CValueE") LINKABLE;
    }
}
