/**
 * @brief Submits a textured quad to the ordering table (OT) with 3D->2D GTE projection.
 *        Uses pre-computed GTE matrix data. param_2 is a color/CLUT base value.
 *        param_4 is a per-vertex color modulation (brightness offset).
 * @note Original: func_80027768 at 0x80027768
 */
// Entity_SubmitQuadToOT

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_SubmitQuadToOT(uint *param_1,int param_2,s16 param_3,s8 param_4)

{
  s32 in_zero;
  s32 in_at;
  u8 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  s32 unaff_s4;
  s32 unaff_s5;
  s32 unaff_s6;
  int local_28;
  s32 local_24;
  int local_20;
  s32 local_1c;
  int local_18;
  s32 local_14;
  int local_10;
  s32 local_c;
  int local_4;

  iVar3 = (int)param_3;
  puVar5 = param_1 + 6;
  puVar4 = _g_OT_Buffer + 10;
  puVar6 = param_1;
  do {
    uVar8 = puVar5[-5];
    local_28 = (uint)CONCAT21((s16)(((uint)*(u8 *)((int)puVar5 + 6) << 0x18) >> 0x10),
                              (char)puVar5->flags) << 8;
    local_24 = CONCAT22(local_24._2_2_,(s16)(((uint)*(u8 *)((int)puVar5 + -9) << 0x18) >> 0x10))
    ;
    local_20 = (uint)CONCAT21((u16)*(u8 *)((int)puVar5 + 7) << 8,
                              *(u8 *)((int)puVar5 + 5)) << 8;
    local_1c = (uint)CONCAT21(local_1c._2_2_,*(u8 *)((int)puVar5 + -5)) << 8;
    local_18 = (uint)CONCAT21((u16)*(u8 *)((int)puVar5 + 10) << 8,(char)puVar5->kind) << 8;
    local_14 = (uint)CONCAT21(local_14._2_2_,*(u8 *)((int)puVar5 + -1)) << 8;
    setCopReg(2,in_zero,local_28);
    setCopReg(2,in_at,local_24);
    setCopReg(2,&local_18,local_20);
    setCopReg(2,&local_20,local_1c);
    setCopReg(2,param_1,local_18);
    setCopReg(2,param_2 * 0x400000,local_14);
    local_10 = (uint)CONCAT21((u16)*(u8 *)((int)puVar5 + 0xb) << 8,
                              *(u8 *)((int)puVar5 + 9)) << 8;
    local_c = (uint)CONCAT21(local_c._2_2_,*(u8 *)((int)puVar5 + 3)) << 8;
    copFunction(2,0x280030);
    iVar7 = getCopControlWord(2,0xf800);
    if (-1 < iVar7) {
      uVar2 = getCopReg(2,0xc);
      _g_OT_Buffer->kind = uVar2;
      uVar2 = getCopReg(2,0xd);
      _g_OT_Buffer->behavior_state = uVar2;
      uVar2 = getCopReg(2,0xe);
      _g_OT_Buffer->counter1 = uVar2;
      setCopReg(2,in_zero,local_10);
      setCopReg(2,in_at,local_c);
      puVar4[-7] = *puVar6 + param_2 * 0x400000;
      copFunction(2,0x180001);
      iVar7 = getCopControlWord(2,0xf800);
      if (-1 < iVar7) {
        uVar2 = getCopReg(2,0xe);
        _g_OT_Buffer->render_flags = uVar2;
        puVar4[-4] = uVar8 & 0x7fffff;
        copFunction(2,0x168002e);
        iVar7 = getCopReg(2,7);
        uVar2 = iVar7 + iVar3 >> 10;
        local_4 = (iVar7 + iVar3 >> (uVar2 & 0x1f)) + uVar2 * 0x200;
        if (0x7fb < local_4 - 4U) {
          local_4 = -1;
        }
        if (-1 < local_4) {
          uVar2 = puVar5[-4];
          puVar4[-1] = uVar2;
          puVar4->kind = (int)uVar2 >> 0x10;
          // Apply per-vertex color modulation (brightness offset)
          *(s8*)(puVar4 + -4) = (char)puVar4[-4] + param_4;
          *(s8*)(puVar4 + -7) = (char)puVar4[-7] + param_4;
          puVar4->kind = (char)puVar4->kind + param_4;
          *(s8*)(puVar4 + -1) = (char)puVar4[-1] + param_4;
          setCopReg(2,0x4000,_DAT_1f800090);
          setCopReg(2,unaff_s4,puVar6->sub_type);
          setCopReg(2,unaff_s5,puVar6->state);
          setCopReg(2,unaff_s6,puVar6->behavior_state);
          setCopReg(2,iVar3,puVar6->behavior_state);
          copFunction(2,0xf8002a);
          uVar2 = getCopReg(2,0x14);
          _g_OT_Buffer->flags = uVar2;
          uVar2 = getCopReg(2,0x15);
          _g_OT_Buffer->state = uVar2;
          uVar2 = getCopReg(2,0x16);
          _g_OT_Buffer->sub_action = uVar2;
          uVar1 = 0x3e;
          if ((uVar8 & 0x40000000) == 0) {
            uVar1 = 0x3c;
          }
          *(u8 *)((int)puVar4 + -0x21) = uVar1;
          setCopReg(2,iVar3,*puVar5);
          copFunction(2,0x780010);
          uVar2 = getCopReg(2,0x16);
          *puVar4 = uVar2;
          param_1 = (uint *)(_g_EntityBuffer + local_4 * 4);
          *_g_OT_Buffer = *param_1 | 0xc000000;
          *param_1 = (uint)_g_OT_Buffer;
          puVar4 = puVar4 + 0xd;
          _g_OT_Buffer = _g_OT_Buffer + 0xd;
        }
      }
    }
    puVar5 = puVar5 + 9;
    puVar6 = puVar6 + 9;
  } while (0 < (int)uVar8);
  return;
}
