/**
 * @brief Checks collision at position offset, stores surface angle in entity[0x62]
 * @note Original: func_800419C4 at 0x800419C4
 */
// Entity_CheckCollisionAndAngle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
bool FUN_800419c4(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  iVar1 = FUN_80049250(param_1,(int)param_2,(int)param_3);
  if (iVar1 == 1) {
    FUN_80049674(param_1);
    param_1->angle_delta = _DAT_1f8001a2;
  }
  return iVar1 == 1;
}
