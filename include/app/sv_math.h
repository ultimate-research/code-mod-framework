#ifndef APP_SV_MATH
#define APP_SV_MATH

#include "types.h"
#include "../useful/useful.h"

namespace app::sv_math {
   float vec2_angle(float, float, float, float) asm("_ZN3app7sv_math10vec2_angleEffff");
   Vector3f* vec3_cross(float, float, float, float, float, float) asm("_ZN3app7sv_math10vec3_crossEffffff");
   float vec2_length(float, float) asm("_ZN3app7sv_math11vec2_lengthEff");
   float vec3_length(float, float, float) asm("_ZN3app7sv_math11vec3_lengthEfff");
   float bezier_curve(float, float, float, float, float) asm("_ZN3app7sv_math12bezier_curveEfffff");
   bool vec2_is_zero(float, float) asm("_ZN3app7sv_math12vec2_is_zeroEff");
   bool vec3_is_zero(float, float, float) asm("_ZN3app7sv_math12vec3_is_zeroEfff");
   float vec2_distance(float, float, float, float) asm("_ZN3app7sv_math13vec2_distanceEffff");
   float vec3_distance(float, float, float, float, float, float) asm("_ZN3app7sv_math13vec3_distanceEffffff");
   float vec2_normalize(float, float) asm("_ZN3app7sv_math14vec2_normalizeEff");
   float vec3_normalize(float, float, float) asm("_ZN3app7sv_math14vec3_normalizeEfff");
   float vec2_reflection(float, float, float, float) asm("_ZN3app7sv_math15vec2_reflectionEffff");
   float vec2_length_square(float, float) asm("_ZN3app7sv_math18vec2_length_squareEff");
   float vec3_between_angle(float, float, float, float, float, float, float, float, float) asm("_ZN3app7sv_math18vec3_between_angleEfffffffff");
   float vec3_length_square(float, float, float) asm("_ZN3app7sv_math18vec3_length_squareEfff");
   float powf(float, float) asm("_ZN3app7sv_math4powfEff");
   int rand(u64,int) asm("_ZN3app7sv_math4randEN3phx6Hash40Ei");
   float randf(u64,float) asm("_ZN3app7sv_math5randfEN3phx6Hash40Ef");
   bool is_zero(float) asm("_ZN3app7sv_math7is_zeroEf");
   float vec2_dot(float, float, float, float) asm("_ZN3app7sv_math8vec2_dotEffff");
   float vec2_rot(float, float, float) asm("_ZN3app7sv_math8vec2_rotEfff");
   float vec3_dot(float, float, float, float, float, float) asm("_ZN3app7sv_math8vec3_dotEffffff");
   float vec3_rot(float, float, float, float, float, float) asm("_ZN3app7sv_math8vec3_rotEffffff");
   float vec3_lerp(float, float, float, float, float, float, float) asm("_ZN3app7sv_math9vec3_lerpEfffffff");
}

#endif // APP_SV_MATH