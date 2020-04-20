#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace SoundModule {
        u64 set_position_sub(app::BattleObjectModuleAccessor *, const Vector3f*) asm("_ZN3app8lua_bind34SoundModule__set_position_sub_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        u64 play_se(app::BattleObjectModuleAccessor *, u64,bool,bool,bool,bool,app::SoundModule::enSEType) asm("_ZN3app8lua_bind25SoundModule__play_se_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40EbbbbNS_11SoundModule8enSETypeE") LINKABLE;
        u64 play_se_no3d(app::BattleObjectModuleAccessor *, u64,bool,bool) asm("_ZN3app8lua_bind30SoundModule__play_se_no3d_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ebb") LINKABLE;
        u64 play_se_pos(app::BattleObjectModuleAccessor *, u64,const Vector3f*,bool,bool) asm("_ZN3app8lua_bind29SoundModule__play_se_pos_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fEbb") LINKABLE;
        u64 play_status_se(app::BattleObjectModuleAccessor *, u64,bool,bool,bool) asm("_ZN3app8lua_bind32SoundModule__play_status_se_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ebbb") LINKABLE;
        u64 stop_status_se(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32SoundModule__stop_status_se_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 play_sequence(app::BattleObjectModuleAccessor *, u64,bool,bool) asm("_ZN3app8lua_bind31SoundModule__play_sequence_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ebb") LINKABLE;
        u64 set_play_hit_se_flag(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind38SoundModule__set_play_hit_se_flag_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 get_play_hit_se_flag(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38SoundModule__get_play_hit_se_flag_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_no_hit_se(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind31SoundModule__set_no_hit_se_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 get_no_hit_se(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31SoundModule__get_no_hit_se_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 play_hit_se(app::BattleObjectModuleAccessor *, float,app::AttackData const&,int) asm("_ZN3app8lua_bind29SoundModule__play_hit_se_implEPNS_26BattleObjectModuleAccessorEfRKNS_10AttackDataEi") LINKABLE;
        u64 play_damage_se(app::BattleObjectModuleAccessor *, int,int,u64,u64) asm("_ZN3app8lua_bind32SoundModule__play_damage_se_implEPNS_26BattleObjectModuleAccessorEiiN3phx6Hash40ES4_") LINKABLE;
        u64 play_step(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind27SoundModule__play_step_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 play_step_flippable(app::BattleObjectModuleAccessor *, u64,u64) asm("_ZN3app8lua_bind37SoundModule__play_step_flippable_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_") LINKABLE;
        u64 play_landing_se(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind33SoundModule__play_landing_se_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 play_down_se(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind30SoundModule__play_down_se_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 play_fly_voice(app::BattleObjectModuleAccessor *, u64,u64) asm("_ZN3app8lua_bind32SoundModule__play_fly_voice_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_") LINKABLE;
        u64 set_se_vol(app::BattleObjectModuleAccessor *, int,float,int) asm("_ZN3app8lua_bind28SoundModule__set_se_vol_implEPNS_26BattleObjectModuleAccessorEifi") LINKABLE;
        u64 get_se_vol(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind28SoundModule__get_se_vol_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_se_vol_db(app::BattleObjectModuleAccessor *, int,float,int) asm("_ZN3app8lua_bind31SoundModule__set_se_vol_db_implEPNS_26BattleObjectModuleAccessorEifi") LINKABLE;
        u64 get_se_vol_db(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31SoundModule__get_se_vol_db_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_auto_se_pitch(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind35SoundModule__set_auto_se_pitch_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_auto_se_pitch(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35SoundModule__get_auto_se_pitch_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_se_pitch_cent(app::BattleObjectModuleAccessor *, u64,float) asm("_ZN3app8lua_bind35SoundModule__set_se_pitch_cent_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ef") LINKABLE;
        u64 set_se_pitch_ratio(app::BattleObjectModuleAccessor *, u64,float) asm("_ZN3app8lua_bind36SoundModule__set_se_pitch_ratio_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ef") LINKABLE;
        u64 set_se_pitch_status(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind37SoundModule__set_se_pitch_status_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_se_pitch_status_handle(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind44SoundModule__set_se_pitch_status_handle_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_continue_se_at_game_finish(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind48SoundModule__set_continue_se_at_game_finish_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 stop_se(app::BattleObjectModuleAccessor *, u64,unsigned int) asm("_ZN3app8lua_bind25SoundModule__stop_se_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ej") LINKABLE;
        u64 stop_se_all(app::BattleObjectModuleAccessor *, unsigned int,bool,bool) asm("_ZN3app8lua_bind29SoundModule__stop_se_all_implEPNS_26BattleObjectModuleAccessorEjbb") LINKABLE;
        u64 stop_loop_se_all(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind34SoundModule__stop_loop_se_all_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 stop_se_handle(app::BattleObjectModuleAccessor *, int,unsigned int) asm("_ZN3app8lua_bind32SoundModule__stop_se_handle_implEPNS_26BattleObjectModuleAccessorEij") LINKABLE;
        u64 stop_all_sound(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32SoundModule__stop_all_sound_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 pause_se_all(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind30SoundModule__pause_se_all_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_se_speed(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind30SoundModule__set_se_speed_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_landing_se(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind32SoundModule__set_landing_se_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 get_landing_se(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32SoundModule__get_landing_se_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 play_landing_se_registered(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44SoundModule__play_landing_se_registered_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_takeout_se(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind32SoundModule__set_takeout_se_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 set_takeout_se_status(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind39SoundModule__set_takeout_se_status_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 reset_takeout_se(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34SoundModule__reset_takeout_se_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 play_takeout_se(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33SoundModule__play_takeout_se_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_takeout_se(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32SoundModule__get_takeout_se_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_takeout_se_status_flag(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44SoundModule__get_takeout_se_status_flag_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_play_inhivit(app::BattleObjectModuleAccessor *, u64,unsigned int) asm("_ZN3app8lua_bind34SoundModule__set_play_inhivit_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ej") LINKABLE;
        bool is_playing(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind28SoundModule__is_playing_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        bool is_playing_status(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind35SoundModule__is_playing_status_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        bool is_playing_voice(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34SoundModule__is_playing_voice_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_common_sound_label(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind40SoundModule__get_common_sound_label_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 play_status_bgm(app::BattleObjectModuleAccessor *, app::enStatusBGMType) asm("_ZN3app8lua_bind33SoundModule__play_status_bgm_implEPNS_26BattleObjectModuleAccessorENS_15enStatusBGMTypeE") LINKABLE;
        u64 set_gamespeed_se_calibration(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind46SoundModule__set_gamespeed_se_calibration_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_remain_se(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind31SoundModule__set_remain_se_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
    }
}
