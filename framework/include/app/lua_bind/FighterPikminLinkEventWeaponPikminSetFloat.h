#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPikminLinkEventWeaponPikminSetFloat {
        u64 load_from_l2c_table(app::FighterPikminLinkEventWeaponPikminSetFloat *,lib::L2CValue const&) asm("_ZN3app8lua_bind68FighterPikminLinkEventWeaponPikminSetFloat__load_from_l2c_table_implEPNS_42FighterPikminLinkEventWeaponPikminSetFloatERKN3lib8L2CValueE");
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSetFloat const*) asm("_ZN3app8lua_bind64FighterPikminLinkEventWeaponPikminSetFloat__store_l2c_table_implEPKNS_42FighterPikminLinkEventWeaponPikminSetFloatE");
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSetFloat const*,lib::L2CValue const&) asm("_ZN3app8lua_bind64FighterPikminLinkEventWeaponPikminSetFloat__store_l2c_table_implEPKNS_42FighterPikminLinkEventWeaponPikminSetFloatERKN3lib8L2CValueE");
    }
}
