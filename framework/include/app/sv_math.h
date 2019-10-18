#ifndef APP_SV_MATH
#define APP_SV_MATH

#include <switch_min.h>

namespace app::sv_math {
    extern float vec2_angle(float, float, float, float) asm("_ZN3app7sv_math10vec2_angleEffff") LINKABLE;
    extern Vector3f* vec3_cross(float, float, float, float, float, float) asm("_ZN3app7sv_math10vec3_crossEffffff") LINKABLE;
    extern float vec2_length(float, float) asm("_ZN3app7sv_math11vec2_lengthEff") LINKABLE;
    extern float vec3_length(float, float, float) asm("_ZN3app7sv_math11vec3_lengthEfff") LINKABLE;
    extern float bezier_curve(float, float, float, float, float) asm("_ZN3app7sv_math12bezier_curveEfffff") LINKABLE;
    extern bool vec2_is_zero(float, float) asm("_ZN3app7sv_math12vec2_is_zeroEff") LINKABLE;
    extern bool vec3_is_zero(float, float, float) asm("_ZN3app7sv_math12vec3_is_zeroEfff") LINKABLE;
    extern float vec2_distance(float, float, float, float) asm("_ZN3app7sv_math13vec2_distanceEffff") LINKABLE;
    extern float vec3_distance(float, float, float, float, float, float) asm("_ZN3app7sv_math13vec3_distanceEffffff") LINKABLE;
    extern float vec2_normalize(float, float) asm("_ZN3app7sv_math14vec2_normalizeEff") LINKABLE;
    extern float vec3_normalize(float, float, float) asm("_ZN3app7sv_math14vec3_normalizeEfff") LINKABLE;
    extern float vec2_reflection(float, float, float, float) asm("_ZN3app7sv_math15vec2_reflectionEffff") LINKABLE;
    extern float vec2_length_square(float, float) asm("_ZN3app7sv_math18vec2_length_squareEff") LINKABLE;
    extern float vec3_between_angle(float, float, float, float, float, float, float, float, float) asm("_ZN3app7sv_math18vec3_between_angleEfffffffff") LINKABLE;
    extern float vec3_length_square(float, float, float) asm("_ZN3app7sv_math18vec3_length_squareEfff") LINKABLE;
    extern float powf(float, float) asm("_ZN3app7sv_math4powfEff") LINKABLE;
    extern int rand(u64,int) asm("_ZN3app7sv_math4randEN3phx6Hash40Ei") LINKABLE;
    extern float randf(u64,float) asm("_ZN3app7sv_math5randfEN3phx6Hash40Ef") LINKABLE;
    extern bool is_zero(float) asm("_ZN3app7sv_math7is_zeroEf") LINKABLE;
    extern float vec2_dot(float, float, float, float) asm("_ZN3app7sv_math8vec2_dotEffff") LINKABLE;
    extern float vec2_rot(float, float, float) asm("_ZN3app7sv_math8vec2_rotEfff") LINKABLE;
    extern float vec3_dot(float, float, float, float, float, float) asm("_ZN3app7sv_math8vec3_dotEffffff") LINKABLE;
    extern float vec3_rot(float, float, float, float, float, float) asm("_ZN3app7sv_math8vec3_rotEffffff") LINKABLE;
    extern float vec3_lerp(float, float, float, float, float, float, float) asm("_ZN3app7sv_math9vec3_lerpEfffffff") LINKABLE;
}

#endif // APP_SV_MATH