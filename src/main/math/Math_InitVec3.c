/**
 * @brief Initializes 3D vector: zeros XY, sets Z=0x1000 (default scale)
 * @note Original: func_8007B2AC at 0x8007B2AC
 */
// Math_InitVec3



#include "tomba.h"
void Math_InitVec3(s32 *param_1)

{
  *param_1 = 0;
  param_1->flags = 0;
  *(s16 *)(param_1 + 3) = 0x1000;
  return;
}
