#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterKineticEnergyMotion {
        void set_angle(app::FighterKineticEnergyMotion *,float) asm("_ZN3app8lua_bind42FighterKineticEnergyMotion__set_angle_implEPNS_26FighterKineticEnergyMotionEf");
        void set_angle_whole(app::FighterKineticEnergyMotion *,float,int) asm("_ZN3app8lua_bind48FighterKineticEnergyMotion__set_angle_whole_implEPNS_26FighterKineticEnergyMotionEfi");
        void set_speed_mul(app::FighterKineticEnergyMotion *,float) asm("_ZN3app8lua_bind46FighterKineticEnergyMotion__set_speed_mul_implEPNS_26FighterKineticEnergyMotionEf");
        void set_chara_dir(app::FighterKineticEnergyMotion *,float) asm("_ZN3app8lua_bind46FighterKineticEnergyMotion__set_chara_dir_implEPNS_26FighterKineticEnergyMotionEf");
        u64 reverse_chara_dir(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind50FighterKineticEnergyMotion__reverse_chara_dir_implEPNS_26FighterKineticEnergyMotionE");
        void set_update_flag(app::FighterKineticEnergyMotion *,bool) asm("_ZN3app8lua_bind48FighterKineticEnergyMotion__set_update_flag_implEPNS_26FighterKineticEnergyMotionEb");
        void set_speed_mul_2nd(app::FighterKineticEnergyMotion *,phx::Vector2f const&) asm("_ZN3app8lua_bind50FighterKineticEnergyMotion__set_speed_mul_2nd_implEPNS_26FighterKineticEnergyMotionERKN3phx8Vector2fE");
        u64 get_angle(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind42FighterKineticEnergyMotion__get_angle_implEPNS_26FighterKineticEnergyMotionE");
        u64 get_angle_whole(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind48FighterKineticEnergyMotion__get_angle_whole_implEPNS_26FighterKineticEnergyMotionE");
        u64 get_chara_dir(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind46FighterKineticEnergyMotion__get_chara_dir_implEPNS_26FighterKineticEnergyMotionE");
        u64 get_speed_mul(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind46FighterKineticEnergyMotion__get_speed_mul_implEPNS_26FighterKineticEnergyMotionE");
        bool is_cliff_ground_trans(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind54FighterKineticEnergyMotion__is_cliff_ground_trans_implEPNS_26FighterKineticEnergyMotionE");
        void set_ground_trans(app::FighterKineticEnergyMotion *) asm("_ZN3app8lua_bind49FighterKineticEnergyMotion__set_ground_trans_implEPNS_26FighterKineticEnergyMotionE");
    }
}
