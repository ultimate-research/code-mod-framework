#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace WeaponShizueFishingrodLinkEventReel {
        u64 load_from_l2c_table(app::WeaponShizueFishingrodLinkEventReel *,lib::L2CValue const&) asm("_ZN3app8lua_bind61WeaponShizueFishingrodLinkEventReel__load_from_l2c_table_implEPNS_35WeaponShizueFishingrodLinkEventReelERKN3lib8L2CValueE");
        u64 store_l2c_table(app::WeaponShizueFishingrodLinkEventReel const*) asm("_ZN3app8lua_bind57WeaponShizueFishingrodLinkEventReel__store_l2c_table_implEPKNS_35WeaponShizueFishingrodLinkEventReelE");
        u64 store_l2c_table(app::WeaponShizueFishingrodLinkEventReel const*,lib::L2CValue const&) asm("_ZN3app8lua_bind57WeaponShizueFishingrodLinkEventReel__store_l2c_table_implEPKNS_35WeaponShizueFishingrodLinkEventReelERKN3lib8L2CValueE");
    }
}
