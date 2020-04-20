#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventDrumCheckNeedLock {
        u64 load_from_l2c_table(app::GimmickEventDrumCheckNeedLock *,lib::L2CValue const&) asm("_ZN3app8lua_bind55GimmickEventDrumCheckNeedLock__load_from_l2c_table_implEPNS_29GimmickEventDrumCheckNeedLockERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventDrumCheckNeedLock const*) asm("_ZN3app8lua_bind51GimmickEventDrumCheckNeedLock__store_l2c_table_implEPKNS_29GimmickEventDrumCheckNeedLockE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventDrumCheckNeedLock const*,lib::L2CValue const&) asm("_ZN3app8lua_bind51GimmickEventDrumCheckNeedLock__store_l2c_table_implEPKNS_29GimmickEventDrumCheckNeedLockERKN3lib8L2CValueE") LINKABLE;
    }
}
