#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPitBFinalModule {
        u64 init(app::FighterPitBFinalModule *) asm("_ZN3app8lua_bind33FighterPitBFinalModule__init_implEPNS_22FighterPitBFinalModuleE");
        u64 get_hit_num(app::FighterPitBFinalModule *,unsigned char) asm("_ZN3app8lua_bind40FighterPitBFinalModule__get_hit_num_implEPNS_22FighterPitBFinalModuleEh");
        u64 get_hit_object_id(app::FighterPitBFinalModule *,unsigned char,int) asm("_ZN3app8lua_bind46FighterPitBFinalModule__get_hit_object_id_implEPNS_22FighterPitBFinalModuleEhi");
        u64 get_hit_group(app::FighterPitBFinalModule *,unsigned char,int) asm("_ZN3app8lua_bind42FighterPitBFinalModule__get_hit_group_implEPNS_22FighterPitBFinalModuleEhi");
        u64 get_hit_no(app::FighterPitBFinalModule *,unsigned char,int) asm("_ZN3app8lua_bind39FighterPitBFinalModule__get_hit_no_implEPNS_22FighterPitBFinalModuleEhi");
    }
}
