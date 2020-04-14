#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace StageManager {
        u64 stage_all_stop(app::StageManager *,bool) asm("_ZN3app8lua_bind33StageManager__stage_all_stop_implEPNS_12StageManagerEb");
        bool is_discretion_final_enabled(app::StageManager *) asm("_ZN3app8lua_bind46StageManager__is_discretion_final_enabled_implEPNS_12StageManagerE");
    }
}
