#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventDrumPos {
        u64 load_from_l2c_table(app::GimmickEventDrumPos *,lib::L2CValue const&) asm("_ZN3app8lua_bind45GimmickEventDrumPos__load_from_l2c_table_implEPNS_19GimmickEventDrumPosERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventDrumPos const*) asm("_ZN3app8lua_bind41GimmickEventDrumPos__store_l2c_table_implEPKNS_19GimmickEventDrumPosE");
        u64 store_l2c_table(app::GimmickEventDrumPos const*,lib::L2CValue const&) asm("_ZN3app8lua_bind41GimmickEventDrumPos__store_l2c_table_implEPKNS_19GimmickEventDrumPosERKN3lib8L2CValueE");
    }
}
