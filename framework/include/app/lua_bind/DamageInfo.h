#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace DamageInfo {
        u64 load_from_l2c_table(app::DamageInfo *,lib::L2CValue const&) asm("_ZN3app8lua_bind36DamageInfo__load_from_l2c_table_implEPNS_10DamageInfoERKN3lib8L2CValueE");
        u64 store_l2c_table(app::DamageInfo const*) asm("_ZN3app8lua_bind32DamageInfo__store_l2c_table_implEPKNS_10DamageInfoE");
        u64 store_l2c_table(app::DamageInfo const*,lib::L2CValue const&) asm("_ZN3app8lua_bind32DamageInfo__store_l2c_table_implEPKNS_10DamageInfoERKN3lib8L2CValueE");
    }
}
