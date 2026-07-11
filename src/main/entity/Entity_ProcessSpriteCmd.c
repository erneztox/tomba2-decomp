/**
 * @brief Processes a sprite rendering command from animation data.
 *        Sets up GTE matrices, extracts color/CLUT info from data u8 at offset 3,
 *        and submits the sprite via Entity_SubmitQuadToOT.
 * @note Original: func_800288AC at 0x800288AC
 */
// Entity_ProcessSpriteCmd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_ProcessSpriteCmd(int param_1)

{
  s32 in_zero;
  s32 extraout_at;
  u8 bVar1;
  s32 uVar2;
  s32 uVar3;
  s32 uVar4;
  s32 uVar5;
  s32 uVar6;
  s32 uVar7;
  u8 *pbVar8;
  int local_28;
  int local_24;
  int local_20;

  pbVar8 = *(u8 **)(param_1 + 0x3c);
  if (pbVar8 != (u8 *)0x0) {
    FUN_80085480(param_1 + 0x48,0x1f800000);
    local_28 = (uint)*pbVar8 << 2;
    local_24 = (uint)pbVar8->flags << 2;
    local_20 = (uint)pbVar8->kind << 2;
    FUN_80084520(0x1f800000,&local_28);
    setCopControlWord(2,0,_g_GTE_WorkF8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data4 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_DataC & 0xffff);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_g_GTE_Matrix[0] >> 0x10);
    setCopReg(2,0x5000,_g_GTE_Data8 & 0xffff);
    setCopReg(2,0x5800,_g_GTE_DataC >> 0x10);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar5 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    _g_GTE_Matrix[0] = CONCAT22((s16)uVar3,(s16)uVar2);
    _g_GTE_DataC = CONCAT22((s16)uVar7,(s16)uVar6);
    setCopReg(2,0x4800,_g_GTE_Data4 & 0xffff);
    setCopReg(2,0x5000,_g_GTE_Data8 >> 0x10);
    setCopReg(2,0x5800,_g_GTE_Data10 & 0xffff);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar3 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    _g_GTE_Data4 = CONCAT22((s16)uVar4,(s16)uVar2);
    _g_GTE_Data8 = CONCAT22((s16)uVar3,(s16)uVar5);
    _g_GTE_Data10 = CONCAT22(_DAT_1f800012,(s16)uVar6);
    setCopReg(2,in_zero,*(s32 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,param_1->pos_y_fixed);
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
    if ((pbVar8->sub_type & 0x40) == 0) {
      _DAT_1f800090 = 0;
      bVar1 = pbVar8->sub_type & 0xf;   // Extract color/CLUT index (4 bits)
    }
    else {
      _DAT_1f800090 = (pbVar8->sub_type & 0x3f) * -0x40 + 0x1000;
      bVar1 = 0;
    }
    if ((pbVar8->sub_type & 0x80) == 0) {
      *(u8 **)(param_1 + 0x40) = pbVar8 + 4;
    }
    else {
      *(s32 *)(param_1 + 0x40) = 0;
    }
    setCopControlWord(2,0xa800,0);
    setCopControlWord(2,0xb000,0);
    setCopControlWord(2,0xb800,0);
    // Submit sprite to OT with color info
    FUN_80027768(*(s32 *)(param_1 + 0x50),bVar1,(int)*(s16 *)(param_1 + 0x32),
                 param_1->collision_state);
  }
  return;
}
