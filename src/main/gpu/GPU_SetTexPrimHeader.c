/**
 * @brief Sets up textured primitive header: code=9 (TILE), size=0x2C
 * @note Original: func_80083CA0 at 0x80083CA0
 */
// GPU_SetTexPrimHeader



#include "tomba.h"
void FUN_80083ca0(int param_1)

{
  param_1->sub_type = 9;
  param_1->sub_action = 0x2c;
  return;
}
