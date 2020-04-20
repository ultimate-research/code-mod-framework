#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventDrumRelease {
        u64 load_from_l2c_table(app::GimmickEventDrumRelease *,lib::L2CValue const&) asm("_ZN3app8lua_bind49GimmickEventDrumRelease__load_from_l2c_table_implEPNS_23GimmickEventDrumReleaseERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventDrumRelease const*) asm("_ZN3app8lua_bind45GimmickEventDrumRelease__store_l2c_table_implEPKNS_23GimmickEventDrumReleaseE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventDrumRelease const*,lib::L2CValue const&) asm("_ZN3app8lua_bind45GimmickEventDrumRelease__store_l2c_table_implEPKNS_23GimmickEventDrumReleaseERKN3lib8L2CValueE") LINKABLE;
    }
}
