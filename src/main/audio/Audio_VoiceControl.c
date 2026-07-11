/**
 * @brief Audio voice controller: adjusts voice params from struct
 * @note Original: func_8008FE40 at 0x8008FE40
 */
// Audio_VoiceControl



/* WARNING: Removing unreachable block (ram,0x8008fedc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8008fe40(ushort param_1,short param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar8 = (undefined4 *)
           (*(int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe)) + param_2 * 0xb0);
  pbVar7 = (byte *)*puVar8;
  bVar1 = *pbVar7;
  *puVar8 = pbVar7 + 1;
  bVar2 = pbVar7->flags;
  *puVar8 = pbVar7 + 2;
  iVar3 = _DAT_80104c2c;
  uVar5 = (uint)pbVar7->kind | (uint)bVar1 << 0x10 | (uint)bVar2 << 8;
  uVar9 = 60000000 / uVar5;
  if (uVar5 == 0) {
    trap(0x1c00);
  }
  uVar5 = (int)*(short *)(puVar8 + 0x14) * uVar9;
  *puVar8 = pbVar7 + 3;
  puVar8[0x25] = uVar9;
  uVar9 = iVar3 * 0x3c;
  if (uVar5 * 10 < uVar9) {
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    sVar4 = (short)((uint)(iVar3 * 600) / uVar5);
    *(short *)((int)puVar8 + 0x52) = sVar4;
  }
  else {
    if (uVar9 == 0) {
      trap(0x1c00);
    }
    if (uVar9 == 0) {
      trap(0x1c00);
    }
    *(undefined2 *)((int)puVar8 + 0x52) = 0xffff;
    sVar4 = (short)((uint)((int)*(short *)(puVar8 + 0x14) * puVar8[0x25] * 10) / uVar9);
    *(short *)(puVar8 + 0x15) = sVar4;
    if ((uint)((int)*(short *)(puVar8 + 0x14) * puVar8[0x25] * 10) % uVar9 <= (uint)(iVar3 * 0x1e))
    goto LAB_8008ffe0;
    sVar4 = sVar4 + 1;
  }
  *(short *)(puVar8 + 0x15) = sVar4;
LAB_8008ffe0:
  uVar6 = FUN_80090160((int)(short)param_1,(int)param_2);
  puVar8[0x24] = uVar6;
  return;
}
