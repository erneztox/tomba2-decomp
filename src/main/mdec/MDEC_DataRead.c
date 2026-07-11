/**
 * @brief MDEC data reader: reads bitstream from entity[0x3C] data
 * @note Original: func_800870B4 at 0x800870B4
 */
// MDEC_DataRead



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
uint FUN_800870b4(int param_1,byte param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  
  uVar6 = 0x88;
  if (((int)(uint)**(byte **)(param_1 + 0x3c) >> 4 == 8) && (8 < *(byte *)(param_1 + 0x44))) {
    uVar6 = 0x22;
  }
  do {
  } while ((*(ushort *)(DAT_800abe9c + 4) & 2) == 0);
  FUN_80089620(400);
  bVar1 = *DAT_800abe9c;
  uVar3 = (uint)bVar1;
  if ((*(char *)(param_1 + 0x44) == '\0') && ((int)uVar3 >> 4 == 8)) {
    pbVar2 = DAT_800abe9c;
    pbVar2[0xe] = 0x22;
    pbVar2[0xf] = 0;
  }
  else {
    DAT_800abe9c->anim_timer = uVar6;
  }
  uVar4 = *DAT_800abe98;
  while( true ) {
    if ((uVar4 & 0x80) != 0) {
      if ((*(char *)(param_1 + 0xe8) != '\b') && (DAT_800abe7c == 2)) {
        FUN_80089620(0x3c);
        do {
          iVar5 = FUN_80089640();
        } while (iVar5 == 0);
      }
      *DAT_800abe9c = param_2;
      pbVar2 = DAT_800abe9c;
      if ((DAT_800abe7c == 3) && (uVar3 == 0x80)) {
        *DAT_800abe98 = 0xffffff7f;
        *(ushort *)(pbVar2 + 10) = *(ushort *)(pbVar2 + 10) | 0x10;
      }
      *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + '\x01';
      if (*(char *)(param_1 + 0x44) != -1) {
        *(byte *)(param_1->sprite_data + (uint)*(byte *)(param_1 + 0x44)) = bVar1;
      }
      *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + '\x01';
      return uVar3;
    }
    uVar4 = (uint)_DAT_1f801120;
    if (uVar4 < _DAT_801026e0) {
      if (_DAT_1f801128 == 0) {
        uVar4 = uVar4 + 0x10000;
      }
      else {
        uVar4 = _DAT_1f801128 + uVar4;
      }
    }
    uVar4 = uVar4 - _DAT_801026e0;
    if ((_DAT_1f801124 & 0x200) == 0) {
      uVar4 = uVar4 >> 3;
    }
    if (_DAT_801026e4 <= uVar4) break;
    uVar4 = *DAT_800abe98;
  }
  return 0xfffffffe;
}
