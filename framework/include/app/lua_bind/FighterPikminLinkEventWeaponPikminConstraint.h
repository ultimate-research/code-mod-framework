#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPikminLinkEventWeaponPikminConstraint {
        u64 load_from_l2c_table(app::FighterPikminLinkEventWeaponPikminConstraint *,lib::L2CValue const&) asm("_ZN3app8lua_bind70FighterPikminLinkEventWeaponPikminConstraint__load_from_l2c_table_implEPNS_44FighterPikminLinkEventWeaponPikminConstraintERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminConstraint const*) asm("_ZN3app8lua_bind66FighterPikminLinkEventWeaponPikminConstraint__store_l2c_table_implEPKNS_44FighterPikminLinkEventWeaponPikminConstraintE") LINKABLE;
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminConstraint const*,lib::L2CValue const&) asm("_ZN3app8lua_bind66FighterPikminLinkEventWeaponPikminConstraint__store_l2c_table_implEPKNS_44FighterPikminLinkEventWeaponPikminConstraintERKN3lib8L2CValueE") LINKABLE;
    }
}
