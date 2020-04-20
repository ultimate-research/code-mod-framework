#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace KineticModule {
        u64 get_energy(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind30KineticModule__get_energy_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        void clear_speed_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35KineticModule__clear_speed_all_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        void clear_speed_energy_id(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind41KineticModule__clear_speed_energy_id_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        void clear_speed_attr(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36KineticModule__clear_speed_attr_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 suspend_energy_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38KineticModule__suspend_energy_all_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 resume_energy_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37KineticModule__resume_energy_all_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 unable_energy_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind37KineticModule__unable_energy_all_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        float get_sum_speed(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind33KineticModule__get_sum_speed_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        float get_sum_speed_x(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind35KineticModule__get_sum_speed_x_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        float get_sum_speed_y(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind35KineticModule__get_sum_speed_y_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        float get_sum_speed_length(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind40KineticModule__get_sum_speed_length_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        float get_sum_speed3f(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind35KineticModule__get_sum_speed3f_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        float get_sum_rotation(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36KineticModule__get_sum_rotation_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_consider_ground_friction(app::BattleObjectModuleAccessor *, bool,int) asm("_ZN3app8lua_bind48KineticModule__set_consider_ground_friction_implEPNS_26BattleObjectModuleAccessorEbi") LINKABLE;
        u64 mul_speed(app::BattleObjectModuleAccessor *, const Vector3f*,int) asm("_ZN3app8lua_bind29KineticModule__mul_speed_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEi") LINKABLE;
        u64 mul_accel(app::BattleObjectModuleAccessor *, const Vector3f*,int) asm("_ZN3app8lua_bind29KineticModule__mul_accel_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEi") LINKABLE;
        u64 reflect_speed(app::BattleObjectModuleAccessor *, const Vector3f*,int) asm("_ZN3app8lua_bind33KineticModule__reflect_speed_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEi") LINKABLE;
        u64 reflect_accel(app::BattleObjectModuleAccessor *, const Vector3f*,int) asm("_ZN3app8lua_bind33KineticModule__reflect_accel_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEi") LINKABLE;
        u64 change_kinetic(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind34KineticModule__change_kinetic_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_kinetic_type(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36KineticModule__get_kinetic_type_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        void enable_energy(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind33KineticModule__enable_energy_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        void unable_energy(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind33KineticModule__unable_energy_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        bool is_enable_energy(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36KineticModule__is_enable_energy_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 suspend_energy(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind34KineticModule__suspend_energy_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 resume_energy(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind33KineticModule__resume_energy_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        bool is_suspend_energy(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind37KineticModule__is_suspend_energy_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 add_speed(app::BattleObjectModuleAccessor *, const Vector3f*) asm("_ZN3app8lua_bind29KineticModule__add_speed_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        u64 add_speed_outside(app::BattleObjectModuleAccessor *, int,const Vector3f*) asm("_ZN3app8lua_bind37KineticModule__add_speed_outside_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fE") LINKABLE;
        u64 sleep(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind25KineticModule__sleep_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
    }
}
