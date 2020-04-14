#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPikminLinkEventWeaponPikminSetPowerMulStatus {
        u64 load_from_l2c_table(app::FighterPikminLinkEventWeaponPikminSetPowerMulStatus *,lib::L2CValue const&) asm("_ZN3app8lua_bind77FighterPikminLinkEventWeaponPikminSetPowerMulStatus__load_from_l2c_table_implEPNS_51FighterPikminLinkEventWeaponPikminSetPowerMulStatusERKN3lib8L2CValueE");
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSetPowerMulStatus const*) asm("_ZN3app8lua_bind73FighterPikminLinkEventWeaponPikminSetPowerMulStatus__store_l2c_table_implEPKNS_51FighterPikminLinkEventWeaponPikminSetPowerMulStatusE");
        u64 store_l2c_table(app::FighterPikminLinkEventWeaponPikminSetPowerMulStatus const*,lib::L2CValue const&) asm("_ZN3app8lua_bind73FighterPikminLinkEventWeaponPikminSetPowerMulStatus__store_l2c_table_implEPKNS_51FighterPikminLinkEventWeaponPikminSetPowerMulStatusERKN3lib8L2CValueE");
    }
}
