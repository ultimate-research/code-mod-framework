#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPikminLinkEventWeaponPikminSetInt {
        u64 load_from_l2c_table(app::FighterPikminLinkEventWeaponPikminSetInt *,lib::L2CValue const&) asm("_ZN3app8lua_bind66FighterPikminLinkEventWeaponPikminSetInt__load_from_l2c_table_implEPNS_40FighterPikminLinkEventWeaponPikminSetIntERKN3lib8L2CValueE");
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSetInt const*) asm("_ZN3app8lua_bind62FighterPikminLinkEventWeaponPikminSetInt__store_l2c_table_implEPKNS_40FighterPikminLinkEventWeaponPikminSetIntE");
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSetInt const*,lib::L2CValue const&) asm("_ZN3app8lua_bind62FighterPikminLinkEventWeaponPikminSetInt__store_l2c_table_implEPKNS_40FighterPikminLinkEventWeaponPikminSetIntERKN3lib8L2CValueE");
    }
}
