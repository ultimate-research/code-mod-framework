#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ShadowModule {
        void set_draw(app::BattleObjectModuleAccessor *,app::ShadowDrawFlag,bool) asm("_ZN3app8lua_bind27ShadowModule__set_draw_implEPNS_26BattleObjectModuleAccessorENS_14ShadowDrawFlagEb");
        void set_draw_status(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind34ShadowModule__set_draw_status_implEPNS_26BattleObjectModuleAccessorEb");
        void set_size(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind27ShadowModule__set_size_implEPNS_26BattleObjectModuleAccessorEf");
        void set_offset_y(app::BattleObjectModuleAccessor *,float) asm("_ZN3app8lua_bind31ShadowModule__set_offset_y_implEPNS_26BattleObjectModuleAccessorEf");
    }
}
