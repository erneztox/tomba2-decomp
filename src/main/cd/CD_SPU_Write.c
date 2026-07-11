/**
 * @brief CD/SPU write: writes param to g_SPU_Regs+0x184 if buffer empty or bit 1
 * @note Original: func_80098D30 at 0x80098D30
 */
// CD_SPU_Write



#include "tomba.h"
s32 FUN_80098d30(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 == 0) || ((uVar1 & 2) != 0)) {
    *(s16 *)(g_SPU_Regs + 0x184) = (s16)param_1->kind;
    DAT_800ac5ac = (s16)param_1->kind;
  }
  if ((uVar1 == 0) || ((uVar1 & 4) != 0)) {
    *(s16 *)(g_SPU_Regs + 0x186) = *(s16 *)((int)param_1 + 10);
    DAT_800ac5ae = *(s16 *)((int)param_1 + 10);
  }
  return 0;
}
