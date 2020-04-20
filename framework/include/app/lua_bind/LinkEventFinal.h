#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventFinal {
        u64 load_from_l2c_table(app::LinkEventFinal *,lib::L2CValue const&) asm("_ZN3app8lua_bind40LinkEventFinal__load_from_l2c_table_implEPNS_14LinkEventFinalERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::LinkEventFinal const*) asm("_ZN3app8lua_bind36LinkEventFinal__store_l2c_table_implEPKNS_14LinkEventFinalE") LINKABLE;
        u64 store_l2c_table(app::LinkEventFinal const*,lib::L2CValue const&) asm("_ZN3app8lua_bind36LinkEventFinal__store_l2c_table_implEPKNS_14LinkEventFinalERKN3lib8L2CValueE") LINKABLE;
    }
}
