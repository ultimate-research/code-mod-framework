#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace MotionAnimcmdModule {
        u64 exec_motion_lines(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind43MotionAnimcmdModule__exec_motion_lines_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 change_script_motion_lines(app::BattleObjectModuleAccessor *, u64,float,bool,bool,float,bool) asm("_ZN3app8lua_bind52MotionAnimcmdModule__change_script_motion_lines_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Efbbfb") LINKABLE;
        u64 change_script_motion_partial_lines(app::BattleObjectModuleAccessor *, u64,float,bool,float,bool) asm("_ZN3app8lua_bind60MotionAnimcmdModule__change_script_motion_partial_lines_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Efbfb") LINKABLE;
        u64 call_script_single(app::BattleObjectModuleAccessor *, int,u64,int) asm("_ZN3app8lua_bind44MotionAnimcmdModule__call_script_single_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40Ei") LINKABLE;
        u64 change_script_motion_line_single(app::BattleObjectModuleAccessor *, int,u64,int) asm("_ZN3app8lua_bind58MotionAnimcmdModule__change_script_motion_line_single_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40Ei") LINKABLE;
        u64 exec_motion_lines_initialize(app::BattleObjectModuleAccessor *, float,bool) asm("_ZN3app8lua_bind54MotionAnimcmdModule__exec_motion_lines_initialize_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 flush_current_motion(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind46MotionAnimcmdModule__flush_current_motion_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 flush(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind31MotionAnimcmdModule__flush_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_sleep(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind35MotionAnimcmdModule__set_sleep_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_sleep_game(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind40MotionAnimcmdModule__set_sleep_game_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_sleep_effect(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind42MotionAnimcmdModule__set_sleep_effect_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_sleep_sound(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind41MotionAnimcmdModule__set_sleep_sound_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_sleep(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34MotionAnimcmdModule__is_sleep_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 enable_skip_delay_update(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind50MotionAnimcmdModule__enable_skip_delay_update_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}
