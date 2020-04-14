#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterKineticEnergyController {
        u64 mul_x_speed_max(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__mul_x_speed_max_implEPNS_30FighterKineticEnergyControllerEf");
        void set_accel_x_mul(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__set_accel_x_mul_implEPNS_30FighterKineticEnergyControllerEf");
        void set_accel_x_add(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__set_accel_x_add_implEPNS_30FighterKineticEnergyControllerEf");
        u64 mul_x_accel_mul(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__mul_x_accel_mul_implEPNS_30FighterKineticEnergyControllerEf");
        u64 mul_x_accel_add(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__mul_x_accel_add_implEPNS_30FighterKineticEnergyControllerEf");
        void set_accel_y_mul(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__set_accel_y_mul_implEPNS_30FighterKineticEnergyControllerEf");
        void set_accel_y_add(app::FighterKineticEnergyController *,float) asm("_ZN3app8lua_bind52FighterKineticEnergyController__set_accel_y_add_implEPNS_30FighterKineticEnergyControllerEf");
        u64 get_accel_x_mul(app::FighterKineticEnergyController *) asm("_ZN3app8lua_bind52FighterKineticEnergyController__get_accel_x_mul_implEPNS_30FighterKineticEnergyControllerE");
        u64 get_accel_x_add(app::FighterKineticEnergyController *) asm("_ZN3app8lua_bind52FighterKineticEnergyController__get_accel_x_add_implEPNS_30FighterKineticEnergyControllerE");
        u64 get_accel_y_mul(app::FighterKineticEnergyController *) asm("_ZN3app8lua_bind52FighterKineticEnergyController__get_accel_y_mul_implEPNS_30FighterKineticEnergyControllerE");
        u64 get_accel_y_add(app::FighterKineticEnergyController *) asm("_ZN3app8lua_bind52FighterKineticEnergyController__get_accel_y_add_implEPNS_30FighterKineticEnergyControllerE");
    }
}
