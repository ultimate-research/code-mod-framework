#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace KineticEnergyRotNormal {
        u64 get_accel(app::KineticEnergyRotNormal *) asm("_ZN3app8lua_bind38KineticEnergyRotNormal__get_accel_implEPNS_22KineticEnergyRotNormalE");
        u64 get_stable_speed(app::KineticEnergyRotNormal *) asm("_ZN3app8lua_bind45KineticEnergyRotNormal__get_stable_speed_implEPNS_22KineticEnergyRotNormalE");
        u64 get_brake(app::KineticEnergyRotNormal *) asm("_ZN3app8lua_bind38KineticEnergyRotNormal__get_brake_implEPNS_22KineticEnergyRotNormalE");
        u64 get_limit_speed(app::KineticEnergyRotNormal *) asm("_ZN3app8lua_bind44KineticEnergyRotNormal__get_limit_speed_implEPNS_22KineticEnergyRotNormalE");
        u64 get_rot_speed(app::KineticEnergyRotNormal *) asm("_ZN3app8lua_bind42KineticEnergyRotNormal__get_rot_speed_implEPNS_22KineticEnergyRotNormalE");
        void set_speed(app::KineticEnergyRotNormal *,phx::Vector3f const&) asm("_ZN3app8lua_bind38KineticEnergyRotNormal__set_speed_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE");
        void set_accel(app::KineticEnergyRotNormal *,phx::Vector3f const&) asm("_ZN3app8lua_bind38KineticEnergyRotNormal__set_accel_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE");
        void set_stable_speed(app::KineticEnergyRotNormal *,phx::Vector3f const&) asm("_ZN3app8lua_bind45KineticEnergyRotNormal__set_stable_speed_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE");
        void set_brake(app::KineticEnergyRotNormal *,phx::Vector3f const&) asm("_ZN3app8lua_bind38KineticEnergyRotNormal__set_brake_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE");
        void set_limit_speed(app::KineticEnergyRotNormal *,phx::Vector3f const&) asm("_ZN3app8lua_bind44KineticEnergyRotNormal__set_limit_speed_implEPNS_22KineticEnergyRotNormalERKN3phx8Vector3fE");
    }
}
