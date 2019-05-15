#ifndef L2C_IMPORTS_H
#define L2C_IMPORTS_H
#include <switch.h>

namespace lib::L2CAgent
{
    extern u64 L2CAgent(u64*, u64 lua_state) LINKABLE;
    extern u64 push_lua_stack(u64* l2c_agent, u64* l2c_value) LINKABLE;
        
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
    extern u64 pop_lua_stack(u64* l2c_agent, int index) LINKABLE;
    extern u64 clear_lua_stack(u64* l2c_agent) LINKABLE;
    extern u64 sv_set_function_hash(u64* l2c_agent, void* func, u64 hash) LINKABLE;
}

#endif // L2C_IMPORTS_H