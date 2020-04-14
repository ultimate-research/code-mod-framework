#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GrabModule {
        u64 clear_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26GrabModule__clear_all_implEPNS_26BattleObjectModuleAccessorE");
        u64 clear(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind22GrabModule__clear_implEPNS_26BattleObjectModuleAccessorEi");
        void set_constraint(app::BattleObjectModuleAccessor *,int,bool) asm("_ZN3app8lua_bind31GrabModule__set_constraint_implEPNS_26BattleObjectModuleAccessorEib");
        bool is_grab(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind24GrabModule__is_grab_implEPNS_26BattleObjectModuleAccessorEi");
        u64 size(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind21GrabModule__size_implEPNS_26BattleObjectModuleAccessorEi");
        void set_size(app::BattleObjectModuleAccessor *,int,float) asm("_ZN3app8lua_bind25GrabModule__set_size_implEPNS_26BattleObjectModuleAccessorEif");
        u64 pos_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind22GrabModule__pos_x_implEPNS_26BattleObjectModuleAccessorE");
        u64 center_pos(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind27GrabModule__center_pos_implEPNS_26BattleObjectModuleAccessorEi");
        u64 node(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind21GrabModule__node_implEPNS_26BattleObjectModuleAccessorEi");
        void set_power_up(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind29GrabModule__set_power_up_implEPNS_26BattleObjectModuleAccessorEf");
        void set_size_mul(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind29GrabModule__set_size_mul_implEPNS_26BattleObjectModuleAccessorEf");
        void set_scale_2nd(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind30GrabModule__set_scale_2nd_implEPNS_26BattleObjectModuleAccessorEf");
        u64 sleep(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind22GrabModule__sleep_implEPNS_26BattleObjectModuleAccessorEb");
        u64 relocate(app::BattleObjectModuleAccessor *,phx::Vector2f const&) asm("_ZN3app8lua_bind25GrabModule__relocate_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE");
        void set_check_front(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind32GrabModule__set_check_front_implEPNS_26BattleObjectModuleAccessorEb");
        void set_rebound(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind28GrabModule__set_rebound_implEPNS_26BattleObjectModuleAccessorEb");
        bool is_rebound(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind27GrabModule__is_rebound_implEPNS_26BattleObjectModuleAccessorE");
        u64 check_rebound(app::BattleObjectModuleAccessor *,app::BattleObjectModuleAccessor const&) asm("_ZN3app8lua_bind30GrabModule__check_rebound_implEPNS_26BattleObjectModuleAccessorERKS1_");
    }
}
