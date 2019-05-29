#ifndef APP_LUA_BIND_H
#define APP_LUA_BIND_H

namespace app::lua_bind {
	namespace AttackModule {
		void clear_all(u64) asm("_ZN3app8lua_bind28AttackModule__clear_all_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
	}

	namespace ControlModule {
		bool check_button_on(u64, int) asm("_ZN3app8lua_bind35ControlModule__check_button_on_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
	}  

	namespace EffectModule {
		// boma, effect, joint, pos, rot, size, random_pos, random_rot, NO_SCALE?, attr?, unkint1, unkint2
		uint req_on_joint(u64, u64, u64, const Vector3f*, const Vector3f*, float a6, const Vector3f*, const Vector3f*, bool, uint, int, int) 
			asm("_ZN3app8lua_bind31EffectModule__req_on_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40ES4_RKNS3_8Vector3fES7_fS7_S7_bjii") LINKABLE;

		void kill_kind(u64, u64, bool, bool) 
			asm("_ZN3app8lua_bind28EffectModule__kill_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ebb") LINKABLE;
	}

	namespace FighterManager {
		u64 get_fighter_information(u64, int) asm("_ZN3app8lua_bind44FighterManager__get_fighter_information_implEPNS_14FighterManagerENS_14FighterEntryIDE") LINKABLE;
	}

	namespace FighterInformation {
		bool is_operation_cpu(u64) asm("_ZN3app8lua_bind41FighterInformation__is_operation_cpu_implEPNS_18FighterInformationE") LINKABLE;
	}

	namespace HitModule {
		void set_status_all(u64, int, int) asm("_ZN3app8lua_bind30HitModule__set_status_all_implEPNS_26BattleObjectModuleAccessorENS_9HitStatusEi") LINKABLE;
	}

	namespace MotionModule {
		float frame(u64) asm("_ZN3app8lua_bind24MotionModule__frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
		u64 motion_kind(u64) asm("_ZN3app8lua_bind30MotionModule__motion_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
	}

	namespace PostureModule {
		float lr(u64) asm("_ZN3app8lua_bind22PostureModule__lr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
		float pos_x(u64) asm("_ZN3app8lua_bind25PostureModule__pos_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
		float pos_y(u64) asm("_ZN3app8lua_bind25PostureModule__pos_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
		float set_pos(u64, const Vector3f*) asm("_ZN3app8lua_bind27PostureModule__set_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
	}

	namespace StatusModule {
		u64 change_status_request_from_script(u64, int, bool) asm("_ZN3app8lua_bind52StatusModule__change_status_request_from_script_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
		int status_kind(u64) asm("_ZN3app8lua_bind30StatusModule__status_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
		int situation_kind(u64) asm("_ZN3app8lua_bind33StatusModule__situation_kind_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
	}

	namespace WorkModule {
		uint get_int(u64, int) asm("_ZN3app8lua_bind24WorkModule__get_int_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
		void inc_int(u64, int) asm("_ZN3app8lua_bind24WorkModule__inc_int_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
		uint get_param_int(u64, u64, u64) asm("_ZN3app8lua_bind30WorkModule__get_param_int_implEPNS_26BattleObjectModuleAccessorEmm") LINKABLE;
		void on_flag(u64, int) asm("_ZN3app8lua_bind24WorkModule__on_flag_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
		void off_flag(u64, int) asm("_ZN3app8lua_bind25WorkModule__off_flag_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
	}
}

#endif // APP_LUA_BIND_H
