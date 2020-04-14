#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace HitModule {
        u64 clean(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind21HitModule__clean_implEPNS_26BattleObjectModuleAccessorE");
        u64 sleep(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind21HitModule__sleep_implEPNS_26BattleObjectModuleAccessorEb");
        void set_status(app::BattleObjectModuleAccessor *,int,app::HitStatus,int) asm("_ZN3app8lua_bind26HitModule__set_status_implEPNS_26BattleObjectModuleAccessorEiNS_9HitStatusEi");
        void set_status_joint(app::BattleObjectModuleAccessor *,phx::Hash40,app::HitStatus,int) asm("_ZN3app8lua_bind32HitModule__set_status_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ENS_9HitStatusEi");
        void set_status_joint_default(app::BattleObjectModuleAccessor *,phx::Hash40,app::HitStatus,int) asm("_ZN3app8lua_bind40HitModule__set_status_joint_default_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ENS_9HitStatusEi");
        void set_status_all(app::BattleObjectModuleAccessor *,app::HitStatus,int) asm("_ZN3app8lua_bind30HitModule__set_status_all_implEPNS_26BattleObjectModuleAccessorENS_9HitStatusEi");
        void set_whole(app::BattleObjectModuleAccessor *,app::HitStatus,int) asm("_ZN3app8lua_bind25HitModule__set_whole_implEPNS_26BattleObjectModuleAccessorENS_9HitStatusEi");
        u64 get_whole(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind25HitModule__get_whole_implEPNS_26BattleObjectModuleAccessorEi");
        void set_check_catch(app::BattleObjectModuleAccessor *,bool,int) asm("_ZN3app8lua_bind31HitModule__set_check_catch_implEPNS_26BattleObjectModuleAccessorEbi");
        void set_xlu_global(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind30HitModule__set_xlu_global_implEPNS_26BattleObjectModuleAccessorEi");
        u64 cancel_xlu_global(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind33HitModule__cancel_xlu_global_implEPNS_26BattleObjectModuleAccessorEi");
        void set_xlu_frame_global(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind36HitModule__set_xlu_frame_global_implEPNS_26BattleObjectModuleAccessorEii");
        void set_invincible_frame_global(app::BattleObjectModuleAccessor *,int,bool,int) asm("_ZN3app8lua_bind43HitModule__set_invincible_frame_global_implEPNS_26BattleObjectModuleAccessorEibi");
        u64 get_status(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind26HitModule__get_status_implEPNS_26BattleObjectModuleAccessorEii");
        u64 get_total_status(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind32HitModule__get_total_status_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_total_status_disguise(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind41HitModule__get_total_status_disguise_implEPNS_26BattleObjectModuleAccessorEi");
        void set_total_status_disguise(app::BattleObjectModuleAccessor *,app::HitStatus,int) asm("_ZN3app8lua_bind41HitModule__set_total_status_disguise_implEPNS_26BattleObjectModuleAccessorENS_9HitStatusEi");
        u64 get_part_size(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind29HitModule__get_part_size_implEPNS_26BattleObjectModuleAccessorEi");
        void set_no_team(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind27HitModule__set_no_team_implEPNS_26BattleObjectModuleAccessorEb");
        void set_hit_stop_mul(app::BattleObjectModuleAccessor *,float,app::HitStopMulTarget,float) asm("_ZN3app8lua_bind32HitModule__set_hit_stop_mul_implEPNS_26BattleObjectModuleAccessorEfNS_16HitStopMulTargetEf");
        u64 get_center_pos(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind30HitModule__get_center_pos_implEPNS_26BattleObjectModuleAccessorEii");
        void set_defense_mul_status(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind38HitModule__set_defense_mul_status_implEPNS_26BattleObjectModuleAccessorEf");
        u64 exist_log(app::BattleObjectModuleAccessor *,unsigned int,int) asm("_ZN3app8lua_bind25HitModule__exist_log_implEPNS_26BattleObjectModuleAccessorEji");
    }
}
