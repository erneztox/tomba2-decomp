/**
 * @brief GTE entity projector variant 2: different register layout
 * @note Original: func_8002847C at 0x8002847C
 */
// GTE_ProjectEntity2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void GTE_ProjectEntity2(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  u8 *puVar5;
  int *piVar6;
  s32 unaff_s4;
  s32 unaff_s5;
  s32 unaff_s6;
  
  piVar6 = param_1 + 6;
  puVar5 = (u8 *)((int)_g_OT_Buffer + 7);
  do {
    uVar4 = piVar6[-5];
    *(s16 *)(puVar5 + 1) =
         _g_GTE_Work8C + (s16)((uint)((char)piVar6->flags * _g_GTE_Work84) >> 0x10);
    *(s16 *)(puVar5 + 0xd) =
         _g_GTE_Work8C + (s16)((uint)(*(s8*)((int)piVar6 + 5) * _g_GTE_Work84) >> 0x10);
    *(s16 *)(puVar5 + 0x19) =
         _g_GTE_Work8C + (s16)((uint)((char)piVar6->kind * _g_GTE_Work84) >> 0x10);
    *(s16 *)(puVar5 + 0x25) =
         _g_GTE_Work8C + (s16)((uint)(*(s8*)((int)piVar6 + 9) * _g_GTE_Work84) >> 0x10);
    *(s16 *)(puVar5 + 3) =
         _DAT_1f80008e + (s16)((uint)(*(s8*)((int)piVar6 + 6) * _DAT_1f800088) >> 0x10);
    *(s16 *)(puVar5 + 0xf) =
         _DAT_1f80008e + (s16)((uint)(*(s8*)((int)piVar6 + 7) * _DAT_1f800088) >> 0x10);
    *(s16 *)(puVar5 + 0x1b) =
         _DAT_1f80008e + (s16)((uint)(*(s8*)((int)piVar6 + 10) * _DAT_1f800088) >> 0x10);
    *(s16 *)(puVar5 + 0x27) =
         _DAT_1f80008e + (s16)((uint)(*(s8*)((int)piVar6 + 0xb) * _DAT_1f800088) >> 0x10);
    *(int *)(puVar5 + 5) = *param_1 + param_2 * 0x400000;
    *(uint *)(puVar5 + 0x11) = uVar4 & 0x7fffff;
    iVar2 = piVar6[-4];
    *(int *)(puVar5 + 0x1d) = iVar2;
    *(int *)(puVar5 + 0x29) = iVar2 >> 0x10;
    setCopReg(2,0x4000,_DAT_1f800090);
    setCopReg(2,unaff_s4,param_1->sub_type);
    setCopReg(2,unaff_s5,param_1->state);
    setCopReg(2,unaff_s6,param_1->behavior_state);
    setCopReg(2,puVar5,param_1->behavior_state);
    copFunction(2,0xf8002a);
    uVar1 = getCopReg(2,0x14);
    _g_OT_Buffer->flags = uVar1;
    uVar1 = getCopReg(2,0x15);
    _g_OT_Buffer->state = uVar1;
    uVar1 = getCopReg(2,0x16);
    _g_OT_Buffer->sub_action = uVar1;
    setCopReg(2,puVar5,*piVar6);
    copFunction(2,0x780010);
    uVar1 = getCopReg(2,0x16);
    _g_OT_Buffer[10] = uVar1;
    *puVar5 = 0x3e;
    puVar3 = (uint *)(_g_EntityBuffer + _g_GTE_Result[0] * 4);
    *_g_OT_Buffer = *puVar3 | 0xc000000;
    *puVar3 = (uint)_g_OT_Buffer;
    puVar5 = puVar5 + 0x34;
    _g_OT_Buffer = _g_OT_Buffer + 0xd;
    piVar6 = piVar6 + 9;
    param_1 = param_1 + 9;
  } while (0 < (int)uVar4);
  return;
}
