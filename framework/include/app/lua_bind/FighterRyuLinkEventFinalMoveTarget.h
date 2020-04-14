#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterRyuLinkEventFinalMoveTarget {
        u64 load_from_l2c_table(app::FighterRyuLinkEventFinalMoveTarget *,lib::L2CValue const&) asm("_ZN3app8lua_bind60FighterRyuLinkEventFinalMoveTarget__load_from_l2c_table_implEPNS_34FighterRyuLinkEventFinalMoveTargetERKN3lib8L2CValueE");
        u64 store_l2c_table(app::FighterRyuLinkEventFinalMoveTarget const*) asm("_ZN3app8lua_bind56FighterRyuLinkEventFinalMoveTarget__store_l2c_table_implEPKNS_34FighterRyuLinkEventFinalMoveTargetE");
        u64 store_l2c_table(app::FighterRyuLinkEventFinalMoveTarget const*,lib::L2CValue const&) asm("_ZN3app8lua_bind56FighterRyuLinkEventFinalMoveTarget__store_l2c_table_implEPKNS_34FighterRyuLinkEventFinalMoveTargetERKN3lib8L2CValueE");
    }
}
