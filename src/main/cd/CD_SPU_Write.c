/**
 * @brief CD/SPU write: writes param to DAT_800ac604+0x184 if buffer empty or bit 1
 * @note Original: func_80098D30 at 0x80098D30
 */
// CD_SPU_Write



#include "tomba.h"
undefined4 FUN_80098d30(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 == 0) || ((uVar1 & 2) != 0)) {
    *(short *)(DAT_800ac604 + 0x184) = (short)param_1->kind;
    DAT_800ac5ac = (undefined2)param_1->kind;
  }
  if ((uVar1 == 0) || ((uVar1 & 4) != 0)) {
    *(undefined2 *)(DAT_800ac604 + 0x186) = *(undefined2 *)((int)param_1 + 10);
    DAT_800ac5ae = *(undefined2 *)((int)param_1 + 10);
  }
  return 0;
}
