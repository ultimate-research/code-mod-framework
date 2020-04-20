#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace PhysicsModule {
        u64 reset_swing(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31PhysicsModule__reset_swing_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_swing_only_anim(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind39PhysicsModule__set_swing_only_anim_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_swing_joint_name(app::BattleObjectModuleAccessor *, bool,u64,bool) asm("_ZN3app8lua_bind40PhysicsModule__set_swing_joint_name_implEPNS_26BattleObjectModuleAccessorEbN3phx6Hash40Eb") LINKABLE;
        u64 set_swing_rate(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind34PhysicsModule__set_swing_rate_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_swing_rebirth(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind37PhysicsModule__set_swing_rebirth_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_2nd_gravity(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind35PhysicsModule__set_2nd_gravity_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_2nd_status(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind34PhysicsModule__set_2nd_status_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_2nd_status(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34PhysicsModule__get_2nd_status_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_2nd_end_pos(app::BattleObjectModuleAccessor *, const Vector3f*,const Vector3f*) asm("_ZN3app8lua_bind35PhysicsModule__set_2nd_end_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fES6_") LINKABLE;
        u64 get_2nd_line_length(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind39PhysicsModule__get_2nd_line_length_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_2nd_line_length_all(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind43PhysicsModule__set_2nd_line_length_all_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_2nd_node_num(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36PhysicsModule__get_2nd_node_num_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_2nd_active_node_num(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind43PhysicsModule__get_2nd_active_node_num_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_2nd_active_length(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind41PhysicsModule__get_2nd_active_length_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_2nd_active_node_num(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind43PhysicsModule__set_2nd_active_node_num_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        bool is_2nd_precede(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34PhysicsModule__is_2nd_precede_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_2nd_precede(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind35PhysicsModule__set_2nd_precede_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_2nd_flip(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31PhysicsModule__is_2nd_flip_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_2nd_flip(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind32PhysicsModule__set_2nd_flip_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_2nd_back_speed(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind38PhysicsModule__set_2nd_back_speed_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_ik(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind26PhysicsModule__set_ik_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_ik_target_pos(app::BattleObjectModuleAccessor *, int,const Vector3f*,const Vector3f*) asm("_ZN3app8lua_bind37PhysicsModule__set_ik_target_pos_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fES6_") LINKABLE;
        u64 set_ik_target_dir(app::BattleObjectModuleAccessor *, int,const Vector3f*,const Vector3f*) asm("_ZN3app8lua_bind37PhysicsModule__set_ik_target_dir_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fES6_") LINKABLE;
        u64 get_ik_end_joint_id(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind39PhysicsModule__get_ik_end_joint_id_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 stop_charge(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31PhysicsModule__stop_charge_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_2nd_air_resistance(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind42PhysicsModule__set_2nd_air_resistance_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_2nd_air_resistance_2(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind44PhysicsModule__set_2nd_air_resistance_2_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_2nd_water_resistance(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind44PhysicsModule__set_2nd_water_resistance_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 get_2nd_tension(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35PhysicsModule__get_2nd_tension_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_2nd_joint_num(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37PhysicsModule__get_2nd_joint_num_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_2nd_joint_id(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36PhysicsModule__get_2nd_joint_id_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_2nd_collision_size(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind42PhysicsModule__set_2nd_collision_size_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_2nd_mass(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind32PhysicsModule__set_2nd_mass_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_2nd_disable_collision(app::BattleObjectModuleAccessor *, unsigned int,bool) asm("_ZN3app8lua_bind45PhysicsModule__set_2nd_disable_collision_implEPNS_26BattleObjectModuleAccessorEjb") LINKABLE;
        u64 set_2nd_fix_flag(app::BattleObjectModuleAccessor *, unsigned int,bool) asm("_ZN3app8lua_bind36PhysicsModule__set_2nd_fix_flag_implEPNS_26BattleObjectModuleAccessorEjb") LINKABLE;
        u64 set_reflect_param_wall(app::BattleObjectModuleAccessor *, float,float,float) asm("_ZN3app8lua_bind42PhysicsModule__set_reflect_param_wall_implEPNS_26BattleObjectModuleAccessorEfff") LINKABLE;
        u64 set_reflect_param_ceil(app::BattleObjectModuleAccessor *, float,float,float) asm("_ZN3app8lua_bind42PhysicsModule__set_reflect_param_ceil_implEPNS_26BattleObjectModuleAccessorEfff") LINKABLE;
        u64 set_reflect_param_floor(app::BattleObjectModuleAccessor *, float,float,float) asm("_ZN3app8lua_bind43PhysicsModule__set_reflect_param_floor_implEPNS_26BattleObjectModuleAccessorEfff") LINKABLE;
        u64 set_2nd_length(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind34PhysicsModule__set_2nd_length_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 get_2nd_pos(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31PhysicsModule__get_2nd_pos_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_2nd_pos(app::BattleObjectModuleAccessor *, int,const Vector3f*) asm("_ZN3app8lua_bind31PhysicsModule__set_2nd_pos_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fE") LINKABLE;
        u64 get_2nd_speed(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind33PhysicsModule__get_2nd_speed_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_2nd_speed(app::BattleObjectModuleAccessor *, int,const Vector3f*) asm("_ZN3app8lua_bind33PhysicsModule__set_2nd_speed_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fE") LINKABLE;
        u64 set_2nd_node_num_max(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind40PhysicsModule__set_2nd_node_num_max_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        void clear_2nd_speed(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35PhysicsModule__clear_2nd_speed_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_2nd_collision_object(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind44PhysicsModule__set_2nd_collision_object_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_2nd_sync_gravity(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind40PhysicsModule__set_2nd_sync_gravity_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_2nd_restitution_range(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind45PhysicsModule__set_2nd_restitution_range_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_2nd_restitution_rate(app::BattleObjectModuleAccessor *, float,float) asm("_ZN3app8lua_bind44PhysicsModule__set_2nd_restitution_rate_implEPNS_26BattleObjectModuleAccessorEff") LINKABLE;
        u64 set_2nd_restitution_rate_2(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind46PhysicsModule__set_2nd_restitution_rate_2_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_2nd_friction_rate(app::BattleObjectModuleAccessor *, int,float) asm("_ZN3app8lua_bind41PhysicsModule__set_2nd_friction_rate_implEPNS_26BattleObjectModuleAccessorEif") LINKABLE;
        u64 set_2nd_fixed_tip_num(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind41PhysicsModule__set_2nd_fixed_tip_num_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_2nd_z_range(app::BattleObjectModuleAccessor *, float,float) asm("_ZN3app8lua_bind35PhysicsModule__set_2nd_z_range_implEPNS_26BattleObjectModuleAccessorEff") LINKABLE;
        u64 get_2nd_touch_ground_line_num(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind49PhysicsModule__get_2nd_touch_ground_line_num_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_enable_floor_collision_line(app::BattleObjectModuleAccessor *, app::GroundCollisionLine *) asm("_ZN3app8lua_bind51PhysicsModule__set_enable_floor_collision_line_implEPNS_26BattleObjectModuleAccessorEPNS_19GroundCollisionLineE") LINKABLE;
        u64 set_swing_ground_collision_all(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind50PhysicsModule__set_swing_ground_collision_all_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_swing_special_state(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind43PhysicsModule__set_swing_special_state_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
    }
}
