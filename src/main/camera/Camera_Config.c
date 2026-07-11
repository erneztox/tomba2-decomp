/**
 * @brief Camera configurator: switch on DAT_800e7fe4/8, sets mode params
 * @note Original: func_8006E010 at 0x8006E010
 */
// Camera_Config



#include "tomba.h"
void FUN_8006e010(int param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_800e7fe4 == '\x03') {
    switch(DAT_800e7fe8) {
    case 0:
    case 1:
      sVar2 = 0;
      break;
    case 2:
      sVar2 = -0x80;
      break;
    case 3:
      sVar2 = -0x100;
      break;
    default:
      sVar2 = -0x180;
    }
    iVar3 = param_1->scale_y;
    iVar4 = (int)sVar2;
    if (iVar4 < iVar3) {
      param_1->scale_y = iVar3 + -8;
      bVar1 = iVar4 < iVar3 + -8;
    }
    else {
      param_1->scale_y = iVar3 + 8;
      bVar1 = iVar3 + 8 < iVar4;
    }
    if (!bVar1) {
      param_1->scale_y = iVar4;
      return;
    }
  }
  else {
    iVar3 = param_1->scale_y;
    if (iVar3 < 1) {
      param_1->scale_y = iVar3 + 8;
      if (-1 < iVar3 + 8) {
        param_1->scale_y = 0;
      }
    }
    else {
      param_1->scale_y = iVar3 + -8;
      if (iVar3 + -8 < 1) {
        param_1->scale_y = 0;
        return;
      }
    }
  }
  return;
}
