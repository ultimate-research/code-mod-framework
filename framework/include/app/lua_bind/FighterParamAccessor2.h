#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterParamAccessor2 {
        u64 thrown_offset(app::FighterParamAccessor2 *,int,int,int) asm("_ZN3app8lua_bind41FighterParamAccessor2__thrown_offset_implEPNS_21FighterParamAccessor2Eiii");
        u64 donkey_thrown_offset(app::FighterParamAccessor2 *,int,int) asm("_ZN3app8lua_bind48FighterParamAccessor2__donkey_thrown_offset_implEPNS_21FighterParamAccessor2Eii");
        u64 ridley_dragged_offset(app::FighterParamAccessor2 *,int,int) asm("_ZN3app8lua_bind49FighterParamAccessor2__ridley_dragged_offset_implEPNS_21FighterParamAccessor2Eii");
        u64 diddy_special_s_offset(app::FighterParamAccessor2 *,int) asm("_ZN3app8lua_bind50FighterParamAccessor2__diddy_special_s_offset_implEPNS_21FighterParamAccessor2Ei");
        u64 miifighter_suplex_offset(app::FighterParamAccessor2 *,int) asm("_ZN3app8lua_bind52FighterParamAccessor2__miifighter_suplex_offset_implEPNS_21FighterParamAccessor2Ei");
        u64 gaogaen_final_offset(app::FighterParamAccessor2 *,int,int) asm("_ZN3app8lua_bind48FighterParamAccessor2__gaogaen_final_offset_implEPNS_21FighterParamAccessor2Eii");
        u64 hit_target_no(app::FighterParamAccessor2 *,int,int) asm("_ZN3app8lua_bind41FighterParamAccessor2__hit_target_no_implEPNS_21FighterParamAccessor2Eii");
    }
}
