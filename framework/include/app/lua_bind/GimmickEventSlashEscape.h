#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventSlashEscape {
        u64 load_from_l2c_table(app::GimmickEventSlashEscape *,lib::L2CValue const&) asm("_ZN3app8lua_bind49GimmickEventSlashEscape__load_from_l2c_table_implEPNS_23GimmickEventSlashEscapeERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventSlashEscape const*) asm("_ZN3app8lua_bind45GimmickEventSlashEscape__store_l2c_table_implEPKNS_23GimmickEventSlashEscapeE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventSlashEscape const*,lib::L2CValue const&) asm("_ZN3app8lua_bind45GimmickEventSlashEscape__store_l2c_table_implEPKNS_23GimmickEventSlashEscapeERKN3lib8L2CValueE") LINKABLE;
    }
}
