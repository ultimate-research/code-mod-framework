#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventDrumCheckNeedHide {
        u64 load_from_l2c_table(app::GimmickEventDrumCheckNeedHide *,lib::L2CValue const&) asm("_ZN3app8lua_bind55GimmickEventDrumCheckNeedHide__load_from_l2c_table_implEPNS_29GimmickEventDrumCheckNeedHideERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventDrumCheckNeedHide const*) asm("_ZN3app8lua_bind51GimmickEventDrumCheckNeedHide__store_l2c_table_implEPKNS_29GimmickEventDrumCheckNeedHideE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventDrumCheckNeedHide const*,lib::L2CValue const&) asm("_ZN3app8lua_bind51GimmickEventDrumCheckNeedHide__store_l2c_table_implEPKNS_29GimmickEventDrumCheckNeedHideERKN3lib8L2CValueE") LINKABLE;
    }
}
