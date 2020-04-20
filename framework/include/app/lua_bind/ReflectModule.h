#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ReflectModule {
        u64 reset_info(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30ReflectModule__reset_info_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 object_id(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29ReflectModule__object_id_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_object_id(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind33ReflectModule__set_object_id_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 team_no(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind27ReflectModule__team_no_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_team_no(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31ReflectModule__set_team_no_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 attack_mul(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30ReflectModule__attack_mul_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_attack_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind34ReflectModule__set_attack_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 speed_mul(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29ReflectModule__speed_mul_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_speed_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind33ReflectModule__set_speed_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 life_mul(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28ReflectModule__life_mul_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_life_mul(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind32ReflectModule__set_life_mul_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        bool is_reflect(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30ReflectModule__is_reflect_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_no_speed_mul(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind36ReflectModule__set_no_speed_mul_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_count_max(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32ReflectModule__is_count_max_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 count(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25ReflectModule__count_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_reverse_lr(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34ReflectModule__get_reverse_lr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_collision_no(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36ReflectModule__set_collision_no_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
    }
}
