#ifndef LUA_HELPER_H
#define LUA_HELPER_H
#include <switch.h>
#include "l2c_imports.hpp"

void get_lua_stack(u64* l2c_agent, int index, u64* l2c_val) {
    asm("mov x8, %x0" : : "r"(l2c_val) : "x8" );
    lib::L2CAgent::pop_lua_stack(l2c_agent, index);
}

#endif // LUA_HELPER_H
