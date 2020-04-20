#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterCloudLinkEventFinal {
        u64 load_from_l2c_table(app::FighterCloudLinkEventFinal *,lib::L2CValue const&) asm("_ZN3app8lua_bind52FighterCloudLinkEventFinal__load_from_l2c_table_implEPNS_26FighterCloudLinkEventFinalERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::FighterCloudLinkEventFinal const*) asm("_ZN3app8lua_bind48FighterCloudLinkEventFinal__store_l2c_table_implEPKNS_26FighterCloudLinkEventFinalE") LINKABLE;
        u64 store_l2c_table(app::FighterCloudLinkEventFinal const*,lib::L2CValue const&) asm("_ZN3app8lua_bind48FighterCloudLinkEventFinal__store_l2c_table_implEPKNS_26FighterCloudLinkEventFinalERKN3lib8L2CValueE") LINKABLE;
    }
}
