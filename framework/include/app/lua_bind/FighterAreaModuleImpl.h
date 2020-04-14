#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterAreaModuleImpl {
        u64 enable_fix_jostle_area(app::BattleObjectModuleAccessor *,float,float) asm("_ZN3app8lua_bind50FighterAreaModuleImpl__enable_fix_jostle_area_implEPNS_26BattleObjectModuleAccessorEff");
        u64 enable_fix_jostle_area_xy(app::BattleObjectModuleAccessor *,float,float,float,float) asm("_ZN3app8lua_bind53FighterAreaModuleImpl__enable_fix_jostle_area_xy_implEPNS_26BattleObjectModuleAccessorEffff");
        u64 disable_fix_jostle_area(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind51FighterAreaModuleImpl__disable_fix_jostle_area_implEPNS_26BattleObjectModuleAccessorE");
    }
}
