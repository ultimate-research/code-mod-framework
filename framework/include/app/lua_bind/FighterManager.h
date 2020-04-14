#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterManager {
        u64 entry_count(app::FighterManager *) asm("_ZN3app8lua_bind32FighterManager__entry_count_implEPNS_14FighterManagerE");
        u64 total_fighter_num(app::FighterManager *) asm("_ZN3app8lua_bind38FighterManager__total_fighter_num_implEPNS_14FighterManagerE");
        u64 get_entry_id(app::FighterManager *,int) asm("_ZN3app8lua_bind33FighterManager__get_entry_id_implEPNS_14FighterManagerEi");
        u64 get_entry_no(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind33FighterManager__get_entry_no_implEPNS_14FighterManagerENS_14FighterEntryIDE");
        u64 get_fighter_entry(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind38FighterManager__get_fighter_entry_implEPNS_14FighterManagerENS_14FighterEntryIDE");
        u64 get_fighter_information(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind44FighterManager__get_fighter_information_implEPNS_14FighterManagerENS_14FighterEntryIDE");
        bool is_melee_mode_homerun(app::FighterManager *) asm("_ZN3app8lua_bind42FighterManager__is_melee_mode_homerun_implEPNS_14FighterManagerE");
        bool is_homerun_versus(app::FighterManager *) asm("_ZN3app8lua_bind38FighterManager__is_homerun_versus_implEPNS_14FighterManagerE");
        bool is_melee_mode_online_tournament(app::FighterManager *) asm("_ZN3app8lua_bind52FighterManager__is_melee_mode_online_tournament_implEPNS_14FighterManagerE");
        u64 one_on_one_ratio(app::FighterManager *) asm("_ZN3app8lua_bind37FighterManager__one_on_one_ratio_implEPNS_14FighterManagerE");
        bool is_discretion_final_enabled(app::FighterManager *) asm("_ZN3app8lua_bind48FighterManager__is_discretion_final_enabled_implEPNS_14FighterManagerE");
        u64 get_top_rank_player_num(app::FighterManager *) asm("_ZN3app8lua_bind44FighterManager__get_top_rank_player_num_implEPNS_14FighterManagerE");
        u64 get_top_rank_player(app::FighterManager *,int) asm("_ZN3app8lua_bind40FighterManager__get_top_rank_player_implEPNS_14FighterManagerEi");
        bool is_ready_go(app::FighterManager *) asm("_ZN3app8lua_bind32FighterManager__is_ready_go_implEPNS_14FighterManagerE");
        void set_cursor_whole(app::FighterManager *,bool) asm("_ZN3app8lua_bind37FighterManager__set_cursor_whole_implEPNS_14FighterManagerEb");
        u64 get_fighter_pos(app::FighterManager *,app::FighterEntryID,int) asm("_ZN3app8lua_bind36FighterManager__get_fighter_pos_implEPNS_14FighterManagerENS_14FighterEntryIDEi");
        bool is_available_discretion_final(app::FighterManager *) asm("_ZN3app8lua_bind50FighterManager__is_available_discretion_final_implEPNS_14FighterManagerE");
        u64 get_final_actor_entry_id(app::FighterManager *) asm("_ZN3app8lua_bind45FighterManager__get_final_actor_entry_id_implEPNS_14FighterManagerE");
        bool is_final(app::FighterManager *) asm("_ZN3app8lua_bind29FighterManager__is_final_implEPNS_14FighterManagerE");
        void set_final(app::FighterManager *,app::FighterEntryID,app::FighterAvailableFinal,unsigned int) asm("_ZN3app8lua_bind30FighterManager__set_final_implEPNS_14FighterManagerENS_14FighterEntryIDENS_21FighterAvailableFinalEj");
        u64 get_no_discretion_final_beat_count(app::FighterManager *) asm("_ZN3app8lua_bind55FighterManager__get_no_discretion_final_beat_count_implEPNS_14FighterManagerE");
        u64 get_beat_point_diff_from_top(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind49FighterManager__get_beat_point_diff_from_top_implEPNS_14FighterManagerENS_14FighterEntryIDE");
        void set_final_fear_face(app::FighterManager *,app::FighterEntryID,int) asm("_ZN3app8lua_bind40FighterManager__set_final_fear_face_implEPNS_14FighterManagerENS_14FighterEntryIDEi");
        u64 start_finalbg(app::FighterManager *,int,float) asm("_ZN3app8lua_bind34FighterManager__start_finalbg_implEPNS_14FighterManagerEif");
        u64 exit_finalbg(app::FighterManager *) asm("_ZN3app8lua_bind33FighterManager__exit_finalbg_implEPNS_14FighterManagerE");
        void set_visible_finalbg(app::FighterManager *,bool) asm("_ZN3app8lua_bind40FighterManager__set_visible_finalbg_implEPNS_14FighterManagerEb");
        u64 notify_log_event_collision_hit(app::FighterManager *,unsigned int,unsigned int,float,int,bool) asm("_ZN3app8lua_bind51FighterManager__notify_log_event_collision_hit_implEPNS_14FighterManagerEjjfib");
        bool is_process_technique(app::FighterManager *) asm("_ZN3app8lua_bind41FighterManager__is_process_technique_implEPNS_14FighterManagerE");
        bool is_result_mode(app::FighterManager *) asm("_ZN3app8lua_bind35FighterManager__is_result_mode_implEPNS_14FighterManagerE");
        bool is_disable_ko_camera(app::FighterManager *) asm("_ZN3app8lua_bind41FighterManager__is_disable_ko_camera_implEPNS_14FighterManagerE");
        u64 enable_ko_camera(app::FighterManager *) asm("_ZN3app8lua_bind37FighterManager__enable_ko_camera_implEPNS_14FighterManagerE");
        u64 disable_ko_camera(app::FighterManager *) asm("_ZN3app8lua_bind38FighterManager__disable_ko_camera_implEPNS_14FighterManagerE");
        void set_dead_up_camera_hit_cursor_status(app::FighterManager *,bool) asm("_ZN3app8lua_bind57FighterManager__set_dead_up_camera_hit_cursor_status_implEPNS_14FighterManagerEb");
        void set_controller_rumble_all(app::FighterManager *,phx::Hash40,int,bool,unsigned int) asm("_ZN3app8lua_bind46FighterManager__set_controller_rumble_all_implEPNS_14FighterManagerEN3phx6Hash40Eibj");
        bool is_rebirth_plate_line(app::FighterManager *,app::FighterEntryID) asm("_ZN3app8lua_bind42FighterManager__is_rebirth_plate_line_implEPNS_14FighterManagerENS_14FighterEntryIDE");
        void set_position_lock(app::FighterManager *,app::FighterEntryID,bool) asm("_ZN3app8lua_bind38FighterManager__set_position_lock_implEPNS_14FighterManagerENS_14FighterEntryIDEb");
        u64 reset_fighter(app::FighterManager *,bool) asm("_ZN3app8lua_bind34FighterManager__reset_fighter_implEPNS_14FighterManagerEb");
        u64 prepare_movie(app::FighterManager *,phx::Hash40) asm("_ZN3app8lua_bind34FighterManager__prepare_movie_implEPNS_14FighterManagerEN3phx6Hash40E");
        bool is_prepared_movie(app::FighterManager *) asm("_ZN3app8lua_bind38FighterManager__is_prepared_movie_implEPNS_14FighterManagerE");
        u64 exit_movie(app::FighterManager *) asm("_ZN3app8lua_bind31FighterManager__exit_movie_implEPNS_14FighterManagerE");
        bool is_process_movie(app::FighterManager *) asm("_ZN3app8lua_bind37FighterManager__is_process_movie_implEPNS_14FighterManagerE");
        u64 start_movie(app::FighterManager *,float) asm("_ZN3app8lua_bind32FighterManager__start_movie_implEPNS_14FighterManagerEf");
        bool is_end_movie(app::FighterManager *) asm("_ZN3app8lua_bind33FighterManager__is_end_movie_implEPNS_14FighterManagerE");
        u64 get_jack_final_cut_in(app::FighterManager *) asm("_ZN3app8lua_bind42FighterManager__get_jack_final_cut_in_implEPNS_14FighterManagerE");
    }
}
