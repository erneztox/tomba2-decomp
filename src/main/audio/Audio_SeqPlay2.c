/**
 * @brief Audio sequence player variant 2: manages playback state
 * @note Original: func_80075A80 at 0x80075A80
 */
// Audio_SeqPlay2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80075a80(void)

{
  s8 cVar1;
  u8 uVar2;
  u8 uVar3;
  u8 uVar4;
  u8 uVar5;
  u8 uVar6;
  s16 sVar7;
  u8 bVar8;
  u8 *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  s8 acStack_38 [24];
  
  FUN_800998e4(acStack_38);
  pcVar10 = &DAT_800be238 + _DAT_800bed78 * 0xc;
  puVar9 = &DAT_800be239 + _DAT_800bed78 * 0xc;
  if ((int)_DAT_800bed78 < 0x18) {
    iVar12 = _DAT_800bed78 << 0x10;
    uVar11 = _DAT_800bed78;
    do {
      cVar1 = *pcVar10;
      if (cVar1 == '\0') {
LAB_80075bf8:
        if ((acStack_38[uVar11] == '\0') || (acStack_38[uVar11] == '\x03')) {
          *puVar9 = 0;
        }
      }
      else {
        if (cVar1 != -1) {
          if (puVar9->sub_action == '\x04') {
            *pcVar10 = cVar1 + -1;
            if (cVar1 == '\x01') {
              DAT_800be358 = DAT_800be358 | 1 << (uVar11 & 0x1f);
              puVar9->kind = 0;
              puVar9->flags = 0;
            }
          }
          else {
            *pcVar10 = cVar1 + -1;
          }
          goto LAB_80075bf8;
        }
        if ((puVar9->kind & 0x80) == 0) {
          uVar2 = puVar9->sub_type;
          uVar3 = puVar9->flags;
          bVar8 = puVar9->kind;
          uVar4 = puVar9->state;
          uVar5 = puVar9->behavior_state;
          uVar6 = puVar9->action_state;
          sVar7 = _DAT_800bed84;
        }
        else {
          uVar2 = puVar9->sub_type;
          uVar3 = puVar9->flags;
          uVar4 = puVar9->state;
          uVar5 = puVar9->behavior_state;
          uVar6 = puVar9->action_state;
          bVar8 = puVar9->kind & 0xf;
          sVar7 = DAT_800a4f7e;
        }
        FUN_80092660(iVar12 >> 0x10,(int)sVar7,uVar3,bVar8,uVar2,uVar4,uVar5,uVar6);
        DAT_800be358 = DAT_800be358 & ~(1 << (uVar11 & 0x1f));
        *pcVar10 = *pcVar10 + -1;
      }
      iVar12 = iVar12 + 0x10000;
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 0xc;
      pcVar10 = pcVar10 + 0xc;
    } while ((int)uVar11 < 0x18);
  }
  if (DAT_800be358 != 0) {
    FUN_80098f90(0);
    DAT_800be358 = 0;
  }
  FUN_80075824(&DAT_800be1f8);
  FUN_80099490(&DAT_800be1f8);
  DAT_800be1f8 = 0;
  if ((_DAT_800bed80 != -1) &&
     (sVar7 = FUN_8008e0c0((int)*(s16 *)(&DAT_800be368 + _DAT_800bed80 * 8),0), sVar7 == 0)) {
    if (DAT_800be22a == '\0') {
      FUN_80074e48(0);
    }
    else {
      _DAT_800bed80 = 0;
      FUN_80074bf8();
      DAT_800be22a = '\0';
    }
  }
  return;
}
