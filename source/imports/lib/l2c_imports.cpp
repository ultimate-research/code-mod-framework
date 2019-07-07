#include <switch_min.h>

#include "lib/l2c_imports.h"
#include "lib/lua_bind_hash.h"
#include "useful/useful.h"

//==================================//
//============== lib ===============//
//==================================//
int lib::lua_const(const char* str) {
	int val;
	if (lib::lua_bind_get_value(lua_bind_hash_str(str), &val))
		return val;
	else
		return -1;
}

//==================================//
//========= lib::L2CValue ==========//
//==================================//
lib::L2CValue::L2CValue() {}
lib::L2CValue::L2CValue(bool val) {
	type = L2C_bool;
	raw = val;
}
lib::L2CValue::L2CValue(int val) {
	type = L2C_integer;
	raw = val;
}
lib::L2CValue::L2CValue(u64 val) {
	type = L2C_integer;
	raw = val;
}
lib::L2CValue::L2CValue(float val) {
	type = L2C_number;
	raw_float = val;
}
lib::L2CValue::L2CValue(double val) {
	type = L2C_number;
	raw_float = val;
}
lib::L2CValue::L2CValue(const char* str) {
	type = L2C_void;
}

//==================================//
//========= lib::L2CAgent ==========//
//==================================//
void lib::L2CAgent::get_lua_stack(int index, lib::L2CValue* l2c_val) {
	asm("mov x8, %x0" : : "r"(l2c_val) : "x8" );
	lib::L2CAgent::pop_lua_stack(index);
}