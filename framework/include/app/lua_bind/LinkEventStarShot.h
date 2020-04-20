#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventStarShot {
        u64 load_from_l2c_table(app::LinkEventStarShot *,lib::L2CValue const&) asm("_ZN3app8lua_bind43LinkEventStarShot__load_from_l2c_table_implEPNS_17LinkEventStarShotERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::LinkEventStarShot const*) asm("_ZN3app8lua_bind39LinkEventStarShot__store_l2c_table_implEPKNS_17LinkEventStarShotE") LINKABLE;
        u64 store_l2c_table(app::LinkEventStarShot const*,lib::L2CValue const&) asm("_ZN3app8lua_bind39LinkEventStarShot__store_l2c_table_implEPKNS_17LinkEventStarShotERKN3lib8L2CValueE") LINKABLE;
    }
}
