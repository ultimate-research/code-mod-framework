#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace WeaponShizueFishingrodLinkEventCliff {
        u64 load_from_l2c_table(app::WeaponShizueFishingrodLinkEventCliff *,lib::L2CValue const&) asm("_ZN3app8lua_bind62WeaponShizueFishingrodLinkEventCliff__load_from_l2c_table_implEPNS_36WeaponShizueFishingrodLinkEventCliffERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::WeaponShizueFishingrodLinkEventCliff const*) asm("_ZN3app8lua_bind58WeaponShizueFishingrodLinkEventCliff__store_l2c_table_implEPKNS_36WeaponShizueFishingrodLinkEventCliffE") LINKABLE;
        u64 store_l2c_table(app::WeaponShizueFishingrodLinkEventCliff const*,lib::L2CValue const&) asm("_ZN3app8lua_bind58WeaponShizueFishingrodLinkEventCliff__store_l2c_table_implEPKNS_36WeaponShizueFishingrodLinkEventCliffERKN3lib8L2CValueE") LINKABLE;
    }
}
