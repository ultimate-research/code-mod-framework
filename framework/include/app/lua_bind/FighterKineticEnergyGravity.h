#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterKineticEnergyGravity {
        void set_accel(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind43FighterKineticEnergyGravity__set_accel_implEPNS_27FighterKineticEnergyGravityEf");
        void set_speed(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind43FighterKineticEnergyGravity__set_speed_implEPNS_27FighterKineticEnergyGravityEf");
        void set_stable_speed(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind50FighterKineticEnergyGravity__set_stable_speed_implEPNS_27FighterKineticEnergyGravityEf");
        void set_limit_speed(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind49FighterKineticEnergyGravity__set_limit_speed_implEPNS_27FighterKineticEnergyGravityEf");
        void set_brake(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind43FighterKineticEnergyGravity__set_brake_implEPNS_27FighterKineticEnergyGravityEf");
        u64 get_accel(app::FighterKineticEnergyGravity *) asm("_ZN3app8lua_bind43FighterKineticEnergyGravity__get_accel_implEPNS_27FighterKineticEnergyGravityE");
        u64 get_stable_speed(app::FighterKineticEnergyGravity *) asm("_ZN3app8lua_bind50FighterKineticEnergyGravity__get_stable_speed_implEPNS_27FighterKineticEnergyGravityE");
        u64 get_limit_speed(app::FighterKineticEnergyGravity *) asm("_ZN3app8lua_bind49FighterKineticEnergyGravity__get_limit_speed_implEPNS_27FighterKineticEnergyGravityE");
        u64 get_brake(app::FighterKineticEnergyGravity *) asm("_ZN3app8lua_bind43FighterKineticEnergyGravity__get_brake_implEPNS_27FighterKineticEnergyGravityE");
        void set_gravity_coefficient(app::FighterKineticEnergyGravity *,float) asm("_ZN3app8lua_bind57FighterKineticEnergyGravity__set_gravity_coefficient_implEPNS_27FighterKineticEnergyGravityEf");
    }
}
