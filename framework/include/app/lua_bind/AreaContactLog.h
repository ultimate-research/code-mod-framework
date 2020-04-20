#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace AreaContactLog {
        u64 load_from_l2c_table(app::AreaContactLog *,lib::L2CValue const&) asm("_ZN3app8lua_bind40AreaContactLog__load_from_l2c_table_implEPNS_14AreaContactLogERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::AreaContactLog const*) asm("_ZN3app8lua_bind36AreaContactLog__store_l2c_table_implEPKNS_14AreaContactLogE") LINKABLE;
        u64 store_l2c_table(app::AreaContactLog const*,lib::L2CValue const&) asm("_ZN3app8lua_bind36AreaContactLog__store_l2c_table_implEPKNS_14AreaContactLogERKN3lib8L2CValueE") LINKABLE;
    }
}
