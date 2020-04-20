#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ShieldModule {
        u64 clean(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24ShieldModule__clean_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_shield(app::BattleObjectModuleAccessor *, int,int) asm("_ZN3app8lua_bind28ShieldModule__is_shield_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 set_size(app::BattleObjectModuleAccessor *, int,float,int) asm("_ZN3app8lua_bind27ShieldModule__set_size_implEPNS_26BattleObjectModuleAccessorEifi") LINKABLE;
        u64 set_status(app::BattleObjectModuleAccessor *, int,app::ShieldStatus,int) asm("_ZN3app8lua_bind29ShieldModule__set_status_implEPNS_26BattleObjectModuleAccessorEiNS_12ShieldStatusEi") LINKABLE;
        u64 set_status_all(app::BattleObjectModuleAccessor *, app::ShieldStatus,int) asm("_ZN3app8lua_bind33ShieldModule__set_status_all_implEPNS_26BattleObjectModuleAccessorENS_12ShieldStatusEi") LINKABLE;
        bool is_turn(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind26ShieldModule__is_turn_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        bool is_front(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind27ShieldModule__is_front_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        bool is_hop(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind25ShieldModule__is_hop_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_hop_angle(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind32ShieldModule__get_hop_angle_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        bool is_no_hop(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind28ShieldModule__is_no_hop_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_turn(app::BattleObjectModuleAccessor *, bool,int) asm("_ZN3app8lua_bind27ShieldModule__set_turn_implEPNS_26BattleObjectModuleAccessorEbi") LINKABLE;
        u64 set_front(app::BattleObjectModuleAccessor *, app::ShieldFront,int) asm("_ZN3app8lua_bind28ShieldModule__set_front_implEPNS_26BattleObjectModuleAccessorENS_11ShieldFrontEi") LINKABLE;
        u64 set_hop(app::BattleObjectModuleAccessor *, bool,float,int) asm("_ZN3app8lua_bind26ShieldModule__set_hop_implEPNS_26BattleObjectModuleAccessorEbfi") LINKABLE;
        u64 set_attack_mul(app::BattleObjectModuleAccessor *, float,int) asm("_ZN3app8lua_bind33ShieldModule__set_attack_mul_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 get_attack_mul(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind33ShieldModule__get_attack_mul_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_speed_mul(app::BattleObjectModuleAccessor *, float,int) asm("_ZN3app8lua_bind32ShieldModule__set_speed_mul_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 get_speed_mul(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind32ShieldModule__get_speed_mul_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_life_mul(app::BattleObjectModuleAccessor *, float,int) asm("_ZN3app8lua_bind31ShieldModule__set_life_mul_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 get_life_mul(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31ShieldModule__get_life_mul_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_attack_limit(app::BattleObjectModuleAccessor *, float,int) asm("_ZN3app8lua_bind35ShieldModule__set_attack_limit_implEPNS_26BattleObjectModuleAccessorEfi") LINKABLE;
        u64 get_attack_limit(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind35ShieldModule__get_attack_limit_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_hit_stop_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind35ShieldModule__set_hit_stop_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        bool is_no_m_ball(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31ShieldModule__is_no_m_ball_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_part_size(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind32ShieldModule__get_part_size_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_team_no(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30ShieldModule__get_team_no_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_no_team(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind30ShieldModule__set_no_team_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_shield_type(app::BattleObjectModuleAccessor *, app::ShieldType,int,int) asm("_ZN3app8lua_bind34ShieldModule__set_shield_type_implEPNS_26BattleObjectModuleAccessorENS_10ShieldTypeEii") LINKABLE;
        void clear_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28ShieldModule__clear_all_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        void clear_all_2(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind30ShieldModule__clear_all_2_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_center_pos(app::BattleObjectModuleAccessor *, int,int) asm("_ZN3app8lua_bind33ShieldModule__get_center_pos_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 get_lr(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind25ShieldModule__get_lr_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_group_num(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32ShieldModule__get_group_num_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_pos_x(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind28ShieldModule__get_pos_x_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_target_property(app::BattleObjectModuleAccessor *, int,int) asm("_ZN3app8lua_bind38ShieldModule__set_target_property_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 set_target_category(app::BattleObjectModuleAccessor *, int,int) asm("_ZN3app8lua_bind38ShieldModule__set_target_category_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 sleep(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind24ShieldModule__sleep_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
    }
}
