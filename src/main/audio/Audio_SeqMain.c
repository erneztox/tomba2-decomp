/**
 * @brief Audio sequence main: manages full SEQ playback loop
 * @note Original: func_80090210 at 0x80090210
 */
// Audio_SeqMain



/* WARNING: Removing unreachable block (ram,0x800903b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80090210(u16 param_1,u8 param_2,char *param_3)

{
  s8 cVar1;
  s8 cVar2;
  u8 bVar3;
  u8 bVar4;
  u8 uVar5;
  s16 sVar6;
  uint uVar7;
  u8 *puVar8;
  s32 uVar9;
  int iVar10;
  u8 *pbVar11;
  s32 *puVar12;
  uint uVar13;
  s32 *puVar14;
  
  iVar10 = 0;
  puVar14 = *(s32 **)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe));
  *(u8 *)((int)puVar14 + 0x26) = param_2;
  *(s16 *)(puVar14 + 0x14) = 0;
  puVar14->flags = 0;
  *(u8 *)((int)puVar14 + 0x19) = 0;
  *(u8 *)((int)puVar14 + 0x1e) = 0;
  *(u8 *)((int)puVar14 + 0x1a) = 0;
  *(u8 *)((int)puVar14 + 0x1b) = 0;
  *(u8 *)((int)puVar14 + 0x1f) = 0;
  *(u8 *)((int)puVar14 + 0x17) = 0;
  puVar14[0x21] = 0;
  puVar14[0x22] = 0;
  puVar14[0x23] = 0;
  *(s16 *)((int)puVar14 + 0x56) = 0;
  *(u8 *)((int)puVar14 + 0x21) = 0;
  puVar14->flags = 1;
  puVar14->flags = 0;
  puVar14[0x24] = 0;
  puVar14->flags = 0;
  *(u8 *)((int)puVar14 + 0x1d) = 0;
  *(u8 *)((int)puVar14 + 0x15) = 0;
  *(u8 *)((int)puVar14 + 0x16) = 0;
  *(s16 *)(puVar14 + 0x20) = 0;
  puVar14->flags = 0;
  *(u8 *)((int)puVar14 + 0x25) = 0;
  puVar12 = puVar14;
  do {
    *(s8*)((int)puVar14 + iVar10 + 0x37) = (char)iVar10;
    *(u8 *)((int)puVar14 + iVar10 + 0x27) = 0x40;
    *(s16 *)(puVar12 + 0x18) = 0x7f;
    iVar10 = iVar10 + 1;
    puVar12 = (s32 *)((int)puVar12 + 2);
  } while (iVar10 < 0x10);
  *(s16 *)((int)puVar14 + 0x52) = 1;
  *puVar14 = param_3;
  if ((*param_3 != 'S') && (*param_3 != 'p')) {
    FUN_8009a730(s_This_is_an_old_SEQ_Data_Format__8001c628);
    return 0;
  }
  *puVar14 = param_3 + 7;
  cVar1 = param_3->flags;
  *puVar14 = param_3 + 8;
  if (cVar1 != '\x01') {
    FUN_8009a730(s_This_is_not_SEQ_Data__8001c610);
    return 0xffffffff;
  }
  cVar1 = param_3->flags;
  *puVar14 = param_3 + 9;
  cVar2 = param_3->flags;
  *puVar14 = param_3 + 10;
  pbVar11 = (u8 *)*puVar14;
  *(u16 *)(puVar14 + 0x14) = CONCAT11(cVar1,cVar2);
  bVar3 = *pbVar11;
  *puVar14 = pbVar11 + 1;
  bVar4 = pbVar11->flags;
  *puVar14 = pbVar11 + 2;
  uVar7 = (uint)pbVar11->flags | (uint)bVar3 << 0x10 | (uint)bVar4 << 8;
  if (uVar7 == 0) {
    trap(0x1c00);
  }
  *puVar14 = pbVar11 + 3;
  puVar14[0x23] = uVar7;
  if (uVar7 >> 1 < 60000000U % uVar7) {
    puVar14[0x23] = 60000000 / uVar7 + 1;
  }
  else {
    puVar14[0x23] = 60000000 / uVar7;
  }
  puVar8 = (u8 *)*puVar14;
  puVar14[0x25] = puVar14[0x23];
  uVar5 = *puVar8;
  *puVar14 = puVar8 + 1;
  puVar14->flags = uVar5;
  uVar5 = puVar8->flags;
  *puVar14 = puVar8 + 2;
  *(u8 *)((int)puVar14 + 0x25) = uVar5;
  uVar9 = FUN_80090160((int)(s16)param_1,0);
  uVar7 = (int)*(s16 *)(puVar14 + 0x14) * puVar14[0x23];
  puVar14->flags = *puVar14;
  iVar10 = _DAT_80104c2c;
  puVar14[0x21] = uVar9;
  puVar14[0x24] = uVar9;
  puVar14->flags = 0;
  puVar14->flags = *puVar14;
  puVar14->flags = *puVar14;
  uVar13 = iVar10 * 0x3c;
  if (uVar7 * 10 < uVar13) {
    if (uVar7 == 0) {
      trap(0x1c00);
    }
    sVar6 = (s16)((uint)(iVar10 * 600) / uVar7);
    *(s16 *)((int)puVar14 + 0x52) = sVar6;
  }
  else {
    if (uVar13 == 0) {
      trap(0x1c00);
    }
    if (uVar13 == 0) {
      trap(0x1c00);
    }
    *(s16 *)((int)puVar14 + 0x52) = 0xffff;
    sVar6 = (s16)((uint)((int)*(s16 *)(puVar14 + 0x14) * puVar14[0x23] * 10) / uVar13);
    puVar14->flags = sVar6;
    if ((uint)((int)*(s16 *)(puVar14 + 0x14) * puVar14[0x23] * 10) % uVar13 <=
        (uint)(iVar10 * 0x1e)) goto LAB_80090538;
    sVar6 = sVar6 + 1;
  }
  puVar14->flags = sVar6;
LAB_80090538:
  *(s16 *)((int)puVar14 + 0x56) = puVar14->flags;
  return 0;
}
