#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace WeaponShizueFishingrodLinkEventCut {
        u64 load_from_l2c_table(app::WeaponShizueFishingrodLinkEventCut *,lib::L2CValue const&) asm("_ZN3app8lua_bind60WeaponShizueFishingrodLinkEventCut__load_from_l2c_table_implEPNS_34WeaponShizueFishingrodLinkEventCutERKN3lib8L2CValueE");
        u64 store_l2c_table(app::WeaponShizueFishingrodLinkEventCut const*) asm("_ZN3app8lua_bind56WeaponShizueFishingrodLinkEventCut__store_l2c_table_implEPKNS_34WeaponShizueFishingrodLinkEventCutE");
        u64 store_l2c_table(app::WeaponShizueFishingrodLinkEventCut const*,lib::L2CValue const&) asm("_ZN3app8lua_bind56WeaponShizueFishingrodLinkEventCut__store_l2c_table_implEPKNS_34WeaponShizueFishingrodLinkEventCutERKN3lib8L2CValueE");
    }
}
