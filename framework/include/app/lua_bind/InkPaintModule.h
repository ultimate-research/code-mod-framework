#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace InkPaintModule {
        u64 ink(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind24InkPaintModule__ink_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 ink_max(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28InkPaintModule__ink_max_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 add_ink(app::BattleObjectModuleAccessor *, float,unsigned int) asm("_ZN3app8lua_bind28InkPaintModule__add_ink_implEPNS_26BattleObjectModuleAccessorEfj") LINKABLE;
        u64 set_ink(app::BattleObjectModuleAccessor *, float,unsigned int) asm("_ZN3app8lua_bind28InkPaintModule__set_ink_implEPNS_26BattleObjectModuleAccessorEfj") LINKABLE;
        u64 reset_ink(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30InkPaintModule__reset_ink_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_ink_color(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34InkPaintModule__get_ink_color_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_special_paint(app::BattleObjectModuleAccessor *, app::SpecialPaintKind) asm("_ZN3app8lua_bind38InkPaintModule__set_special_paint_implEPNS_26BattleObjectModuleAccessorENS_16SpecialPaintKindE") LINKABLE;
    }
}
