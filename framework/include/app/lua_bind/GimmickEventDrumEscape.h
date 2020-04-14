#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventDrumEscape {
        u64 load_from_l2c_table(app::GimmickEventDrumEscape *,lib::L2CValue const&) asm("_ZN3app8lua_bind48GimmickEventDrumEscape__load_from_l2c_table_implEPNS_22GimmickEventDrumEscapeERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventDrumEscape const*) asm("_ZN3app8lua_bind44GimmickEventDrumEscape__store_l2c_table_implEPKNS_22GimmickEventDrumEscapeE");
        u64 store_l2c_table(app::GimmickEventDrumEscape const*,lib::L2CValue const&) asm("_ZN3app8lua_bind44GimmickEventDrumEscape__store_l2c_table_implEPKNS_22GimmickEventDrumEscapeERKN3lib8L2CValueE");
    }
}
