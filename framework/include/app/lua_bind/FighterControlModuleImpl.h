#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterControlModuleImpl {
        u64 reserve_on_attack_button(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind55FighterControlModuleImpl__reserve_on_attack_button_implEPNS_26BattleObjectModuleAccessorE");
        u64 update_attack_air_kind(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind53FighterControlModuleImpl__update_attack_air_kind_implEPNS_26BattleObjectModuleAccessorEb");
        u64 get_param_dash_s4_frame(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind54FighterControlModuleImpl__get_param_dash_s4_frame_implEPNS_26BattleObjectModuleAccessorE");
        u64 get_param_attack_hi4_flick_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind59FighterControlModuleImpl__get_param_attack_hi4_flick_y_implEPNS_26BattleObjectModuleAccessorE");
        u64 get_param_attack_lw4_flick_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind59FighterControlModuleImpl__get_param_attack_lw4_flick_y_implEPNS_26BattleObjectModuleAccessorE");
        u64 special_command_236236_step(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind58FighterControlModuleImpl__special_command_236236_step_implEPNS_26BattleObjectModuleAccessorE");
        u64 special_command_214214_step(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind58FighterControlModuleImpl__special_command_214214_step_implEPNS_26BattleObjectModuleAccessorE");
        u64 special_command_21416_step(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind57FighterControlModuleImpl__special_command_21416_step_implEPNS_26BattleObjectModuleAccessorE");
        u64 special_command_23634_step(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind57FighterControlModuleImpl__special_command_23634_step_implEPNS_26BattleObjectModuleAccessorE");
        u64 check_hit_stop_delay_command(app::BattleObjectModuleAccessor *,phx::Vector2f &) asm("_ZN3app8lua_bind59FighterControlModuleImpl__check_hit_stop_delay_command_implEPNS_26BattleObjectModuleAccessorERN3phx8Vector2fE");
        bool is_enable_hit_stop_delay(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind55FighterControlModuleImpl__is_enable_hit_stop_delay_implEPNS_26BattleObjectModuleAccessorE");
        bool is_enable_hit_stop_delay_life(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind60FighterControlModuleImpl__is_enable_hit_stop_delay_life_implEPNS_26BattleObjectModuleAccessorE");
        u64 get_stick_button_trigger(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind55FighterControlModuleImpl__get_stick_button_trigger_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_stick_button_repeat(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind54FighterControlModuleImpl__get_stick_button_repeat_implEPNS_26BattleObjectModuleAccessorEi");
    }
}
