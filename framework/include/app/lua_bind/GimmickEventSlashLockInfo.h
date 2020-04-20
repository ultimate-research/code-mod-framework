#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventSlashLockInfo {
        u64 load_from_l2c_table(app::GimmickEventSlashLockInfo *,lib::L2CValue const&) asm("_ZN3app8lua_bind51GimmickEventSlashLockInfo__load_from_l2c_table_implEPNS_25GimmickEventSlashLockInfoERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventSlashLockInfo const*) asm("_ZN3app8lua_bind47GimmickEventSlashLockInfo__store_l2c_table_implEPKNS_25GimmickEventSlashLockInfoE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventSlashLockInfo const*,lib::L2CValue const&) asm("_ZN3app8lua_bind47GimmickEventSlashLockInfo__store_l2c_table_implEPKNS_25GimmickEventSlashLockInfoERKN3lib8L2CValueE") LINKABLE;
    }
}
