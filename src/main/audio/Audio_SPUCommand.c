/**
 * @brief Sends raw SPU command with voice parameters (ADSR, pitch, volume)
 * @note Original: func_80075E04 at 0x80075E04
 */
// Audio_SPUCommand



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
uint FUN_80075e04(uint param_1,uint param_2,u8 param_3,u8 param_4,u8 param_5,u8 param_6,
                 u8 param_7,u8 param_8)

{
  uint *puVar1;
  u8 *pbVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  u8 bVar6;
  uint local_8;
  
  bVar6 = 0xfe;
  puVar1 = (uint *)(&DAT_800be238 + _DAT_800bed78 * 0xc);
  puVar4 = (uint *)0x0;
  if ((int)_DAT_800bed78 < 0x18) {
    pbVar2 = &DAT_800be239 + _DAT_800bed78 * 0xc;
    uVar3 = _DAT_800bed78;
    uVar5 = param_2;
    do {
      if ((param_1 == pbVar2->flags) &&
         (((int)(uint)*pbVar2 < (int)uVar5 || ((*pbVar2 == uVar5 && ((u8)*puVar1 <= bVar6)))))) {
        uVar5 = (uint)*pbVar2;
        bVar6 = (u8)*puVar1;
        puVar4 = puVar1;
        local_8 = uVar3;
      }
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 0xc;
      puVar1 = puVar1 + 3;
    } while ((int)uVar3 < 0x18);
  }
  if (puVar4 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    *(u8 *)((int)puVar4 + 2) = param_3;
    *(u8 *)((int)puVar4 + 3) = param_4;
    puVar4->flags = param_5;
    *(u8 *)((int)puVar4 + 5) = param_6;
    *(u8 *)((int)puVar4 + 6) = param_7;
    *(u8 *)((int)puVar4 + 1) = (u8)param_2;
    *(u8 *)((int)puVar4 + 7) = param_8;
    *(u8 *)puVar4 = 0xff;
    uVar3 = *puVar4 & 0xffffff00 | local_8;
  }
  return uVar3;
}
