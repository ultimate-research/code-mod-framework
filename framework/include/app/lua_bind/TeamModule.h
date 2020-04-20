#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace TeamModule {
        u64 team_no(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24TeamModule__team_no_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 team_second_no(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31TeamModule__team_second_no_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_team(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind25TeamModule__set_team_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_team_second(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind32TeamModule__set_team_second_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 hit_team_no(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28TeamModule__hit_team_no_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 hit_team_second_no(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35TeamModule__hit_team_second_no_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_hit_team(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind29TeamModule__set_hit_team_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_hit_team_second(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind36TeamModule__set_hit_team_second_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_team_owner_id(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind34TeamModule__set_team_owner_id_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 team_owner_id(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30TeamModule__team_owner_id_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 metamon_owner_fighter_entry_id(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind47TeamModule__metamon_owner_fighter_entry_id_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}
