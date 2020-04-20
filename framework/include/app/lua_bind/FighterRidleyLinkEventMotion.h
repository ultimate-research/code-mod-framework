#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterRidleyLinkEventMotion {
        u64 load_from_l2c_table(app::FighterRidleyLinkEventMotion *,lib::L2CValue const&) asm("_ZN3app8lua_bind54FighterRidleyLinkEventMotion__load_from_l2c_table_implEPNS_28FighterRidleyLinkEventMotionERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::FighterRidleyLinkEventMotion const*) asm("_ZN3app8lua_bind50FighterRidleyLinkEventMotion__store_l2c_table_implEPKNS_28FighterRidleyLinkEventMotionE") LINKABLE;
        u64 store_l2c_table(app::FighterRidleyLinkEventMotion const*,lib::L2CValue const&) asm("_ZN3app8lua_bind50FighterRidleyLinkEventMotion__store_l2c_table_implEPKNS_28FighterRidleyLinkEventMotionERKN3lib8L2CValueE") LINKABLE;
    }
}
