#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterCutInManager {
        u64 request_start(app::FighterCutInManager *,u64 *,app::CutInTransactor *,app::CutInType,app::CutInData const*,app::CutInPriority) asm("_ZN3app8lua_bind39FighterCutInManager__request_start_implEPNS_19FighterCutInManagerERNS_26BattleObjectModuleAccessorEPNS_15CutInTransactorENS_9CutInTypeEPKNS_9CutInDataENS_13CutInPriorityE") LINKABLE;
        u64 request_end(app::FighterCutInManager *) asm("_ZN3app8lua_bind37FighterCutInManager__request_end_implEPNS_19FighterCutInManagerE") LINKABLE;
        bool is_owner(app::FighterCutInManager *,const u64*) asm("_ZN3app8lua_bind34FighterCutInManager__is_owner_implEPNS_19FighterCutInManagerERKNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_play(app::FighterCutInManager *) asm("_ZN3app8lua_bind33FighterCutInManager__is_play_implEPNS_19FighterCutInManagerE") LINKABLE;
        bool is_play_status(app::FighterCutInManager *) asm("_ZN3app8lua_bind40FighterCutInManager__is_play_status_implEPNS_19FighterCutInManagerE") LINKABLE;
        u64 add_task(app::FighterCutInManager *,unsigned int) asm("_ZN3app8lua_bind34FighterCutInManager__add_task_implEPNS_19FighterCutInManagerEj") LINKABLE;
        u64 set_throw_finish_zoom_rate(app::FighterCutInManager *,float) asm("_ZN3app8lua_bind52FighterCutInManager__set_throw_finish_zoom_rate_implEPNS_19FighterCutInManagerEf") LINKABLE;
        u64 set_throw_finish_offset(app::FighterCutInManager *,Vector3f) asm("_ZN3app8lua_bind49FighterCutInManager__set_throw_finish_offset_implEPNS_19FighterCutInManagerEN3phx8Vector3fE") LINKABLE;
    }
}
