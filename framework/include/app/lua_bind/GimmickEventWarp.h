#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventWarp {
        u64 load_from_l2c_table(app::GimmickEventWarp *,lib::L2CValue const&) asm("_ZN3app8lua_bind42GimmickEventWarp__load_from_l2c_table_implEPNS_16GimmickEventWarpERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventWarp const*) asm("_ZN3app8lua_bind38GimmickEventWarp__store_l2c_table_implEPKNS_16GimmickEventWarpE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventWarp const*,lib::L2CValue const&) asm("_ZN3app8lua_bind38GimmickEventWarp__store_l2c_table_implEPKNS_16GimmickEventWarpERKN3lib8L2CValueE") LINKABLE;
    }
}
