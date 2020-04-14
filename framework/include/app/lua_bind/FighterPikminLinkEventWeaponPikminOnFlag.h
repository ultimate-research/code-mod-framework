#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPikminLinkEventWeaponPikminOnFlag {
        u64 load_from_l2c_table(app::FighterPikminLinkEventWeaponPikminOnFlag *,lib::L2CValue const&) asm("_ZN3app8lua_bind66FighterPikminLinkEventWeaponPikminOnFlag__load_from_l2c_table_implEPNS_40FighterPikminLinkEventWeaponPikminOnFlagERKN3lib8L2CValueE");
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminOnFlag const*) asm("_ZN3app8lua_bind62FighterPikminLinkEventWeaponPikminOnFlag__store_l2c_table_implEPKNS_40FighterPikminLinkEventWeaponPikminOnFlagE");
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminOnFlag const*,lib::L2CValue const&) asm("_ZN3app8lua_bind62FighterPikminLinkEventWeaponPikminOnFlag__store_l2c_table_implEPKNS_40FighterPikminLinkEventWeaponPikminOnFlagERKN3lib8L2CValueE");
    }
}
