#include <switch.h>

namespace app::sv_animcmd
{
    extern void frame(u64, float) LINKABLE;
    extern void is_excute(u64) LINKABLE;
    extern u64 ATTACK(u64) LINKABLE;
    extern u64 EFFECT(u64) LINKABLE;
    extern u64 EFFECT_FOLLOW_FLIP_COLOR(u64) LINKABLE;
}

namespace app::lua_bind
{
    extern uint EffectModule__req_on_joint_impl(u64, u64, u64, const Vector3f*, const Vector3f*, float a6, const Vector3f*, const Vector3f*, bool, uint, int, int) LINKABLE;
}