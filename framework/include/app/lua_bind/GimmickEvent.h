#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEvent {
        u64 load_from_l2c_table(app::GimmickEvent *,lib::L2CValue const&) asm("_ZN3app8lua_bind38GimmickEvent__load_from_l2c_table_implEPNS_12GimmickEventERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEvent const*) asm("_ZN3app8lua_bind34GimmickEvent__store_l2c_table_implEPKNS_12GimmickEventE") LINKABLE;
        u64 store_l2c_table(app::GimmickEvent const*,lib::L2CValue const&) asm("_ZN3app8lua_bind34GimmickEvent__store_l2c_table_implEPKNS_12GimmickEventERKN3lib8L2CValueE") LINKABLE;
    }
}
