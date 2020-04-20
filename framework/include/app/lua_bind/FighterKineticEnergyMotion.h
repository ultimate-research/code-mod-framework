#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterKineticEnergyMotion {
        u64 set_angle(app::FighterKineticEnergyMotion *,float) asm("_ZN3app8lua_bind42FighterKineticEnergyMotion__set_angle_implEPNS_26FighterKineticEnergyMotionEf") LINKABLE;
        u64 set_angle_whole(app::FighterKineticEnergyMotion *,float,int) asm("_ZN3app8lua_bind48FighterKineticEnergyMotion__set_angle_whole_implEPNS_26FighterKineticEnergyMotionEfi") LINKABLE;
        u64 set_speed_mul(app::FighterKineticEnergyMotion *,float) asm("_ZN3app8lua_bind46FighterKineticEnergyMotion__set_speed_mul_implEPNS_26FighterKineticEnergyMotionEf") LINKABLE;
        u64 set_chara_dir(app::FighterKineticEnergyMotion *,float) asm("_ZN3app8lua_bind46FighterKineticEnergyMotion__set_chara_dir_implEPNS_26FighterKineticEnergyMotionEf") LINKABLE;
        u64 reverse_chara_dir(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind50FighterKineticEnergyMotion__reverse_chara_dir_implEPNS_26FighterKineticEnergyMotionE") LINKABLE;
        u64 set_update_flag(app::FighterKineticEnergyMotion *,bool) asm("_ZN3app8lua_bind48FighterKineticEnergyMotion__set_update_flag_implEPNS_26FighterKineticEnergyMotionEb") LINKABLE;
        u64 set_speed_mul_2nd(app::FighterKineticEnergyMotion *,const Vector2f*) asm("_ZN3app8lua_bind50FighterKineticEnergyMotion__set_speed_mul_2nd_implEPNS_26FighterKineticEnergyMotionERKN3phx8Vector2fE") LINKABLE;
        u64 get_angle(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind42FighterKineticEnergyMotion__get_angle_implEPNS_26FighterKineticEnergyMotionE") LINKABLE;
        u64 get_angle_whole(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind48FighterKineticEnergyMotion__get_angle_whole_implEPNS_26FighterKineticEnergyMotionE") LINKABLE;
        u64 get_chara_dir(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind46FighterKineticEnergyMotion__get_chara_dir_implEPNS_26FighterKineticEnergyMotionE") LINKABLE;
        u64 get_speed_mul(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind46FighterKineticEnergyMotion__get_speed_mul_implEPNS_26FighterKineticEnergyMotionE") LINKABLE;
        bool is_cliff_ground_trans(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind54FighterKineticEnergyMotion__is_cliff_ground_trans_implEPNS_26FighterKineticEnergyMotionE") LINKABLE;
        u64 set_ground_trans(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind49FighterKineticEnergyMotion__set_ground_trans_implEPNS_26FighterKineticEnergyMotionE") LINKABLE;
    }
}
