#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPikminLinkEventWeaponPikminSyncLR {
        u64 load_from_l2c_table(app::FighterPikminLinkEventWeaponPikminSyncLR *,lib::L2CValue const&) asm("_ZN3app8lua_bind66FighterPikminLinkEventWeaponPikminSyncLR__load_from_l2c_table_implEPNS_40FighterPikminLinkEventWeaponPikminSyncLRERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSyncLR const*) asm("_ZN3app8lua_bind62FighterPikminLinkEventWeaponPikminSyncLR__store_l2c_table_implEPKNS_40FighterPikminLinkEventWeaponPikminSyncLRE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSyncLR const*,lib::L2CValue const&) asm("_ZN3app8lua_bind62FighterPikminLinkEventWeaponPikminSyncLR__store_l2c_table_implEPKNS_40FighterPikminLinkEventWeaponPikminSyncLRERKN3lib8L2CValueE") LINKABLE;
    }
}
