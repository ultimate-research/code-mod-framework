#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ItemKineticModuleImpl {
        void set_throw_param(app::BattleObjectModuleAccessor *,phx::Vector3f const&,phx::Vector3f const&,bool,unsigned int) asm("_ZN3app8lua_bind43ItemKineticModuleImpl__set_throw_param_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fES6_bj");
        void set_slope_type(app::BattleObjectModuleAccessor *,app::ItemSlopeType) asm("_ZN3app8lua_bind42ItemKineticModuleImpl__set_slope_type_implEPNS_26BattleObjectModuleAccessorENS_13ItemSlopeTypeE");
        void set_kinetic_flags(app::BattleObjectModuleAccessor *,unsigned int) asm("_ZN3app8lua_bind45ItemKineticModuleImpl__set_kinetic_flags_implEPNS_26BattleObjectModuleAccessorEj");
        u64 get_kinetic_flags(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind45ItemKineticModuleImpl__get_kinetic_flags_implEPNS_26BattleObjectModuleAccessorE");
        u64 on_kinetic_flag(app::BattleObjectModuleAccessor *,app::ItemKineticFlag) asm("_ZN3app8lua_bind43ItemKineticModuleImpl__on_kinetic_flag_implEPNS_26BattleObjectModuleAccessorENS_15ItemKineticFlagE");
        u64 off_kinetic_flag(app::BattleObjectModuleAccessor *,app::ItemKineticFlag) asm("_ZN3app8lua_bind44ItemKineticModuleImpl__off_kinetic_flag_implEPNS_26BattleObjectModuleAccessorENS_15ItemKineticFlagE");
        u64 add_speed_consider_gravity(app::BattleObjectModuleAccessor *,phx::Vector3f const&,bool) asm("_ZN3app8lua_bind54ItemKineticModuleImpl__add_speed_consider_gravity_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEb");
        u64 clear_speed(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind39ItemKineticModuleImpl__clear_speed_implEPNS_26BattleObjectModuleAccessorEb");
        u64 add_speed_damage(app::BattleObjectModuleAccessor *,phx::Vector3f const&) asm("_ZN3app8lua_bind44ItemKineticModuleImpl__add_speed_damage_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE");
        u64 slope_angle(app::BattleObjectModuleAccessor *,unsigned int) asm("_ZN3app8lua_bind39ItemKineticModuleImpl__slope_angle_implEPNS_26BattleObjectModuleAccessorEj");
        void set_motion_trans_rate(app::BattleObjectModuleAccessor *,phx::Vector3f const&) asm("_ZN3app8lua_bind49ItemKineticModuleImpl__set_motion_trans_rate_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE");
        u64 get_motion_trans_rate(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind49ItemKineticModuleImpl__get_motion_trans_rate_implEPNS_26BattleObjectModuleAccessorE");
        void set_motion_trans_angle(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind50ItemKineticModuleImpl__set_motion_trans_angle_implEPNS_26BattleObjectModuleAccessorEf");
        u64 get_motion_trans_angle(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind50ItemKineticModuleImpl__get_motion_trans_angle_implEPNS_26BattleObjectModuleAccessorE");
        void set_motion_trans_rate_2nd(app::BattleObjectModuleAccessor *,phx::Vector3f const&) asm("_ZN3app8lua_bind53ItemKineticModuleImpl__set_motion_trans_rate_2nd_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE");
        u64 get_motion_trans_rate_2nd(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind53ItemKineticModuleImpl__get_motion_trans_rate_2nd_implEPNS_26BattleObjectModuleAccessorE");
        void set_motion_trans_angle_2nd(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind54ItemKineticModuleImpl__set_motion_trans_angle_2nd_implEPNS_26BattleObjectModuleAccessorEf");
        u64 get_motion_trans_angle_2nd(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind54ItemKineticModuleImpl__get_motion_trans_angle_2nd_implEPNS_26BattleObjectModuleAccessorE");
        void set_param_gemini(app::BattleObjectModuleAccessor *,float,float,phx::Vector2f const&) asm("_ZN3app8lua_bind44ItemKineticModuleImpl__set_param_gemini_implEPNS_26BattleObjectModuleAccessorEffRKN3phx8Vector2fE");
        u64 get_sum_speed_simple(app::BattleObjectModuleAccessor *,int,bool) asm("_ZN3app8lua_bind48ItemKineticModuleImpl__get_sum_speed_simple_implEPNS_26BattleObjectModuleAccessorEib");
        void set_rot_along_speed_x(app::BattleObjectModuleAccessor *,phx::Vector2f const&,float) asm("_ZN3app8lua_bind49ItemKineticModuleImpl__set_rot_along_speed_x_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fEf");
        u64 it_ai_move(app::BattleObjectModuleAccessor *,phx::Vector2f const&,phx::Vector2f const&,phx::Vector2f const&,phx::Vector2f const&,phx::Vector2f const&,bool,bool) asm("_ZN3app8lua_bind38ItemKineticModuleImpl__it_ai_move_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fES6_S6_S6_S6_bb");
        u64 it_ai_type(app::BattleObjectModuleAccessor *,app::ItemAiType,phx::Vector2f const&,phx::Vector2f const&) asm("_ZN3app8lua_bind38ItemKineticModuleImpl__it_ai_type_implEPNS_26BattleObjectModuleAccessorENS_10ItemAiTypeERKN3phx8Vector2fES7_");
        u64 it_ai_dir_factor(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind44ItemKineticModuleImpl__it_ai_dir_factor_implEPNS_26BattleObjectModuleAccessorEf");
        u64 it_ai_distance_factor(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind49ItemKineticModuleImpl__it_ai_distance_factor_implEPNS_26BattleObjectModuleAccessorEf");
        u64 it_ai_dir_rot_mode(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind46ItemKineticModuleImpl__it_ai_dir_rot_mode_implEPNS_26BattleObjectModuleAccessorEb");
        u64 it_base_rot(app::BattleObjectModuleAccessor *,phx::Vector3f const&) asm("_ZN3app8lua_bind39ItemKineticModuleImpl__it_base_rot_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE");
        void set_interpolate_rate(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind48ItemKineticModuleImpl__set_interpolate_rate_implEPNS_26BattleObjectModuleAccessorEf");
    }
}
