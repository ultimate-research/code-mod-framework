#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventNotify {
        u64 load_from_l2c_table(app::GimmickEventNotify *,lib::L2CValue const&) asm("_ZN3app8lua_bind44GimmickEventNotify__load_from_l2c_table_implEPNS_18GimmickEventNotifyERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventNotify const*) asm("_ZN3app8lua_bind40GimmickEventNotify__store_l2c_table_implEPKNS_18GimmickEventNotifyE");
        u64 store_l2c_table(app::GimmickEventNotify const*,lib::L2CValue const&) asm("_ZN3app8lua_bind40GimmickEventNotify__store_l2c_table_implEPKNS_18GimmickEventNotifyERKN3lib8L2CValueE");
    }
}
