#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPikminLinkEventWeaponPikminChangeStatus {
        u64 load_from_l2c_table(app::FighterPikminLinkEventWeaponPikminChangeStatus *,lib::L2CValue const&) asm("_ZN3app8lua_bind72FighterPikminLinkEventWeaponPikminChangeStatus__load_from_l2c_table_implEPNS_46FighterPikminLinkEventWeaponPikminChangeStatusERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminChangeStatus const*) asm("_ZN3app8lua_bind68FighterPikminLinkEventWeaponPikminChangeStatus__store_l2c_table_implEPKNS_46FighterPikminLinkEventWeaponPikminChangeStatusE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminChangeStatus const*,lib::L2CValue const&) asm("_ZN3app8lua_bind68FighterPikminLinkEventWeaponPikminChangeStatus__store_l2c_table_implEPKNS_46FighterPikminLinkEventWeaponPikminChangeStatusERKN3lib8L2CValueE") LINKABLE;
    }
}
