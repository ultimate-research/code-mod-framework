#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ModelModule {
        void set_rotation_order(app::BattleObjectModuleAccessor *,app::MotionNodeRotateOrder) asm("_ZN3app8lua_bind36ModelModule__set_rotation_order_implEPNS_26BattleObjectModuleAccessorENS_21MotionNodeRotateOrderE");
        u64 rotation_order(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32ModelModule__rotation_order_implEPNS_26BattleObjectModuleAccessorE");
        u64 scale(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23ModelModule__scale_implEPNS_26BattleObjectModuleAccessorE");
        void set_scale(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind27ModelModule__set_scale_implEPNS_26BattleObjectModuleAccessorEf");
        u64 scale_z(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25ModelModule__scale_z_implEPNS_26BattleObjectModuleAccessorE");
        void set_scale_z(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind29ModelModule__set_scale_z_implEPNS_26BattleObjectModuleAccessorEf");
        void set_temporary_scale_z(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind39ModelModule__set_temporary_scale_z_implEPNS_26BattleObjectModuleAccessorEf");
        u64 joint_global_position(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f &,bool) asm("_ZN3app8lua_bind39ModelModule__joint_global_position_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fEb");
        u64 joint_global_position_with_offset(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f const&,phx::Vector3f&,bool) asm("_ZN3app8lua_bind51ModelModule__joint_global_position_with_offset_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fERS5_b");
        u64 joint_global_offset_from_top(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f &) asm("_ZN3app8lua_bind46ModelModule__joint_global_offset_from_top_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fE");
        u64 top_joint_global_position_from_joint(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f const&,phx::Vector3f&) asm("_ZN3app8lua_bind54ModelModule__top_joint_global_position_from_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fERS5_");
        u64 joint_global_rotation(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f &,bool) asm("_ZN3app8lua_bind39ModelModule__joint_global_rotation_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fEb");
        u64 joint_global_axis(app::BattleObjectModuleAccessor *,phx::Hash40,int,bool) asm("_ZN3app8lua_bind35ModelModule__joint_global_axis_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eib");
        void set_joint_srt(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f const&,phx::Vector3f const&,phx::Vector3f const&) asm("_ZN3app8lua_bind31ModelModule__set_joint_srt_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fES7_S7_");
        void set_joint_scale(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f const&) asm("_ZN3app8lua_bind33ModelModule__set_joint_scale_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fE");
        void set_joint_rotate(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f const&,app::MotionNodeRotateCompose,app::MotionNodeRotateOrder) asm("_ZN3app8lua_bind34ModelModule__set_joint_rotate_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fENS_23MotionNodeRotateComposeENS_21MotionNodeRotateOrderE");
        void set_joint_translate(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f const&,bool,bool) asm("_ZN3app8lua_bind37ModelModule__set_joint_translate_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERKNS3_8Vector3fEbb");
        u64 clear_joint_srt(app::BattleObjectModuleAccessor *,phx::Hash40) asm("_ZN3app8lua_bind33ModelModule__clear_joint_srt_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E");
        u64 joint_rotate(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Vector3f &) asm("_ZN3app8lua_bind30ModelModule__joint_rotate_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ERNS3_8Vector3fE");
        void set_visibility(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind32ModelModule__set_visibility_implEPNS_26BattleObjectModuleAccessorEb");
        bool is_visible(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28ModelModule__is_visible_implEPNS_26BattleObjectModuleAccessorE");
        void set_mesh_visibility(app::BattleObjectModuleAccessor *,phx::Hash40,bool) asm("_ZN3app8lua_bind37ModelModule__set_mesh_visibility_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eb");
        void set_alpha(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind27ModelModule__set_alpha_implEPNS_26BattleObjectModuleAccessorEf");
        void set_color_rgb(app::BattleObjectModuleAccessor *,float,float,float,app::MODEL_COLOR_TYPE) asm("_ZN3app8lua_bind31ModelModule__set_color_rgb_implEPNS_26BattleObjectModuleAccessorEfffNS_16MODEL_COLOR_TYPEE");
        void set_emmisive_scale(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind36ModelModule__set_emmisive_scale_implEPNS_26BattleObjectModuleAccessorEf");
        void set_render_offset_position(app::BattleObjectModuleAccessor *,phx::Vector3f const&) asm("_ZN3app8lua_bind44ModelModule__set_render_offset_position_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE");
        void set_depth_offset(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind34ModelModule__set_depth_offset_implEPNS_26BattleObjectModuleAccessorEf");
        void set_depth_stencil(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind35ModelModule__set_depth_stencil_implEPNS_26BattleObjectModuleAccessorEi");
        u64 virtual_joint_tra(app::BattleObjectModuleAccessor *,phx::Hash40) asm("_ZN3app8lua_bind35ModelModule__virtual_joint_tra_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E");
        u64 enable_gold_eye(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33ModelModule__enable_gold_eye_implEPNS_26BattleObjectModuleAccessorE");
        u64 disable_gold_eye(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34ModelModule__disable_gold_eye_implEPNS_26BattleObjectModuleAccessorE");
    }
}
