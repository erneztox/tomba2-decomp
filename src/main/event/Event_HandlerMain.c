/**
 * @brief Event main handler: processes event queue, dispatches
 * @note Original: func_80036240 at 0x80036240
 */
// Event_HandlerMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80036240(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  u8 uVar7;
  int iVar8;
  u8 *puVar9;
  int iVar10;
  s16 sVar11;
  int local_30->kind;
  
  sVar11 = 0;
  iVar8 = 0;
  puVar9 = &DAT_800d1e68;
  iVar10 = 0;
  _g_EntityPoolFree = -0x7ff34198;
  _DAT_800bf540 = -0x7ff32198;
  _DAT_800e7e78 = -0x7ff30198;
  do {
    iVar1 = FUN_80036560(iVar8,local_30);
    iVar4 = 0;
    iVar6 = 0;
    iVar5 = iVar10;
    if (0 < iVar1) {
      do {
        iVar2 = FUN_80078894(local_30->type + iVar4);
        if (iVar2 != 0) {
          *(s16 *)(iVar5 + -0x7ff2e192) = (s16)iVar4;
          iVar5 = iVar5 + 2;
          iVar6 = iVar6 + 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    if (iVar6 != 0) {
      *(s16 *)(puVar9 + 4) = (s16)iVar6;
      *(s16 *)(puVar9 + 2) = (s16)iVar8;
      puVar9 = puVar9 + 0xc;
      iVar10 = iVar10 + 0xc;
      sVar11 = sVar11 + 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  iVar8 = 0;
  pcVar3 = &DAT_800a2be8;
  _DAT_800d1e68 = sVar11;
  do {
    if ((&DAT_800bfab4)[iVar8] != '\0') {
      uVar7 = (u8)iVar8;
      if (*pcVar3 == '\0') {
        *(u8 *)((uint)*(u8 *)(param_1 + 0x24) * 4 + _g_EntityPoolFree + 1) = uVar7;
        *(u8 *)((uint)*(u8 *)(param_1 + 0x24) * 4 + _g_EntityPoolFree + 2) =
             (&DAT_800bfab4)[iVar8];
        *(s8*)(param_1 + 0x24) = *(s8*)(param_1 + 0x24) + '\x01';
      }
      else if (*pcVar3 == '\x01') {
        *(u8 *)((uint)*(u8 *)(param_1 + 0x25) * 4 + _DAT_800bf540 + 1) = uVar7;
        *(u8 *)((uint)*(u8 *)(param_1 + 0x25) * 4 + _DAT_800bf540 + 2) =
             (&DAT_800bfab4)[iVar8];
        *(s8*)(param_1 + 0x25) = *(s8*)(param_1 + 0x25) + '\x01';
      }
      else {
        *(u8 *)((uint)*(u8 *)(param_1 + 0x26) * 4 + _DAT_800e7e78 + 1) = uVar7;
        *(u8 *)((uint)*(u8 *)(param_1 + 0x26) * 4 + _DAT_800e7e78 + 2) =
             (&DAT_800bfab4)[iVar8];
        *(s8*)(param_1 + 0x26) = *(s8*)(param_1 + 0x26) + '\x01';
      }
    }
    iVar8 = iVar8 + 1;
    pcVar3 = pcVar3 + 0xc;
  } while (iVar8 < 0x100);
  *(s8*)(param_1 + 0x22) =
       (char)((int)(*(u8 *)(param_1 + 0x24) + 1) >> 1) +
       (char)((int)((uint)*(u8 *)(param_1 + 0x25) + (uint)*(u8 *)(param_1 + 0x26) + 2) >> 1);
  return;
}
