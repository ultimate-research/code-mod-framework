#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterMotionModuleImpl {
        u64 add_body_type_hash(app::BattleObjectModuleAccessor *,phx::Hash40,int) asm("_ZN3app8lua_bind48FighterMotionModuleImpl__add_body_type_hash_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ei");
        u64 get_cancel_frame(app::BattleObjectModuleAccessor *,phx::Hash40,bool) asm("_ZN3app8lua_bind46FighterMotionModuleImpl__get_cancel_frame_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eb");
        bool is_valid_cancel_frame(app::BattleObjectModuleAccessor *,int,bool) asm("_ZN3app8lua_bind51FighterMotionModuleImpl__is_valid_cancel_frame_implEPNS_26BattleObjectModuleAccessorEib");
        u64 get_hit_normal_frame(app::BattleObjectModuleAccessor *,phx::Hash40,bool) asm("_ZN3app8lua_bind50FighterMotionModuleImpl__get_hit_normal_frame_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eb");
        u64 get_hit_xlu_frame(app::BattleObjectModuleAccessor *,phx::Hash40,bool) asm("_ZN3app8lua_bind47FighterMotionModuleImpl__get_hit_xlu_frame_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eb");
        u64 motion_kind_kirby_copy_original(app::BattleObjectModuleAccessor *,phx::Hash40) asm("_ZN3app8lua_bind61FighterMotionModuleImpl__motion_kind_kirby_copy_original_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E");
        u64 change_motion_kirby_copy(app::BattleObjectModuleAccessor *,phx::Hash40,float,float,bool,float,bool,bool) asm("_ZN3app8lua_bind54FighterMotionModuleImpl__change_motion_kirby_copy_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Effbfbb");
        u64 change_motion_inherit_frame_kirby_copy(app::BattleObjectModuleAccessor *,phx::Hash40,float,float,float,bool,bool) asm("_ZN3app8lua_bind68FighterMotionModuleImpl__change_motion_inherit_frame_kirby_copy_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Efffbb");
        u64 change_motion_inherit_frame_keep_rate_kirby_copy(app::BattleObjectModuleAccessor *,phx::Hash40,float,float,float) asm("_ZN3app8lua_bind78FighterMotionModuleImpl__change_motion_inherit_frame_keep_rate_kirby_copy_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Efff");
        u64 change_motion_force_inherit_frame_kirby_copy(app::BattleObjectModuleAccessor *,phx::Hash40,float,float,float) asm("_ZN3app8lua_bind74FighterMotionModuleImpl__change_motion_force_inherit_frame_kirby_copy_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Efff");
        u64 end_frame_from_hash_kirby_copy(app::BattleObjectModuleAccessor *,phx::Hash40) asm("_ZN3app8lua_bind60FighterMotionModuleImpl__end_frame_from_hash_kirby_copy_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E");
        void set_frame_sync_anim_cmd_kirby_copy(app::BattleObjectModuleAccessor *,float,bool) asm("_ZN3app8lua_bind64FighterMotionModuleImpl__set_frame_sync_anim_cmd_kirby_copy_implEPNS_26BattleObjectModuleAccessorEfb");
        u64 get_cancel_frame_kirby_copy(app::BattleObjectModuleAccessor *,phx::Hash40,bool) asm("_ZN3app8lua_bind57FighterMotionModuleImpl__get_cancel_frame_kirby_copy_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eb");
        u64 add_motion_partial_kirby_copy(app::BattleObjectModuleAccessor *,int,phx::Hash40,float,float,bool,bool,float,bool,bool,bool) asm("_ZN3app8lua_bind59FighterMotionModuleImpl__add_motion_partial_kirby_copy_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40Effbbfbbb");
        void set_blend_waist(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind45FighterMotionModuleImpl__set_blend_waist_implEPNS_26BattleObjectModuleAccessorEb");
        u64 start_damage_stop_interpolation(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind61FighterMotionModuleImpl__start_damage_stop_interpolation_implEPNS_26BattleObjectModuleAccessorEf");
        void set_pause_motion_interpolation_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind65FighterMotionModuleImpl__set_pause_motion_interpolation_stop_implEPNS_26BattleObjectModuleAccessorE");
        void set_update_finger_and_face_joint(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind62FighterMotionModuleImpl__set_update_finger_and_face_joint_implEPNS_26BattleObjectModuleAccessorEb");
    }
}
