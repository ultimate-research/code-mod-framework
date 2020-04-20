#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterManager {
        int entry_count(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind32FighterManager__entry_count_implEPNS_14FighterManagerE") LINKABLE;
        float total_fighter_num(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind38FighterManager__total_fighter_num_implEPNS_14FighterManagerE") LINKABLE;
        int get_entry_id(u64 /*fighter_manager*/,int) asm("_ZN3app8lua_bind33FighterManager__get_entry_id_implEPNS_14FighterManagerEi") LINKABLE;
        int get_entry_no(u64 /*fighter_manager*/,int /*fighter_entry_id*/) asm("_ZN3app8lua_bind33FighterManager__get_entry_no_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        u64 get_fighter_entry(u64 /*fighter_manager*/,int /*fighter_entry_id*/) asm("_ZN3app8lua_bind38FighterManager__get_fighter_entry_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        u64 get_fighter_information(u64 /*fighter_manager*/,int /*fighter_entry_id*/) asm("_ZN3app8lua_bind44FighterManager__get_fighter_information_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        bool is_melee_mode_homerun(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind42FighterManager__is_melee_mode_homerun_implEPNS_14FighterManagerE") LINKABLE;
        bool is_homerun_versus(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind38FighterManager__is_homerun_versus_implEPNS_14FighterManagerE") LINKABLE;
        bool is_melee_mode_online_tournament(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind52FighterManager__is_melee_mode_online_tournament_implEPNS_14FighterManagerE") LINKABLE;
        u64 one_on_one_ratio(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind37FighterManager__one_on_one_ratio_implEPNS_14FighterManagerE") LINKABLE;
        bool is_discretion_final_enabled(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind48FighterManager__is_discretion_final_enabled_implEPNS_14FighterManagerE") LINKABLE;
        u64 get_top_rank_player_num(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind44FighterManager__get_top_rank_player_num_implEPNS_14FighterManagerE") LINKABLE;
        u64 get_top_rank_player(u64 /*fighter_manager*/,int) asm("_ZN3app8lua_bind40FighterManager__get_top_rank_player_implEPNS_14FighterManagerEi") LINKABLE;
        bool is_ready_go(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind32FighterManager__is_ready_go_implEPNS_14FighterManagerE") LINKABLE;
        u64 set_cursor_whole(u64 /*fighter_manager*/,bool) asm("_ZN3app8lua_bind37FighterManager__set_cursor_whole_implEPNS_14FighterManagerEb") LINKABLE;
        u64 get_fighter_pos(u64 /*fighter_manager*/,int /*fighter_entry_id*/,int) asm("_ZN3app8lua_bind36FighterManager__get_fighter_pos_implEPNS_14FighterManagerENS_14FighterEntryIDEi") LINKABLE;
        bool is_available_discretion_final(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind50FighterManager__is_available_discretion_final_implEPNS_14FighterManagerE") LINKABLE;
        u64 get_final_actor_entry_id(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind45FighterManager__get_final_actor_entry_id_implEPNS_14FighterManagerE") LINKABLE;
        bool is_final(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind29FighterManager__is_final_implEPNS_14FighterManagerE") LINKABLE;
        u64 set_final(u64 /*fighter_manager*/,int /*fighter_entry_id*/,app::FighterAvailableFinal,unsigned int) asm("_ZN3app8lua_bind30FighterManager__set_final_implEPNS_14FighterManagerENS_14FighterEntryIDENS_21FighterAvailableFinalEj") LINKABLE;
        u64 get_no_discretion_final_beat_count(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind55FighterManager__get_no_discretion_final_beat_count_implEPNS_14FighterManagerE") LINKABLE;
        u64 get_beat_point_diff_from_top(u64 /*fighter_manager*/,int /*fighter_entry_id*/) asm("_ZN3app8lua_bind49FighterManager__get_beat_point_diff_from_top_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        u64 set_final_fear_face(u64 /*fighter_manager*/,int /*fighter_entry_id*/,int) asm("_ZN3app8lua_bind40FighterManager__set_final_fear_face_implEPNS_14FighterManagerENS_14FighterEntryIDEi") LINKABLE;
        u64 start_finalbg(u64 /*fighter_manager*/,int,float) asm("_ZN3app8lua_bind34FighterManager__start_finalbg_implEPNS_14FighterManagerEif") LINKABLE;
        u64 exit_finalbg(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind33FighterManager__exit_finalbg_implEPNS_14FighterManagerE") LINKABLE;
        u64 set_visible_finalbg(u64 /*fighter_manager*/,bool) asm("_ZN3app8lua_bind40FighterManager__set_visible_finalbg_implEPNS_14FighterManagerEb") LINKABLE;
        u64 notify_log_event_collision_hit(u64 /*fighter_manager*/,unsigned int,unsigned int,float,int,bool) asm("_ZN3app8lua_bind51FighterManager__notify_log_event_collision_hit_implEPNS_14FighterManagerEjjfib") LINKABLE;
        bool is_process_technique(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind41FighterManager__is_process_technique_implEPNS_14FighterManagerE") LINKABLE;
        bool is_result_mode(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind35FighterManager__is_result_mode_implEPNS_14FighterManagerE") LINKABLE;
        bool is_disable_ko_camera(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind41FighterManager__is_disable_ko_camera_implEPNS_14FighterManagerE") LINKABLE;
        u64 enable_ko_camera(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind37FighterManager__enable_ko_camera_implEPNS_14FighterManagerE") LINKABLE;
        u64 disable_ko_camera(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind38FighterManager__disable_ko_camera_implEPNS_14FighterManagerE") LINKABLE;
        u64 set_dead_up_camera_hit_cursor_status(u64 /*fighter_manager*/,bool) asm("_ZN3app8lua_bind57FighterManager__set_dead_up_camera_hit_cursor_status_implEPNS_14FighterManagerEb") LINKABLE;
        u64 set_controller_rumble_all(u64 /*fighter_manager*/,u64,int,bool,unsigned int) asm("_ZN3app8lua_bind46FighterManager__set_controller_rumble_all_implEPNS_14FighterManagerEN3phx6Hash40Eibj") LINKABLE;
        bool is_rebirth_plate_line(u64 /*fighter_manager*/,int /*fighter_entry_id*/) asm("_ZN3app8lua_bind42FighterManager__is_rebirth_plate_line_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
        u64 set_position_lock(u64 /*fighter_manager*/,int /*fighter_entry_id*/,bool) asm("_ZN3app8lua_bind38FighterManager__set_position_lock_implEPNS_14FighterManagerENS_14FighterEntryIDEb") LINKABLE;
        u64 reset_fighter(u64 /*fighter_manager*/,bool) asm("_ZN3app8lua_bind34FighterManager__reset_fighter_implEPNS_14FighterManagerEb") LINKABLE;
        u64 prepare_movie(u64 /*fighter_manager*/,u64) asm("_ZN3app8lua_bind34FighterManager__prepare_movie_implEPNS_14FighterManagerEN3phx6Hash40E") LINKABLE;
        bool is_prepared_movie(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind38FighterManager__is_prepared_movie_implEPNS_14FighterManagerE") LINKABLE;
        u64 exit_movie(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind31FighterManager__exit_movie_implEPNS_14FighterManagerE") LINKABLE;
        bool is_process_movie(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind37FighterManager__is_process_movie_implEPNS_14FighterManagerE") LINKABLE;
        u64 start_movie(u64 /*fighter_manager*/,float) asm("_ZN3app8lua_bind32FighterManager__start_movie_implEPNS_14FighterManagerEf") LINKABLE;
        bool is_end_movie(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind33FighterManager__is_end_movie_implEPNS_14FighterManagerE") LINKABLE;
        u64 get_jack_final_cut_in(u64 /*fighter_manager*/) asm("_ZN3app8lua_bind42FighterManager__get_jack_final_cut_in_implEPNS_14FighterManagerE") LINKABLE;
    }
}
