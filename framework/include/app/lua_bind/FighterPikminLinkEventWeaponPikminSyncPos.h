#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPikminLinkEventWeaponPikminSyncPos {
        u64 load_from_l2c_table(app::FighterPikminLinkEventWeaponPikminSyncPos *,lib::L2CValue const&) asm("_ZN3app8lua_bind67FighterPikminLinkEventWeaponPikminSyncPos__load_from_l2c_table_implEPNS_41FighterPikminLinkEventWeaponPikminSyncPosERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSyncPos const*) asm("_ZN3app8lua_bind63FighterPikminLinkEventWeaponPikminSyncPos__store_l2c_table_implEPKNS_41FighterPikminLinkEventWeaponPikminSyncPosE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSyncPos const*,lib::L2CValue const&) asm("_ZN3app8lua_bind63FighterPikminLinkEventWeaponPikminSyncPos__store_l2c_table_implEPKNS_41FighterPikminLinkEventWeaponPikminSyncPosERKN3lib8L2CValueE") LINKABLE;
    }
}
