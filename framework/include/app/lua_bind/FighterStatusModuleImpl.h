#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterStatusModuleImpl {
        u64 set_fighter_status_data(app::BattleObjectModuleAccessor *, bool,int,bool,bool,bool,unsigned long,unsigned int,unsigned int,unsigned int) asm("_ZN3app8lua_bind53FighterStatusModuleImpl__set_fighter_status_data_implEPNS_26BattleObjectModuleAccessorEbibbbmjjj") LINKABLE;
        u64 reset_log_action_info(app::BattleObjectModuleAccessor *, unsigned long) asm("_ZN3app8lua_bind51FighterStatusModuleImpl__reset_log_action_info_implEPNS_26BattleObjectModuleAccessorEm") LINKABLE;
        u64 off_disable_intrrupt_warp(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind55FighterStatusModuleImpl__off_disable_intrrupt_warp_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}
