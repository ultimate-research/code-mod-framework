#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace KineticEnergyNormal {
        u64 get_accel(app::KineticEnergyNormal *) asm("_ZN3app8lua_bind35KineticEnergyNormal__get_accel_implEPNS_19KineticEnergyNormalE");
        u64 get_stable_speed(app::KineticEnergyNormal *) asm("_ZN3app8lua_bind42KineticEnergyNormal__get_stable_speed_implEPNS_19KineticEnergyNormalE");
        u64 get_brake(app::KineticEnergyNormal *) asm("_ZN3app8lua_bind35KineticEnergyNormal__get_brake_implEPNS_19KineticEnergyNormalE");
        u64 get_limit_speed(app::KineticEnergyNormal *) asm("_ZN3app8lua_bind41KineticEnergyNormal__get_limit_speed_implEPNS_19KineticEnergyNormalE");
        void set_speed(app::KineticEnergyNormal *,phx::Vector2f const&) asm("_ZN3app8lua_bind35KineticEnergyNormal__set_speed_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE");
        void set_speed_3d(app::KineticEnergyNormal *,phx::Vector3f const&) asm("_ZN3app8lua_bind38KineticEnergyNormal__set_speed_3d_implEPNS_19KineticEnergyNormalERKN3phx8Vector3fE");
        void set_accel(app::KineticEnergyNormal *,phx::Vector2f const&) asm("_ZN3app8lua_bind35KineticEnergyNormal__set_accel_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE");
        void set_stable_speed(app::KineticEnergyNormal *,phx::Vector2f const&) asm("_ZN3app8lua_bind42KineticEnergyNormal__set_stable_speed_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE");
        void set_brake(app::KineticEnergyNormal *,phx::Vector2f const&) asm("_ZN3app8lua_bind35KineticEnergyNormal__set_brake_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE");
        void set_limit_speed(app::KineticEnergyNormal *,phx::Vector2f const&) asm("_ZN3app8lua_bind41KineticEnergyNormal__set_limit_speed_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE");
        u64 on_consider_ground_normal(app::KineticEnergyNormal *) asm("_ZN3app8lua_bind51KineticEnergyNormal__on_consider_ground_normal_implEPNS_19KineticEnergyNormalE");
        u64 off_consider_ground_normal(app::KineticEnergyNormal *) asm("_ZN3app8lua_bind52KineticEnergyNormal__off_consider_ground_normal_implEPNS_19KineticEnergyNormalE");
        bool is_consider_ground_normal(app::KineticEnergyNormal *) asm("_ZN3app8lua_bind51KineticEnergyNormal__is_consider_ground_normal_implEPNS_19KineticEnergyNormalE");
    }
}
