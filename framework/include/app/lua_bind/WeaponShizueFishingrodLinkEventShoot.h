#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace WeaponShizueFishingrodLinkEventShoot {
        u64 load_from_l2c_table(app::WeaponShizueFishingrodLinkEventShoot *,lib::L2CValue const&) asm("_ZN3app8lua_bind62WeaponShizueFishingrodLinkEventShoot__load_from_l2c_table_implEPNS_36WeaponShizueFishingrodLinkEventShootERKN3lib8L2CValueE");
        u64 store_l2c_table(app::WeaponShizueFishingrodLinkEventShoot const*) asm("_ZN3app8lua_bind58WeaponShizueFishingrodLinkEventShoot__store_l2c_table_implEPKNS_36WeaponShizueFishingrodLinkEventShootE");
        u64 store_l2c_table(app::WeaponShizueFishingrodLinkEventShoot const*,lib::L2CValue const&) asm("_ZN3app8lua_bind58WeaponShizueFishingrodLinkEventShoot__store_l2c_table_implEPKNS_36WeaponShizueFishingrodLinkEventShootERKN3lib8L2CValueE");
    }
}
