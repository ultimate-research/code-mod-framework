#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace JostleModule {
        void set_status(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind29JostleModule__set_status_implEPNS_26BattleObjectModuleAccessorEb");
        void set_layer(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind28JostleModule__set_layer_implEPNS_26BattleObjectModuleAccessorEi");
        void set_fix(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind26JostleModule__set_fix_implEPNS_26BattleObjectModuleAccessorEb");
        void set_ignore_speed_x(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind37JostleModule__set_ignore_speed_x_implEPNS_26BattleObjectModuleAccessorEb");
        u64 sleep(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind24JostleModule__sleep_implEPNS_26BattleObjectModuleAccessorEb");
        bool is_sleep(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind27JostleModule__is_sleep_implEPNS_26BattleObjectModuleAccessorE");
        u64 jostle_speed_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33JostleModule__jostle_speed_x_implEPNS_26BattleObjectModuleAccessorE");
        u64 speed_attenuation_rate(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind41JostleModule__speed_attenuation_rate_implEPNS_26BattleObjectModuleAccessorE");
        u64 target_weight(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32JostleModule__target_weight_implEPNS_26BattleObjectModuleAccessorE");
        u64 pos_z(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24JostleModule__pos_z_implEPNS_26BattleObjectModuleAccessorE");
        void set_refer(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind28JostleModule__set_refer_implEPNS_26BattleObjectModuleAccessorEb");
        void set_push_speed_x(app::BattleObjectModuleAccessor *,float,bool) asm("_ZN3app8lua_bind35JostleModule__set_push_speed_x_implEPNS_26BattleObjectModuleAccessorEfb");
        void set_push_speed_x_2(app::BattleObjectModuleAccessor *,float const*,bool) asm("_ZN3app8lua_bind37JostleModule__set_push_speed_x_2_implEPNS_26BattleObjectModuleAccessorEPKfb");
        void set_priority(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind31JostleModule__set_priority_implEPNS_26BattleObjectModuleAccessorEi");
        u64 priority(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind27JostleModule__priority_implEPNS_26BattleObjectModuleAccessorE");
        void set_force_gap(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind32JostleModule__set_force_gap_implEPNS_26BattleObjectModuleAccessorEi");
        void set_ignore_owner_id(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind38JostleModule__set_ignore_owner_id_implEPNS_26BattleObjectModuleAccessorEi");
        u64 ignore_owner_id(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34JostleModule__ignore_owner_id_implEPNS_26BattleObjectModuleAccessorE");
        u64 reset_area(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29JostleModule__reset_area_implEPNS_26BattleObjectModuleAccessorE");
        u64 overlap_x(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind28JostleModule__overlap_x_implEPNS_26BattleObjectModuleAccessorEb");
        void set_ignore_pri(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind33JostleModule__set_ignore_pri_implEPNS_26BattleObjectModuleAccessorEi");
        void set_push_speed_x_overlap_rate(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind48JostleModule__set_push_speed_x_overlap_rate_implEPNS_26BattleObjectModuleAccessorEf");
        u64 area_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28JostleModule__area_kind_implEPNS_26BattleObjectModuleAccessorE");
        u64 weight(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25JostleModule__weight_implEPNS_26BattleObjectModuleAccessorE");
        void set_weight(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind29JostleModule__set_weight_implEPNS_26BattleObjectModuleAccessorEf");
        void set_influence_opponent_weight(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind48JostleModule__set_influence_opponent_weight_implEPNS_26BattleObjectModuleAccessorEb");
        void set_propagate_push_speed(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind43JostleModule__set_propagate_push_speed_implEPNS_26BattleObjectModuleAccessorEb");
        void set_overlap_rate_mul(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind39JostleModule__set_overlap_rate_mul_implEPNS_26BattleObjectModuleAccessorEf");
        void set_team(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind27JostleModule__set_team_implEPNS_26BattleObjectModuleAccessorEi");
    }
}
