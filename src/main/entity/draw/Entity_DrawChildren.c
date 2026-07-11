/**
 * @brief Draws child entities by iterating linked list from entity[0xC0]
 * @note Original: func_8003CDD8 at 0x8003CDD8
 */
// Entity_DrawChildren


// Entity_DrawChildren

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_DrawChildren(int param_1,s32 param_2)

{
  s32 in_zero;
  s32 in_at;
  s32 extraout_at;
  int iVar1;
  int iVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  s32 uVar8;
  int iVar9;
  
  if ((param_1->counter1 != '\0') && (iVar9 = 0, param_1->counter2 != '\0')) {
    do {
      if ((int)(uint)param_1->counter1 <= iVar9) {
        return;
      }
      iVar2 = *(int *)(param_1 + iVar9 * 4 + 0xc0);
      if (*(int *)(iVar2 + 0x40) != 0) {
        _g_GTE_WorkC0 = CONCAT22(*(s16 *)(iVar2 + 0x30),iVar2->pos_x);
        _g_GTE_WorkC4 = CONCAT22(g_GTE_WorkC4_2,*(s16 *)(iVar2 + 0x34));
        setCopControlWord(2,0,_g_GTE_WorkF8);
        setCopControlWord(2,0x800,_DAT_1f8000fc);
        setCopControlWord(2,0x1000,_DAT_1f800100);
        setCopControlWord(2,0x1800,_DAT_1f800104);
        setCopControlWord(2,0x2000,_DAT_1f800108);
        setCopReg(2,0x4800,(uint)*(u16 *)(iVar2 + 0x18));
        setCopReg(2,0x5000,(uint)*(u16 *)(iVar2 + 0x1e));
        setCopReg(2,0x5800,(uint)*(u16 *)(iVar2 + 0x24));
        copFunction(2,0x49e012);
        uVar3 = getCopReg(2,0x4800);
        uVar5 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        setCopReg(2,0x4800,(uint)*(u16 *)(iVar2 + 0x1a));
        setCopReg(2,0x5000,(uint)*(u16 *)(iVar2 + 0x20));
        setCopReg(2,0x5800,(uint)*(u16 *)(iVar2 + 0x26));
        copFunction(2,0x49e012);
        uVar4 = getCopReg(2,0x4800);
        uVar6 = getCopReg(2,0x5000);
        uVar8 = getCopReg(2,0x5800);
        _g_GTE_Matrix[0] = CONCAT22((s16)uVar4,(s16)uVar3);
        _g_GTE_DataC = CONCAT22((s16)uVar8,(s16)uVar7);
        setCopReg(2,0x4800,(uint)*(u16 *)(iVar2 + 0x1c));
        setCopReg(2,0x5000,(uint)*(u16 *)(iVar2 + 0x22));
        setCopReg(2,0x5800,(uint)*(u16 *)(iVar2 + 0x28));
        copFunction(2,0x49e012);
        uVar3 = getCopReg(2,0x4800);
        uVar4 = getCopReg(2,0x5000);
        uVar7 = getCopReg(2,0x5800);
        _g_GTE_Data4 = CONCAT22((s16)uVar5,(s16)uVar3);
        _g_GTE_Data8 = CONCAT22((s16)uVar4,(s16)uVar6);
        _g_GTE_Data10 = CONCAT22(_DAT_1f800012,(s16)uVar7);
        setCopReg(2,in_zero,_g_GTE_WorkC0);
        setCopReg(2,in_at,_g_GTE_WorkC4);
        copFunction(2,0x486012);
        _g_GTE_Data14 = getCopReg(2,0x19);
        _g_GTE_Data18 = getCopReg(2,0x1a);
        _g_GTE_Data1C = getCopReg(2,0x1b);
        _g_GTE_Data14 = _g_GTE_Data14 + _g_GTE_Work10C;
        _g_GTE_Data18 = _g_GTE_Data18 + _g_GTE_Work110;
        _g_GTE_Data1C = _g_GTE_Data1C + _g_GTE_Work114;
        setCopControlWord(2,0,_g_GTE_Matrix[0]);
        setCopControlWord(2,0x800,_g_GTE_Data4);
        setCopControlWord(2,0x1000,_g_GTE_Data8);
        setCopControlWord(2,0x1800,_g_GTE_DataC);
        setCopControlWord(2,0x2000,_g_GTE_Data10);
        setCopControlWord(2,0x2800,_g_GTE_Data14);
        setCopControlWord(2,0x3000,_g_GTE_Data18);
        setCopControlWord(2,0x3800,_g_GTE_Data1C);
        iVar1 = _g_EntityBuffer;
        if ((param_1->sprite_flags & 0xf) == 4) {
          iVar1 = _g_EntityBuffer + *(s8*)(iVar2 + 0x3f) * 4;
        }
        Entity_SubmitSpriteToOT(*(s32 *)(iVar2 + 0x40),iVar1,param_2);
        in_at = extraout_at;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)(uint)param_1->counter2);
  }
  return;
}
