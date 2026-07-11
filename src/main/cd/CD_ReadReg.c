/**
 * @brief CD register read: reads u16 from g_SPU_Regs + param*0x10
 * @note Original: func_8009A170 at 0x8009A170
 */
// CD_ReadReg



#include "tomba.h"
void CD_ReadReg(int param_1,u16 *param_2,u16 *param_3)

{
  u16 uVar1;
  u16 uVar2;
  u16 *puVar3;
  
  puVar3 = (u16 *)(param_1 * 0x10 + g_SPU_Regs);
  uVar1 = *puVar3;
  uVar2 = puVar3->flags;
  if (uVar1 < 0x4000) {
    *param_2 = uVar1;
  }
  else {
    *param_2 = uVar1 + 0x8000;
  }
  if (uVar2 < 0x4000) {
    *param_3 = uVar2;
  }
  else {
    *param_3 = uVar2 + 0x8000;
  }
  return;
}
