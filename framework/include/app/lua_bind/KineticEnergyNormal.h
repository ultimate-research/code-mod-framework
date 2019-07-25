#ifndef KINETICENERGYNORMAL_H
#define KINETICENERGYNORMAL_H
namespace app::lua_bind {
    namespace KineticEnergyNormal {
        u64 off_consider_ground_normal(app::KineticEnergyNormal *) asm("_ZN3app8lua_bind52KineticEnergyNormal__off_consider_ground_normal_implEPNS_19KineticEnergyNormalE") LINKABLE;
        u64 on_consider_ground_normal(app::KineticEnergyNormal *) asm("_ZN3app8lua_bind51KineticEnergyNormal__on_consider_ground_normal_implEPNS_19KineticEnergyNormalE") LINKABLE;
        u64 set_accel(app::KineticEnergyNormal *,const Vector2f*) asm("_ZN3app8lua_bind35KineticEnergyNormal__set_accel_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
        u64 set_brake(app::KineticEnergyNormal *,const Vector2f*) asm("_ZN3app8lua_bind35KineticEnergyNormal__set_brake_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
        u64 set_limit_speed(app::KineticEnergyNormal *,const Vector2f*) asm("_ZN3app8lua_bind41KineticEnergyNormal__set_limit_speed_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
        u64 set_speed(app::KineticEnergyNormal *,const Vector2f*) asm("_ZN3app8lua_bind35KineticEnergyNormal__set_speed_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
        u64 set_speed_3d(app::KineticEnergyNormal *,const Vector3f*) asm("_ZN3app8lua_bind38KineticEnergyNormal__set_speed_3d_implEPNS_19KineticEnergyNormalERKN3phx8Vector3fE") LINKABLE;
        u64 set_stable_speed(app::KineticEnergyNormal *,const Vector2f*) asm("_ZN3app8lua_bind42KineticEnergyNormal__set_stable_speed_implEPNS_19KineticEnergyNormalERKN3phx8Vector2fE") LINKABLE;
        }
    }
#endif // KINETICENERGYNORMAL_H
