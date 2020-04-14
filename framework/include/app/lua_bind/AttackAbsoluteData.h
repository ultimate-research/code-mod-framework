#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace AttackAbsoluteData {
        u64 load_from_l2c_table(app::AttackAbsoluteData *,lib::L2CValue const&) asm("_ZN3app8lua_bind44AttackAbsoluteData__load_from_l2c_table_implEPNS_18AttackAbsoluteDataERKN3lib8L2CValueE");
        u64 store_l2c_table(app::AttackAbsoluteData const*) asm("_ZN3app8lua_bind40AttackAbsoluteData__store_l2c_table_implEPKNS_18AttackAbsoluteDataE");
        u64 store_l2c_table(app::AttackAbsoluteData const*,lib::L2CValue const&) asm("_ZN3app8lua_bind40AttackAbsoluteData__store_l2c_table_implEPKNS_18AttackAbsoluteDataERKN3lib8L2CValueE");
    }
}
