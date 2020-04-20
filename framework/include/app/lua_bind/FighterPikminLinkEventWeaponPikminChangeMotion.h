#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPikminLinkEventWeaponPikminChangeMotion {
        u64 load_from_l2c_table(app::FighterPikminLinkEventWeaponPikminChangeMotion *,lib::L2CValue const&) asm("_ZN3app8lua_bind72FighterPikminLinkEventWeaponPikminChangeMotion__load_from_l2c_table_implEPNS_46FighterPikminLinkEventWeaponPikminChangeMotionERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminChangeMotion const*) asm("_ZN3app8lua_bind68FighterPikminLinkEventWeaponPikminChangeMotion__store_l2c_table_implEPKNS_46FighterPikminLinkEventWeaponPikminChangeMotionE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminChangeMotion const*,lib::L2CValue const&) asm("_ZN3app8lua_bind68FighterPikminLinkEventWeaponPikminChangeMotion__store_l2c_table_implEPKNS_46FighterPikminLinkEventWeaponPikminChangeMotionERKN3lib8L2CValueE") LINKABLE;
    }
}
