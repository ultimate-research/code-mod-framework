#include <switch.h>

#define app_sv_animcmd_frame _ZN3app10sv_animcmd5frameEP9lua_Statef
extern void _ZN3app10sv_animcmd5frameEP9lua_Statef(__int64_t, float) LINKABLE;

#define app_sv_animcmd_is_excute _ZN3app10sv_animcmd9is_excuteEP9lua_State
extern void _ZN3app10sv_animcmd9is_excuteEP9lua_State(__int64_t) LINKABLE;

// app::sv::animcmd::ATTACK(lua_State* a1)
//__int64_t (*app_sv_animcmd_ATTACK)(__int64_t);
#define app_sv_animcmd_ATTACK _ZN3app10sv_animcmd6ATTACKEP9lua_State
extern uint64_t _ZN3app10sv_animcmd6ATTACKEP9lua_State(__int64_t unk1) LINKABLE;

// app::sv::animcmd::EFFECT(lua_State* a1)
//__int64_t (*app_sv_animcmd_EFFECT)(__int64_t);
#define app_sv_animcmd_EFFECT _ZN3app10sv_animcmd6EFFECTEP9lua_State
extern uint64_t _ZN3app10sv_animcmd6EFFECTEP9lua_State(__int64_t unk1) LINKABLE;

// app::sv::animcmd::EFFECT_FOLLOW_FLIP_COLOR(lua_State* a1)
//__int64_t (*app_sv_animcmd_EFFECT_FOLLOW_FLIP_COLOR)(__int64_t);
#define app_sv_animcmd_EFFECT_FOLLOW_FLIP_COLOR _ZN3app10sv_animcmd24EFFECT_FOLLOW_FLIP_COLOREP9lua_State
extern uint64_t _ZN3app10sv_animcmd24EFFECT_FOLLOW_FLIP_COLOREP9lua_State(__int64_t) LINKABLE;


/* lua_bind */

#define EffectModule_req_on_joint _ZN3app8lua_bind31EffectModule__req_on_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_RKNS3_8Vector3fES7_fS7_S7_bjii
extern uint _ZN3app8lua_bind31EffectModule__req_on_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_RKNS3_8Vector3fES7_fS7_S7_bjii(u64, u64, u64, const Vector3f*, const Vector3f*, float a6, const Vector3f*, const Vector3f*, bool, uint, int, int) LINKABLE;
