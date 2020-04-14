#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace VisibilityModule {
        void set(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Hash40) asm("_ZN3app8lua_bind26VisibilityModule__set_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_");
        void set_int64(app::BattleObjectModuleAccessor *,long,long) asm("_ZN3app8lua_bind32VisibilityModule__set_int64_implEPNS_26BattleObjectModuleAccessorEll");
        void set_status_default(app::BattleObjectModuleAccessor *,phx::Hash40,phx::Hash40) asm("_ZN3app8lua_bind41VisibilityModule__set_status_default_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_");
        void set_status_default_int64(app::BattleObjectModuleAccessor *,long,long) asm("_ZN3app8lua_bind47VisibilityModule__set_status_default_int64_implEPNS_26BattleObjectModuleAccessorEll");
        u64 reset_status_default(app::BattleObjectModuleAccessor *,phx::Hash40) asm("_ZN3app8lua_bind43VisibilityModule__reset_status_default_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E");
        u64 reset_status_default_int64(app::BattleObjectModuleAccessor *,long) asm("_ZN3app8lua_bind49VisibilityModule__reset_status_default_int64_implEPNS_26BattleObjectModuleAccessorEl");
        u64 reset_status_default_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind47VisibilityModule__reset_status_default_all_implEPNS_26BattleObjectModuleAccessorE");
        void set_default_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38VisibilityModule__set_default_all_implEPNS_26BattleObjectModuleAccessorE");
        void set_mesh_visibility(app::BattleObjectModuleAccessor *,phx::Hash40,int,bool) asm("_ZN3app8lua_bind42VisibilityModule__set_mesh_visibility_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eib");
        void set_mesh_visibility_int64(app::BattleObjectModuleAccessor *,long,int,bool) asm("_ZN3app8lua_bind48VisibilityModule__set_mesh_visibility_int64_implEPNS_26BattleObjectModuleAccessorElib");
        void set_material_anim_priority(app::BattleObjectModuleAccessor *,phx::Hash40,bool) asm("_ZN3app8lua_bind49VisibilityModule__set_material_anim_priority_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eb");
        void set_whole(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind32VisibilityModule__set_whole_implEPNS_26BattleObjectModuleAccessorEb");
        u64 get_whole(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32VisibilityModule__get_whole_implEPNS_26BattleObjectModuleAccessorE");
        bool is_visible(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33VisibilityModule__is_visible_implEPNS_26BattleObjectModuleAccessorE");
        void set_default(app::BattleObjectModuleAccessor *,phx::Hash40) asm("_ZN3app8lua_bind34VisibilityModule__set_default_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E");
        void set_default_int64(app::BattleObjectModuleAccessor *,long) asm("_ZN3app8lua_bind40VisibilityModule__set_default_int64_implEPNS_26BattleObjectModuleAccessorEl");
        bool is_visible_mesh(app::BattleObjectModuleAccessor *,unsigned int) asm("_ZN3app8lua_bind38VisibilityModule__is_visible_mesh_implEPNS_26BattleObjectModuleAccessorEj");
        void set_visibility_mode(app::BattleObjectModuleAccessor *,app::VisibilityMode) asm("_ZN3app8lua_bind42VisibilityModule__set_visibility_mode_implEPNS_26BattleObjectModuleAccessorENS_14VisibilityModeE");
        void set_model_visible(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind40VisibilityModule__set_model_visible_implEPNS_26BattleObjectModuleAccessorEb");
    }
}
