#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventPos {
        u64 load_from_l2c_table(app::GimmickEventPos *,lib::L2CValue const&) asm("_ZN3app8lua_bind41GimmickEventPos__load_from_l2c_table_implEPNS_15GimmickEventPosERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventPos const*) asm("_ZN3app8lua_bind37GimmickEventPos__store_l2c_table_implEPKNS_15GimmickEventPosE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventPos const*,lib::L2CValue const&) asm("_ZN3app8lua_bind37GimmickEventPos__store_l2c_table_implEPKNS_15GimmickEventPosERKN3lib8L2CValueE") LINKABLE;
    }
}
