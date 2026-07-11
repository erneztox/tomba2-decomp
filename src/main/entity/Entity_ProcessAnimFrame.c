/**
 * @brief Processes an animation frame and submits quads to the OT.
 *        Extracts R,G,B colors from a 32-bit bitfield in the animation data.
 *        Handles UV coordinates, texture page selection, and GTE-projected positions.
 * @note Original: func_80027A4C at 0x80027A4C
 */
// Entity_ProcessAnimFrame

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
int * Entity_ProcessAnimFrame(int *param_1,s32 param_2)

{
  int iVar1;
  int iVar2;
  u8 bVar3;
  u8 bVar4;
  s8 cVar5;
  u8 bVar6;
  s8 cVar7;
  s16 sVar8;
  int iVar9;
  uint *puVar10;
  s16 *psVar11;
  uint uVar12;
  uint uVar13;

  setCopReg(2,0x4000,_DAT_1f800090);
  psVar11 = (s16 *)((int)_g_OT_Buffer + 0x1a);
  do {
    uVar12 = param_1->flags;
    bVar3 = (u8)uVar12 & 0xf8;
    bVar6 = (u8)(uVar12 >> 8);
    bVar4 = bVar6 & 0xf8;
    uVar13 = uVar12 >> 0x10;
    cVar7 = ((u8)uVar12 & 7) * '\b';
    cVar5 = (bVar6 & 7) * '\b';
    if ((uVar13 & 0x2000) == 0) {
      psVar11->flags = bVar3 + 1;
      *(u8 *)(psVar11 + -7) = bVar3 + 1;
      cVar7 = bVar3 + cVar7 + '\a';
    }
    else {
      cVar7 = bVar3 + cVar7 + '\x06';
      psVar11->flags = cVar7;
      *(s8*)(psVar11 + -7) = cVar7;
      cVar7 = bVar3 + 1;
    }
    psVar11->behavior_state = cVar7;
    *(s8*)(psVar11 + -3) = cVar7;
    if ((uVar13 & 0x1000) == 0) {
      *(u8 *)((int)psVar11 + -5) = bVar4 + 1;
      *(u8 *)((int)psVar11 + -0xd) = bVar4 + 1;
      cVar7 = bVar4 + cVar5 + '\a';
    }
    else {
      cVar7 = bVar4 + cVar5 + '\a';
      *(s8*)((int)psVar11 + -5) = cVar7;
      *(s8*)((int)psVar11 + -0xd) = cVar7;
      cVar7 = bVar4 + 1;
    }
    *(s8*)((int)psVar11 + 0xb) = cVar7;
    *(s8*)((int)psVar11 + 3) = cVar7;
    uVar12 = uVar13 & 0xff;
    // Pack R,G,B into PSX color format: (cmd_byte << 24) | (B << 16) | (G << 8) | R
    *(uint *)(psVar11 + -0xb) =
         (((uVar13 & 1) << 1 | 0x2c) << 8 | uVar12) << 0x10 | uVar12 << 8 | uVar12;
    setCopReg(2,psVar11,_g_OT_Buffer->flags);
    copFunction(2,0x780010);
    uVar12 = getCopReg(2,0x16);
    _g_OT_Buffer->flags = uVar12;
    psVar11[-2] = (u16)((uint)param_2 >> 0x10) | (u16)((uVar13 & 6) << 4);
    psVar11[-6] = (s16)param_2 + (s16)((uVar13 & 0xf00) >> 2);
    iVar9 = *param_1;
    iVar1 = (char)((uint)iVar9 >> 8) * _g_GTE_Work84;
    iVar2 = (char)((uint)iVar9 >> 0x10) * _DAT_1f800088;
    sVar8 = _g_GTE_Work8C + (s16)((uint)((char)*param_1 * _g_GTE_Work84) >> 0x10);
    psVar11[-1] = sVar8;
    psVar11[-9] = sVar8;
    iVar9 = (iVar9 >> 0x18) * _DAT_1f800088;
    sVar8 = _g_GTE_Work8C + (s16)((uint)iVar1 >> 0x10);
    psVar11->sub_type = sVar8;
    psVar11[-5] = sVar8;
    sVar8 = _DAT_1f80008e + (s16)((uint)iVar2 >> 0x10);
    psVar11[-4] = sVar8;
    psVar11[-8] = sVar8;
    sVar8 = _DAT_1f80008e + (s16)((uint)iVar9 >> 0x10);
    psVar11->state = sVar8;
    *psVar11 = sVar8;
    puVar10 = (uint *)(_g_EntityBuffer + _g_GTE_Result[0] * 4);
    *_g_OT_Buffer = *puVar10 | 0x9000000;
    *puVar10 = (uint)_g_OT_Buffer;
    psVar11 = psVar11 + 0x14;
    _g_OT_Buffer = _g_OT_Buffer + 10;
    param_1 = param_1 + 2;
  } while ((uVar13 & 0xc000) == 0);
  if ((uVar13 & 0x4000) != 0) {
    param_1 = (int *)0x0;
  }
  return param_1;
}
