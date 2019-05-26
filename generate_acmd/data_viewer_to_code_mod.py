import sys

WRAPPED_FUNCTIONS = ['frame', 'wait', 'is_excute', 'ATTACK']

def function_type(name):
	if "Module" in name:
		return "app::lua_bind"
	else:
		return "app::sv_animcmd"
	# TODO: module_access case

def get_arg(arg_str, wrap_args=False):
	arg_str = arg_str.strip()
	
	if "=" in arg_str: # key=value
		(key, value) = arg_str.split("=", 1);
		key = key.strip()
		value = get_arg(value)
		if wrap_args:
			value = "L2CValue(" + value + ")"
		return '/*' + key + '*/ ' + value;
	
	if arg_str.islower(): # hash
		arg_str = "hash40(\"" + arg_str + "\")"
	if arg_str == "False" or arg_str == "True": # boolean
		arg_str = arg_str.replace(arg_str, arg_str.lower())
	
	if wrap_args:
		return "L2CValue(" + arg_str + ")"
	return arg_str

def get_args(args_str, wrap_args=False):
	args_str = args_str.strip()
	parsed_args = [get_arg(arg, wrap_args) for arg in args_str.split(", ")]
	parsed_str = ', '.join(parsed_args)
	if wrap_args:
		return "{ " + parsed_str + " }"
	return parsed_str
	
with open(sys.argv[1]) as f:
	lines = f.readlines()

shouldTab = False
for line in lines:
	if '}' in line:
		print('}')
		shouldTab = False
		continue
	f_name = line.split("(")[0].strip()
	if f_name == 'if':
		print("if (acmd.is_excute()) {")
		shouldTab = True
		continue
	f_type = function_type(f_name)
		
	if f_type == "app::lua_bind":
		module_name = f_name.split("_")[0]
		module_func_name = '_'.join(f_name.split("_")[2:])
		args_str = line[line.index("(")+1:line.index(")")]
		
		if shouldTab:
			print("\t"),
		print("{}::{}(acmd.module_accessor{}{});".format(module_name, module_func_name, (', ' if args_str != '' else ''), get_args(args_str)))
	elif f_type == "app::sv_animcmd":
		if f_name in WRAPPED_FUNCTIONS:
			if f_name == 'frame' or f_name == 'wait':
				arg = line.split("=")[1].split(")")[0]
				if shouldTab:
					print("\t"),
				print("acmd.{}({});".format(f_name, arg))
			elif f_name == 'ATTACK':
				args_str = line[line.index("(")+1:line.index(")")]
				
				if shouldTab:
					print("\t"),
				print("acmd.{}({});".format(f_name, get_args(args_str)))
		else:
			module_name = f_name.split("_")[0]
			module_func_name = '_'.join(f_name.split("_")[2:])
			args_str = line[line.index("(")+1:line.index(")")]
			
			if shouldTab:
				print("\t"),
			print("acmd.wrap({}, {});".format(f_name, get_args(args_str, wrap_args=True)))
