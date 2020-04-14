#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterInformation {
        u64 hit_point(app::FighterInformation *) asm("_ZN3app8lua_bind34FighterInformation__hit_point_implEPNS_18FighterInformationE");
        u64 fighter_color(app::FighterInformation *) asm("_ZN3app8lua_bind38FighterInformation__fighter_color_implEPNS_18FighterInformationE");
        bool is_operation_cpu(app::FighterInformation *) asm("_ZN3app8lua_bind41FighterInformation__is_operation_cpu_implEPNS_18FighterInformationE");
        u64 get_no_change_hp(app::FighterInformation *) asm("_ZN3app8lua_bind41FighterInformation__get_no_change_hp_implEPNS_18FighterInformationE");
        u64 dead_count(app::FighterInformation *,int) asm("_ZN3app8lua_bind35FighterInformation__dead_count_implEPNS_18FighterInformationEi");
        u64 stock_count(app::FighterInformation *) asm("_ZN3app8lua_bind36FighterInformation__stock_count_implEPNS_18FighterInformationE");
        u64 suicide_count(app::FighterInformation *,int) asm("_ZN3app8lua_bind38FighterInformation__suicide_count_implEPNS_18FighterInformationEi");
        u64 total_beat_count(app::FighterInformation *,int) asm("_ZN3app8lua_bind41FighterInformation__total_beat_count_implEPNS_18FighterInformationEi");
        bool is_last_dead_suicide(app::FighterInformation *) asm("_ZN3app8lua_bind45FighterInformation__is_last_dead_suicide_implEPNS_18FighterInformationE");
        void set_add_rebirth_wait_frame(app::FighterInformation *,float) asm("_ZN3app8lua_bind51FighterInformation__set_add_rebirth_wait_frame_implEPNS_18FighterInformationEf");
        bool is_on_rebirth(app::FighterInformation *) asm("_ZN3app8lua_bind38FighterInformation__is_on_rebirth_implEPNS_18FighterInformationE");
        u64 fighter_category(app::FighterInformation *) asm("_ZN3app8lua_bind41FighterInformation__fighter_category_implEPNS_18FighterInformationE");
        u64 gravity(app::FighterInformation *) asm("_ZN3app8lua_bind32FighterInformation__gravity_implEPNS_18FighterInformationE");
        u64 summon_boss_id(app::FighterInformation *) asm("_ZN3app8lua_bind39FighterInformation__summon_boss_id_implEPNS_18FighterInformationE");
        u64 summon_bomb_ready_frame(app::FighterInformation *) asm("_ZN3app8lua_bind48FighterInformation__summon_bomb_ready_frame_implEPNS_18FighterInformationE");
        u64 summon_pre_bomb_effect_frame(app::FighterInformation *) asm("_ZN3app8lua_bind53FighterInformation__summon_pre_bomb_effect_frame_implEPNS_18FighterInformationE");
        u64 summon_suicide_bomb_attack_mul(app::FighterInformation *) asm("_ZN3app8lua_bind55FighterInformation__summon_suicide_bomb_attack_mul_implEPNS_18FighterInformationE");
        u64 summon_suicide_bomb_reaction_mul(app::FighterInformation *) asm("_ZN3app8lua_bind57FighterInformation__summon_suicide_bomb_reaction_mul_implEPNS_18FighterInformationE");
        bool is_battle_event_stick_reverse(app::FighterInformation *) asm("_ZN3app8lua_bind54FighterInformation__is_battle_event_stick_reverse_implEPNS_18FighterInformationE");
        u64 get_log_int(app::FighterInformation *,int,int,int) asm("_ZN3app8lua_bind36FighterInformation__get_log_int_implEPNS_18FighterInformationEiii");
    }
}
