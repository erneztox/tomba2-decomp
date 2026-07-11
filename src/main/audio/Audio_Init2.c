/**
 * @brief Audio init variant 2: sets up channel table at 0x80104C30
 * @note Original: func_8008DFA0 at 0x8008DFA0
 */
// Audio_Init2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8008dfa0(void)

{
  s16 uVar1;
  s32 *puVar2;
  int iVar3;
  int iVar4;
  s16 *puVar5;
  s16 *puVar6;
  int iVar7;
  
  puVar6 = (s16 *)&DAT_1f801d80;
  iVar3 = 0;
  puVar5 = &DAT_800ac400;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
  } while (iVar3 < 0x10);
  FUN_80093650(0x18);
  iVar7 = 0;
  iVar3 = -0x7fefb350;
  do {
    iVar4 = 0xf;
    puVar2 = iVar3->sprite_data;
    do {
      *puVar2 = 0;
      iVar4 = iVar4 + -1;
      puVar2 = puVar2 + -1;
    } while (-1 < iVar4);
    iVar7 = iVar7 + 1;
    iVar3 = iVar3 + 0x40;
  } while (iVar7 < 0x20);
  _DAT_80104c2c = 0x3c;
  _DAT_80104c28 = 0;
  _DAT_80104c24 = 0;
  return;
}
