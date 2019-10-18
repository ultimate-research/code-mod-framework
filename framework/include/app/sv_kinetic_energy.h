#ifndef APP_SV_KINETIC_ENERGY_H
#define APP_SV_KINETIC_ENERGY_H

#include <switch_min.h>
#include "useful/useful.h"

namespace app::sv_kinetic_energy {
    extern void clear_speed(u64) asm("_ZN3app17sv_kinetic_energy11clear_speedEP9lua_State") LINKABLE;
    extern void friction_on(u64) asm("_ZN3app17sv_kinetic_energy11friction_onEP9lua_State") LINKABLE;
    extern void get_accel_y(u64) asm("_ZN3app17sv_kinetic_energy11get_accel_yEP9lua_State") LINKABLE;
    extern void get_brake_y(u64) asm("_ZN3app17sv_kinetic_energy11get_brake_yEP9lua_State") LINKABLE;
    extern void get_speed3f(u64) asm("_ZN3app17sv_kinetic_energy11get_speed3fEP9lua_State") LINKABLE;
    extern void get_speed_x(u64) asm("_ZN3app17sv_kinetic_energy11get_speed_xEP9lua_State") LINKABLE;
    extern void get_speed_y(u64) asm("_ZN3app17sv_kinetic_energy11get_speed_yEP9lua_State") LINKABLE;
    extern void friction_off(u64) asm("_ZN3app17sv_kinetic_energy12friction_offEP9lua_State") LINKABLE;
    extern void get_rotation(u64) asm("_ZN3app17sv_kinetic_energy12get_rotationEP9lua_State") LINKABLE;
    extern void reset_energy(u64) asm("_ZN3app17sv_kinetic_energy12reset_energyEP9lua_State") LINKABLE;
    extern void get_speed_mul(u64) asm("_ZN3app17sv_kinetic_energy13get_speed_mulEP9lua_State") LINKABLE;
    extern void set_chara_dir(u64) asm("_ZN3app17sv_kinetic_energy13set_chara_dirEP9lua_State") LINKABLE;
    extern void set_speed_mul(u64) asm("_ZN3app17sv_kinetic_energy13set_speed_mulEP9lua_State") LINKABLE;
    extern void clear_speed_ex(u64) asm("_ZN3app17sv_kinetic_energy14clear_speed_exEP9lua_State") LINKABLE;
    extern void get_rotation_x(u64) asm("_ZN3app17sv_kinetic_energy14get_rotation_xEP9lua_State") LINKABLE;
    extern void get_rotation_y(u64) asm("_ZN3app17sv_kinetic_energy14get_rotation_yEP9lua_State") LINKABLE;
    extern void get_rotation_z(u64) asm("_ZN3app17sv_kinetic_energy14get_rotation_zEP9lua_State") LINKABLE;
    extern void mul_x_accel_add(u64) asm("_ZN3app17sv_kinetic_energy15mul_x_accel_addEP9lua_State") LINKABLE;
    extern void mul_x_accel_mul(u64) asm("_ZN3app17sv_kinetic_energy15mul_x_accel_mulEP9lua_State") LINKABLE;
    extern void mul_x_speed_max(u64) asm("_ZN3app17sv_kinetic_energy15mul_x_speed_maxEP9lua_State") LINKABLE;
    extern void set_accel_x_add(u64) asm("_ZN3app17sv_kinetic_energy15set_accel_x_addEP9lua_State") LINKABLE;
    extern void set_accel_x_mul(u64) asm("_ZN3app17sv_kinetic_energy15set_accel_x_mulEP9lua_State") LINKABLE;
    extern void set_accel_y_add(u64) asm("_ZN3app17sv_kinetic_energy15set_accel_y_addEP9lua_State") LINKABLE;
    extern void set_accel_y_mul(u64) asm("_ZN3app17sv_kinetic_energy15set_accel_y_mulEP9lua_State") LINKABLE;
    extern void set_limit_speed(u64) asm("_ZN3app17sv_kinetic_energy15set_limit_speedEP9lua_State") LINKABLE;
    extern void get_speed_length(u64) asm("_ZN3app17sv_kinetic_energy16get_speed_lengthEP9lua_State") LINKABLE;
    extern void set_damage_speed(u64) asm("_ZN3app17sv_kinetic_energy16set_damage_speedEP9lua_State") LINKABLE;
    extern void set_ground_trans(u64) asm("_ZN3app17sv_kinetic_energy16set_ground_transEP9lua_State") LINKABLE;
    extern void set_stable_speed(u64) asm("_ZN3app17sv_kinetic_energy16set_stable_speedEP9lua_State") LINKABLE;
    extern void get_limit_speed_x(u64) asm("_ZN3app17sv_kinetic_energy17get_limit_speed_xEP9lua_State") LINKABLE;
    extern void get_limit_speed_y(u64) asm("_ZN3app17sv_kinetic_energy17get_limit_speed_yEP9lua_State") LINKABLE;
    extern void set_speed_mul_2nd(u64) asm("_ZN3app17sv_kinetic_energy17set_speed_mul_2ndEP9lua_State") LINKABLE;
    extern void get_stable_speed_x(u64) asm("_ZN3app17sv_kinetic_energy18get_stable_speed_xEP9lua_State") LINKABLE;
    extern void get_stable_speed_y(u64) asm("_ZN3app17sv_kinetic_energy18get_stable_speed_yEP9lua_State") LINKABLE;
    extern void is_gravity_fix_accel(u64) asm("_ZN3app17sv_kinetic_energy20is_gravity_fix_accelEP9lua_State") LINKABLE;
    extern void is_cliff_ground_trans(u64) asm("_ZN3app17sv_kinetic_energy21is_cliff_ground_transEP9lua_State") LINKABLE;
    extern void set_gravity_coefficient(u64) asm("_ZN3app17sv_kinetic_energy23set_gravity_coefficientEP9lua_State") LINKABLE;
    extern void controller_set_accel_x_add(u64) asm("_ZN3app17sv_kinetic_energy26controller_set_accel_x_addEP9lua_State") LINKABLE;
    extern void controller_set_accel_x_mul(u64) asm("_ZN3app17sv_kinetic_energy26controller_set_accel_x_mulEP9lua_State") LINKABLE;
    extern void set_motion_energy_update_flag(u64) asm("_ZN3app17sv_kinetic_energy29set_motion_energy_update_flagEP9lua_State") LINKABLE;
    extern void enable(u64) asm("_ZN3app17sv_kinetic_energy6enableEP9lua_State") LINKABLE;
    extern void resume(u64) asm("_ZN3app17sv_kinetic_energy6resumeEP9lua_State") LINKABLE;
    extern void unable(u64) asm("_ZN3app17sv_kinetic_energy6unableEP9lua_State") LINKABLE;
    extern void suspend(u64) asm("_ZN3app17sv_kinetic_energy7suspendEP9lua_State") LINKABLE;
    extern void add_speed(u64) asm("_ZN3app17sv_kinetic_energy9add_speedEP9lua_State") LINKABLE;
    extern void get_accel(u64) asm("_ZN3app17sv_kinetic_energy9get_accelEP9lua_State") LINKABLE;
    extern void get_speed(u64) asm("_ZN3app17sv_kinetic_energy9get_speedEP9lua_State") LINKABLE;
    extern void is_enable(u64) asm("_ZN3app17sv_kinetic_energy9is_enableEP9lua_State") LINKABLE;
    extern void mul_accel(u64) asm("_ZN3app17sv_kinetic_energy9mul_accelEP9lua_State") LINKABLE;
    extern void mul_speed(u64) asm("_ZN3app17sv_kinetic_energy9mul_speedEP9lua_State") LINKABLE;
    extern void set_accel(u64) asm("_ZN3app17sv_kinetic_energy9set_accelEP9lua_State") LINKABLE;
    extern void set_angle(u64) asm("_ZN3app17sv_kinetic_energy9set_angleEP9lua_State") LINKABLE;
    extern void set_brake(u64) asm("_ZN3app17sv_kinetic_energy9set_brakeEP9lua_State") LINKABLE;
    extern void set_speed(u64) asm("_ZN3app17sv_kinetic_energy9set_speedEP9lua_State") LINKABLE;
}

#endif