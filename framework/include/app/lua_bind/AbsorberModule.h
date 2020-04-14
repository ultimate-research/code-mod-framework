#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace AbsorberModule {
        u64 clean(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26AbsorberModule__clean_implEPNS_26BattleObjectModuleAccessorE");
        bool is_shield(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind30AbsorberModule__is_shield_implEPNS_26BattleObjectModuleAccessorEii");
        void set_size(app::BattleObjectModuleAccessor *,int,float,int) asm("_ZN3app8lua_bind29AbsorberModule__set_size_implEPNS_26BattleObjectModuleAccessorEifi");
        void set_status(app::BattleObjectModuleAccessor *,int,app::ShieldStatus,int) asm("_ZN3app8lua_bind31AbsorberModule__set_status_implEPNS_26BattleObjectModuleAccessorEiNS_12ShieldStatusEi");
        void set_status_all(app::BattleObjectModuleAccessor *,app::ShieldStatus,int) asm("_ZN3app8lua_bind35AbsorberModule__set_status_all_implEPNS_26BattleObjectModuleAccessorENS_12ShieldStatusEi");
        bool is_turn(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind28AbsorberModule__is_turn_implEPNS_26BattleObjectModuleAccessorEi");
        bool is_front(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind29AbsorberModule__is_front_implEPNS_26BattleObjectModuleAccessorEi");
        bool is_hop(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind27AbsorberModule__is_hop_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_hop_angle(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind34AbsorberModule__get_hop_angle_implEPNS_26BattleObjectModuleAccessorEi");
        bool is_no_hop(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind30AbsorberModule__is_no_hop_implEPNS_26BattleObjectModuleAccessorEi");
        void set_turn(app::BattleObjectModuleAccessor *,bool,int) asm("_ZN3app8lua_bind29AbsorberModule__set_turn_implEPNS_26BattleObjectModuleAccessorEbi");
        void set_front(app::BattleObjectModuleAccessor *,app::ShieldFront,int) asm("_ZN3app8lua_bind30AbsorberModule__set_front_implEPNS_26BattleObjectModuleAccessorENS_11ShieldFrontEi");
        void set_hop(app::BattleObjectModuleAccessor *,bool,float,int) asm("_ZN3app8lua_bind28AbsorberModule__set_hop_implEPNS_26BattleObjectModuleAccessorEbfi");
        void set_attack_mul(app::BattleObjectModuleAccessor *,float,int) asm("_ZN3app8lua_bind35AbsorberModule__set_attack_mul_implEPNS_26BattleObjectModuleAccessorEfi");
        u64 get_attack_mul(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind35AbsorberModule__get_attack_mul_implEPNS_26BattleObjectModuleAccessorEi");
        void set_speed_mul(app::BattleObjectModuleAccessor *,float,int) asm("_ZN3app8lua_bind34AbsorberModule__set_speed_mul_implEPNS_26BattleObjectModuleAccessorEfi");
        u64 get_speed_mul(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind34AbsorberModule__get_speed_mul_implEPNS_26BattleObjectModuleAccessorEi");
        void set_life_mul(app::BattleObjectModuleAccessor *,float,int) asm("_ZN3app8lua_bind33AbsorberModule__set_life_mul_implEPNS_26BattleObjectModuleAccessorEfi");
        u64 get_life_mul(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind33AbsorberModule__get_life_mul_implEPNS_26BattleObjectModuleAccessorEi");
        void set_attack_limit(app::BattleObjectModuleAccessor *,float,int) asm("_ZN3app8lua_bind37AbsorberModule__set_attack_limit_implEPNS_26BattleObjectModuleAccessorEfi");
        u64 get_attack_limit(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind37AbsorberModule__get_attack_limit_implEPNS_26BattleObjectModuleAccessorEi");
        void set_hit_stop_mul(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind37AbsorberModule__set_hit_stop_mul_implEPNS_26BattleObjectModuleAccessorEf");
        bool is_no_m_ball(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind33AbsorberModule__is_no_m_ball_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_part_size(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind34AbsorberModule__get_part_size_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_team_no(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32AbsorberModule__get_team_no_implEPNS_26BattleObjectModuleAccessorE");
        void set_no_team(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind32AbsorberModule__set_no_team_implEPNS_26BattleObjectModuleAccessorEb");
        void set_shield_type(app::BattleObjectModuleAccessor *,app::ShieldType,int,int) asm("_ZN3app8lua_bind36AbsorberModule__set_shield_type_implEPNS_26BattleObjectModuleAccessorENS_10ShieldTypeEii");
        u64 clear_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30AbsorberModule__clear_all_implEPNS_26BattleObjectModuleAccessorE");
        u64 clear_all_2(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind32AbsorberModule__clear_all_2_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_center_pos(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind35AbsorberModule__get_center_pos_implEPNS_26BattleObjectModuleAccessorEii");
        u64 get_lr(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind27AbsorberModule__get_lr_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_group_num(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34AbsorberModule__get_group_num_implEPNS_26BattleObjectModuleAccessorE");
        u64 get_pos_x(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind30AbsorberModule__get_pos_x_implEPNS_26BattleObjectModuleAccessorEi");
        void set_target_property(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind40AbsorberModule__set_target_property_implEPNS_26BattleObjectModuleAccessorEii");
        void set_target_category(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind40AbsorberModule__set_target_category_implEPNS_26BattleObjectModuleAccessorEii");
        u64 sleep(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind26AbsorberModule__sleep_implEPNS_26BattleObjectModuleAccessorEb");
    }
}
