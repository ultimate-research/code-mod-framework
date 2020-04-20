#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace DamageModule {
        u64 sleep(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind24DamageModule__sleep_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 init_damage(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind30DamageModule__init_damage_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_force_damage(app::BattleObjectModuleAccessor *, unsigned int,const Vector3f*,int,int,bool,bool,bool,bool) asm("_ZN3app8lua_bind35DamageModule__set_force_damage_implEPNS_26BattleObjectModuleAccessorEjRKN3phx8Vector3fEiibbbb") LINKABLE;
        u64 add_damage(app::BattleObjectModuleAccessor *, float,int) asm("_ZN3app8lua_bind29DamageModule__add_damage_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 damage(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind25DamageModule__damage_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 reaction(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind27DamageModule__reaction_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 power_max(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind28DamageModule__power_max_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 check_no_reaction(app::BattleObjectModuleAccessor *, app::DamageInfo const&) asm("_ZN3app8lua_bind36DamageModule__check_no_reaction_implEPNS_26BattleObjectModuleAccessorERKNS_10DamageInfoE") LINKABLE;
        u64 set_no_reaction_mode_status(app::BattleObjectModuleAccessor *, app::DamageNoReactionMode,float,float,int) asm("_ZN3app8lua_bind46DamageModule__set_no_reaction_mode_status_implEPNS_26BattleObjectModuleAccessorENS_20DamageNoReactionModeEffi") LINKABLE;
        u64 reset_no_reaction_mode_status(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind48DamageModule__reset_no_reaction_mode_status_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_no_reaction_damage_power(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind47DamageModule__set_no_reaction_damage_power_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_no_reaction_no_effect(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind44DamageModule__set_no_reaction_no_effect_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_no_reaction_mode_perfect(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind46DamageModule__is_no_reaction_mode_perfect_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 damage_log(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29DamageModule__damage_log_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_attacker_info(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind36DamageModule__set_attacker_info_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        bool is_capture_cut(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind33DamageModule__is_capture_cut_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_ignore_capture_cut_no(app::BattleObjectModuleAccessor *, signed char) asm("_ZN3app8lua_bind44DamageModule__set_ignore_capture_cut_no_implEPNS_26BattleObjectModuleAccessorEa") LINKABLE;
        u64 set_damage_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind33DamageModule__set_damage_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_damage_mul_2nd(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind37DamageModule__set_damage_mul_2nd_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_force_damage_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39DamageModule__set_force_damage_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_reaction_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind35DamageModule__set_reaction_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_reaction_mul_2nd(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39DamageModule__set_reaction_mul_2nd_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_reaction_mul_4th(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39DamageModule__set_reaction_mul_4th_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_weak_param(app::BattleObjectModuleAccessor *, u64,float) asm("_ZN3app8lua_bind33DamageModule__set_weak_param_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ef") LINKABLE;
        u64 set_damage_lock(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind34DamageModule__set_damage_lock_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_damage_lock_2nd(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind38DamageModule__set_damage_lock_2nd_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_damage_lock(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33DamageModule__is_damage_lock_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 heal(app::BattleObjectModuleAccessor *, float,int) asm("_ZN3app8lua_bind23DamageModule__heal_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 overwrite_log_reaction_frame(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind47DamageModule__overwrite_log_reaction_frame_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 start_damage_info_log(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40DamageModule__start_damage_info_log_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 end_damage_info_log(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38DamageModule__end_damage_info_log_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_force_damage_from_last_damage(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind52DamageModule__set_force_damage_from_last_damage_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_paralyze(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30DamageModule__is_paralyze_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_critical_hit(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind35DamageModule__set_critical_hit_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_critical_hit(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34DamageModule__is_critical_hit_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}
