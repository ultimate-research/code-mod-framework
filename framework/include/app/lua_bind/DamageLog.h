#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace DamageLog {
        u64 load_from_l2c_table(app::DamageLog *,lib::L2CValue const&) asm("_ZN3app8lua_bind35DamageLog__load_from_l2c_table_implEPNS_9DamageLogERKN3lib8L2CValueE");
        u64 store_l2c_table(app::DamageLog const*) asm("_ZN3app8lua_bind31DamageLog__store_l2c_table_implEPKNS_9DamageLogE");
        u64 store_l2c_table(app::DamageLog const*,lib::L2CValue const&) asm("_ZN3app8lua_bind31DamageLog__store_l2c_table_implEPKNS_9DamageLogERKN3lib8L2CValueE");
    }
}
