#include <switch.h>

#include "l2c.h"
#include "lua/lua.h"

// lib::L2CAgent::L2CAgent(L2CAgent*, lua_State *)
//__int64_t (*lib_L2CAgent)(__int64_t*, __int64_t);
#define lib_L2CAgent _ZN3lib8L2CAgentC2EP9lua_State
extern uint64_t _ZN3lib8L2CAgentC2EP9lua_State(L2CAgent*, lua_State*) LINKABLE;

// L2CAgent *__fastcall lib::L2CAgent::push_lua_stack(L2CAgent *result, const lib::L2CValue *a2)
//__int64_t (*lib_L2CAgent_push_lua_stack)(__int64_t, const __int64_t*);
#define lib_L2CAgent_push_lua_stack _ZN3lib8L2CAgent14push_lua_stackERKNS_8L2CValueE
extern uint64_t _ZN3lib8L2CAgent14push_lua_stackERKNS_8L2CValueE(L2CAgent*, const L2CValue*) LINKABLE;

// pop_lua_stack
// Notes: 
// Actually takes three arguments, but the third is given through X8 due to how 
// AArch64 treats struct pointers that are used as pass by reference to get the value.
// Thus, my current solution is to use inline ASM before using this to pass the 
// last arg. This is done using asm("mov x8, %x0" : : "r"(&popped) : "x8" );, where
// popped is an L2CValue that will be populated by the function.
// FURTHERMORE, this function does NOT actually pop the stack, it only returns the value at the
// position indicated by the second argument.
// This index is either positive, meaning absolute position in the stack, or negative,
// which is more traditional, i.e. -1 is the top of the stack.
//__int64_t (*lib_L2CAgent_pop_lua_stack)(__int64_t, int);
#define lib_L2CAgent_pop_lua_stack _ZN3lib8L2CAgent13pop_lua_stackEi
extern uint64_t _ZN3lib8L2CAgent13pop_lua_stackEi(L2CAgent*, int) LINKABLE;

// L2CAgent *__fastcall lib::L2CAgent::clear_lua_stack(L2CAgent *result)
// __int64_t (*lib_L2CAgent_clear_lua_stack)(__int64_t);
#define lib_L2CAgent_clear_lua_stack _ZN3lib8L2CAgent15clear_lua_stackEv
extern uint64_t _ZN3lib8L2CAgent15clear_lua_stackEv(L2CAgent*) LINKABLE;

#define lib_L2CAgent_sv_set_function_hash _ZN3lib8L2CAgent20sv_set_function_hashEPvN3phx6Hash40E
extern uint64_t _ZN3lib8L2CAgent20sv_set_function_hashEPvN3phx6Hash40E(__int64_t, void*, __int64_t) LINKABLE;

#define lib_L2CValue_int _ZN3lib8L2CValueC1Ei
extern u64 _ZN3lib8L2CValueC1Ei(u64*, int) LINKABLE;