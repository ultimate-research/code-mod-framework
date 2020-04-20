#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ModelModule {
        u64 set_rotation_order(app::BattleObjectModuleAccessor *, app::MotionNodeRotateOrder) asm("_ZN3app8lua_bind36ModelModule__set_rotation_order_implEPNS_26BattleObjectModuleAccessorENS_21MotionNodeRotateOrderE") LINKABLE;
        u64 rotation_order(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32ModelModule__rotation_order_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 scale(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23ModelModule__scale_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_scale(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind27ModelModule__set_scale_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 scale_z(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25ModelModule__scale_z_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_scale_z(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind29ModelModule__set_scale_z_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_temporary_scale_z(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind39ModelModule__set_temporary_scale_z_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 joint_global_position(app::BattleObjectModuleAccessor *, u64,Vector3f &,bool) asm("_ZN3app8lua_bind39ModelModule__joint_global_position_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fEb") LINKABLE;
        u64 joint_global_position_with_offset(app::BattleObjectModuleAccessor *, u64,const Vector3f*,Vector3f *,bool) asm("_ZN3app8lua_bind51ModelModule__joint_global_position_with_offset_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fERS5_b") LINKABLE;
        u64 joint_global_offset_from_top(app::BattleObjectModuleAccessor *, u64,Vector3f &) asm("_ZN3app8lua_bind46ModelModule__joint_global_offset_from_top_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fE") LINKABLE;
        u64 top_joint_global_position_from_joint(app::BattleObjectModuleAccessor *, u64,const Vector3f*,Vector3f *) asm("_ZN3app8lua_bind54ModelModule__top_joint_global_position_from_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fERS5_") LINKABLE;
        u64 joint_global_rotation(app::BattleObjectModuleAccessor *, u64,Vector3f &,bool) asm("_ZN3app8lua_bind39ModelModule__joint_global_rotation_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fEb") LINKABLE;
        u64 joint_global_axis(app::BattleObjectModuleAccessor *, u64,int,bool) asm("_ZN3app8lua_bind35ModelModule__joint_global_axis_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eib") LINKABLE;
        u64 set_joint_srt(app::BattleObjectModuleAccessor *, u64,const Vector3f*,const Vector3f*,const Vector3f*) asm("_ZN3app8lua_bind31ModelModule__set_joint_srt_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fES7_S7_") LINKABLE;
        u64 set_joint_scale(app::BattleObjectModuleAccessor *, u64,const Vector3f*) asm("_ZN3app8lua_bind33ModelModule__set_joint_scale_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fE") LINKABLE;
        u64 set_joint_rotate(app::BattleObjectModuleAccessor *, u64,const Vector3f*,app::MotionNodeRotateCompose,app::MotionNodeRotateOrder) asm("_ZN3app8lua_bind34ModelModule__set_joint_rotate_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fENS_23MotionNodeRotateComposeENS_21MotionNodeRotateOrderE") LINKABLE;
        u64 set_joint_translate(app::BattleObjectModuleAccessor *, u64,const Vector3f*,bool,bool) asm("_ZN3app8lua_bind37ModelModule__set_joint_translate_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fEbb") LINKABLE;
        void clear_joint_srt(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind33ModelModule__clear_joint_srt_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 joint_rotate(app::BattleObjectModuleAccessor *, u64,Vector3f &) asm("_ZN3app8lua_bind30ModelModule__joint_rotate_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fE") LINKABLE;
        u64 set_visibility(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind32ModelModule__set_visibility_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_visible(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28ModelModule__is_visible_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_mesh_visibility(app::BattleObjectModuleAccessor *, u64,bool) asm("_ZN3app8lua_bind37ModelModule__set_mesh_visibility_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eb") LINKABLE;
        u64 set_alpha(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind27ModelModule__set_alpha_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_color_rgb(app::BattleObjectModuleAccessor *, float,float,float,app::MODEL_COLOR_TYPE) asm("_ZN3app8lua_bind31ModelModule__set_color_rgb_implEPNS_26BattleObjectModuleAccessorEfffNS_16MODEL_COLOR_TYPEE") LINKABLE;
        u64 set_emmisive_scale(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind36ModelModule__set_emmisive_scale_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_render_offset_position(app::BattleObjectModuleAccessor *, const Vector3f*) asm("_ZN3app8lua_bind44ModelModule__set_render_offset_position_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        u64 set_depth_offset(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind34ModelModule__set_depth_offset_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_depth_stencil(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind35ModelModule__set_depth_stencil_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 virtual_joint_tra(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind35ModelModule__virtual_joint_tra_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 enable_gold_eye(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33ModelModule__enable_gold_eye_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 disable_gold_eye(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34ModelModule__disable_gold_eye_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}
