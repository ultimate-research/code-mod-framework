#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace AreaModule {
        u64 force_update(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29AreaModule__force_update_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_auto_layer_update(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind38AreaModule__set_auto_layer_update_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 clean(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind22AreaModule__clean_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_layer(app::BattleObjectModuleAccessor *, int,int) asm("_ZN3app8lua_bind26AreaModule__set_layer_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 layer(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind22AreaModule__layer_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_whole(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind26AreaModule__set_whole_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 get_whole(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26AreaModule__get_whole_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_group(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind26AreaModule__get_group_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 area_instance_size(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35AreaModule__area_instance_size_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 enable_area(app::BattleObjectModuleAccessor *, int,bool,int) asm("_ZN3app8lua_bind28AreaModule__enable_area_implEPNS_26BattleObjectModuleAccessorEibi") LINKABLE;
        bool is_enable_area(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind31AreaModule__is_enable_area_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 reset_area(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind27AreaModule__reset_area_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_area_target_group_mask(app::BattleObjectModuleAccessor *, int,unsigned int) asm("_ZN3app8lua_bind43AreaModule__set_area_target_group_mask_implEPNS_26BattleObjectModuleAccessorEij") LINKABLE;
        u64 set_area_target_local_group_mask(app::BattleObjectModuleAccessor *, int,unsigned int) asm("_ZN3app8lua_bind49AreaModule__set_area_target_local_group_mask_implEPNS_26BattleObjectModuleAccessorEij") LINKABLE;
        u64 set_area_shape_aabb(app::BattleObjectModuleAccessor *, int,const Vector2f*,const Vector2f*) asm("_ZN3app8lua_bind36AreaModule__set_area_shape_aabb_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector2fES6_") LINKABLE;
        u64 set_area_shape_circle(app::BattleObjectModuleAccessor *, int,const Vector2f*,float) asm("_ZN3app8lua_bind38AreaModule__set_area_shape_circle_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector2fEf") LINKABLE;
        u64 set_area_shape_type(app::BattleObjectModuleAccessor *, int,unsigned char) asm("_ZN3app8lua_bind36AreaModule__set_area_shape_type_implEPNS_26BattleObjectModuleAccessorEih") LINKABLE;
        u64 set_center_x0(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind30AreaModule__set_center_x0_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 get_area_id(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind28AreaModule__get_area_id_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        bool is_exist_area_instance(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind39AreaModule__is_exist_area_instance_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_area_index_from_id(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind39AreaModule__get_area_index_from_id_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 get_area_contact_count(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind39AreaModule__get_area_contact_count_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_area_contact_log(app::BattleObjectModuleAccessor *, int,int) asm("_ZN3app8lua_bind37AreaModule__get_area_contact_log_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 get_area_contact_target_id(app::BattleObjectModuleAccessor *, int,int) asm("_ZN3app8lua_bind43AreaModule__get_area_contact_target_id_implEPNS_26BattleObjectModuleAccessorEii") LINKABLE;
        u64 erase_wind(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind27AreaModule__erase_wind_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 add_wind_area_2nd(app::BattleObjectModuleAccessor *, int,float,float,float,float,const Vector2f*,const Vector2f*,int) asm("_ZN3app8lua_bind34AreaModule__add_wind_area_2nd_implEPNS_26BattleObjectModuleAccessorEiffffRKN3phx8Vector2fES6_i") LINKABLE;
        u64 add_wind_area_2nd_rad(app::BattleObjectModuleAccessor *, int,float,float,float,float,const Vector2f*,float,int) asm("_ZN3app8lua_bind38AreaModule__add_wind_area_2nd_rad_implEPNS_26BattleObjectModuleAccessorEiffffRKN3phx8Vector2fEfi") LINKABLE;
        u64 sleep(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind22AreaModule__sleep_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        bool is_sleep(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25AreaModule__is_sleep_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_water(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25AreaModule__is_water_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_water_task_id(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34AreaModule__get_water_task_id_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_water_surface_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36AreaModule__get_water_surface_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 test_water(app::BattleObjectModuleAccessor *, const Vector3f*,float &) asm("_ZN3app8lua_bind27AreaModule__test_water_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fERf") LINKABLE;
    }
}
