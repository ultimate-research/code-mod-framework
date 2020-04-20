#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace BossManager {
        bool is_stoppable_se(app::BossManager *) asm("_ZN3app8lua_bind33BossManager__is_stoppable_se_implEPNS_11BossManagerE") LINKABLE;
        u64 notify_on_boss_defeat(app::BossManager *,app::FighterKind) asm("_ZN3app8lua_bind39BossManager__notify_on_boss_defeat_implEPNS_11BossManagerENS_11FighterKindE") LINKABLE;
        u64 notify_on_boss_keyoff_bgm(app::BossManager *,app::FighterKind) asm("_ZN3app8lua_bind43BossManager__notify_on_boss_keyoff_bgm_implEPNS_11BossManagerENS_11FighterKindE") LINKABLE;
        u64 notify_on_boss_dead(app::BossManager *,app::FighterKind) asm("_ZN3app8lua_bind37BossManager__notify_on_boss_dead_implEPNS_11BossManagerENS_11FighterKindE") LINKABLE;
    }
}
