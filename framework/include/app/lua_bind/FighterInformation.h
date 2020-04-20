#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterInformation {
        u64 hit_point(u64 /*fighter_information*/) asm("_ZN3app8lua_bind34FighterInformation__hit_point_implEPNS_18FighterInformationE") LINKABLE;
        u64 fighter_color(u64 /*fighter_information*/) asm("_ZN3app8lua_bind38FighterInformation__fighter_color_implEPNS_18FighterInformationE") LINKABLE;
        bool is_operation_cpu(u64 /*fighter_information*/) asm("_ZN3app8lua_bind41FighterInformation__is_operation_cpu_implEPNS_18FighterInformationE") LINKABLE;
        u64 get_no_change_hp(u64 /*fighter_information*/) asm("_ZN3app8lua_bind41FighterInformation__get_no_change_hp_implEPNS_18FighterInformationE") LINKABLE;
        u64 dead_count(u64 /*fighter_information*/,int) asm("_ZN3app8lua_bind35FighterInformation__dead_count_implEPNS_18FighterInformationEi") LINKABLE;
        u64 stock_count(u64 /*fighter_information*/) asm("_ZN3app8lua_bind36FighterInformation__stock_count_implEPNS_18FighterInformationE") LINKABLE;
        u64 suicide_count(u64 /*fighter_information*/,int) asm("_ZN3app8lua_bind38FighterInformation__suicide_count_implEPNS_18FighterInformationEi") LINKABLE;
        u64 total_beat_count(u64 /*fighter_information*/,int) asm("_ZN3app8lua_bind41FighterInformation__total_beat_count_implEPNS_18FighterInformationEi") LINKABLE;
        bool is_last_dead_suicide(u64 /*fighter_information*/) asm("_ZN3app8lua_bind45FighterInformation__is_last_dead_suicide_implEPNS_18FighterInformationE") LINKABLE;
        u64 set_add_rebirth_wait_frame(u64 /*fighter_information*/,float) asm("_ZN3app8lua_bind51FighterInformation__set_add_rebirth_wait_frame_implEPNS_18FighterInformationEf") LINKABLE;
        bool is_on_rebirth(u64 /*fighter_information*/) asm("_ZN3app8lua_bind38FighterInformation__is_on_rebirth_implEPNS_18FighterInformationE") LINKABLE;
        u64 fighter_category(u64 /*fighter_information*/) asm("_ZN3app8lua_bind41FighterInformation__fighter_category_implEPNS_18FighterInformationE") LINKABLE;
        u64 gravity(u64 /*fighter_information*/) asm("_ZN3app8lua_bind32FighterInformation__gravity_implEPNS_18FighterInformationE") LINKABLE;
        u64 summon_boss_id(u64 /*fighter_information*/) asm("_ZN3app8lua_bind39FighterInformation__summon_boss_id_implEPNS_18FighterInformationE") LINKABLE;
        u64 summon_bomb_ready_frame(u64 /*fighter_information*/) asm("_ZN3app8lua_bind48FighterInformation__summon_bomb_ready_frame_implEPNS_18FighterInformationE") LINKABLE;
        u64 summon_pre_bomb_effect_frame(u64 /*fighter_information*/) asm("_ZN3app8lua_bind53FighterInformation__summon_pre_bomb_effect_frame_implEPNS_18FighterInformationE") LINKABLE;
        u64 summon_suicide_bomb_attack_mul(u64 /*fighter_information*/) asm("_ZN3app8lua_bind55FighterInformation__summon_suicide_bomb_attack_mul_implEPNS_18FighterInformationE") LINKABLE;
        u64 summon_suicide_bomb_reaction_mul(u64 /*fighter_information*/) asm("_ZN3app8lua_bind57FighterInformation__summon_suicide_bomb_reaction_mul_implEPNS_18FighterInformationE") LINKABLE;
        bool is_battle_event_stick_reverse(u64 /*fighter_information*/) asm("_ZN3app8lua_bind54FighterInformation__is_battle_event_stick_reverse_implEPNS_18FighterInformationE") LINKABLE;
        u64 get_log_int(u64 /*fighter_information*/,int,int,int) asm("_ZN3app8lua_bind36FighterInformation__get_log_int_implEPNS_18FighterInformationEiii") LINKABLE;
    }
}
