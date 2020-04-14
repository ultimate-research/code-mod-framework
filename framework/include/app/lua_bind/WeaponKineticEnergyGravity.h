#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace WeaponKineticEnergyGravity {
        void set_accel(app::WeaponKineticEnergyGravity *,float) asm("_ZN3app8lua_bind42WeaponKineticEnergyGravity__set_accel_implEPNS_26WeaponKineticEnergyGravityEf");
        void set_speed(app::WeaponKineticEnergyGravity *,float) asm("_ZN3app8lua_bind42WeaponKineticEnergyGravity__set_speed_implEPNS_26WeaponKineticEnergyGravityEf");
        u64 get_limit_speed(app::WeaponKineticEnergyGravity *) asm("_ZN3app8lua_bind48WeaponKineticEnergyGravity__get_limit_speed_implEPNS_26WeaponKineticEnergyGravityE");
        void set_limit_speed(app::WeaponKineticEnergyGravity *,float) asm("_ZN3app8lua_bind48WeaponKineticEnergyGravity__set_limit_speed_implEPNS_26WeaponKineticEnergyGravityEf");
    }
}
