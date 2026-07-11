/**
 * @brief Entity painter behavior: entity->behavior_flags flag, branches on painter mode
 * @note Original: func_80024794 at 0x80024794
 */
// Entity_Behavior_Painter



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80024794(int param_1)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  puVar4 = _DAT_1f80014c;
  cVar1 = DAT_1f800152;
  if (param_1->behavior_flags - 6 < 2) {
    while (DAT_1f800182 = cVar1, DAT_1f800182 != '\0') {
      pbVar3 = (byte *)*puVar4;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar4 = puVar4 + 1;
      cVar1 = DAT_1f800182;
      if (((pbVar3[0xc] == 4) &&
          ((((((uVar2 = (uint)pbVar3->kind, uVar2 - 0xe < 2 || (uVar2 == 0x39)) || (uVar2 == 0x32)) ||
             ((uVar2 == 0x59 || (uVar2 == 0x4b)))) ||
            ((uVar2 == 0x4f || ((uVar2 == 0x66 || (uVar2 == 9)))))) || (uVar2 == 0x33)))) &&
         (((*pbVar3 & 1) != 0 && (pbVar3->move_mode == 1)))) {
        pbVar3->move_mode = 3;
        if ((pbVar3->kind - 0xe < 2) || (pbVar3->kind == 0x39)) {
          DAT_800bf840 = 0x84;
        }
        else {
          DAT_800bf840 = 0x85;
        }
        return 1;
      }
    }
  }
  return 0;
}
