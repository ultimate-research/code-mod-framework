#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventCatch {
        u64 load_from_l2c_table(app::GimmickEventCatch *,lib::L2CValue const&) asm("_ZN3app8lua_bind43GimmickEventCatch__load_from_l2c_table_implEPNS_17GimmickEventCatchERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventCatch const*) asm("_ZN3app8lua_bind39GimmickEventCatch__store_l2c_table_implEPKNS_17GimmickEventCatchE");
        u64 store_l2c_table(app::GimmickEventCatch const*,lib::L2CValue const&) asm("_ZN3app8lua_bind39GimmickEventCatch__store_l2c_table_implEPKNS_17GimmickEventCatchERKN3lib8L2CValueE");
    }
}
