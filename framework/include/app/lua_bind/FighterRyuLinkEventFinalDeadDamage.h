#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterRyuLinkEventFinalDeadDamage {
        u64 load_from_l2c_table(app::FighterRyuLinkEventFinalDeadDamage *,lib::L2CValue const&) asm("_ZN3app8lua_bind60FighterRyuLinkEventFinalDeadDamage__load_from_l2c_table_implEPNS_34FighterRyuLinkEventFinalDeadDamageERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::FighterRyuLinkEventFinalDeadDamage const*) asm("_ZN3app8lua_bind56FighterRyuLinkEventFinalDeadDamage__store_l2c_table_implEPKNS_34FighterRyuLinkEventFinalDeadDamageE") LINKABLE;
        u64 store_l2c_table(app::FighterRyuLinkEventFinalDeadDamage const*,lib::L2CValue const&) asm("_ZN3app8lua_bind56FighterRyuLinkEventFinalDeadDamage__store_l2c_table_implEPKNS_34FighterRyuLinkEventFinalDeadDamageERKN3lib8L2CValueE") LINKABLE;
    }
}
