/**
 * @brief Entity sprite drawer variant 5: projection + draw
 * @note Original: func_80030D68 at 0x80030D68
 */
// Entity_DrawSprite5



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80030d68(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  int local_38;
  int local_34;
  int local_30;
  
  local_58 = DAT_800102f0;
  local_54 = DAT_800102f4;
  local_50 = DAT_800102f8;
  local_48 = DAT_800102fc;
  local_44 = DAT_80010300;
  local_40 = DAT_80010304;
  uVar1 = (uint)(param_1->behavior_state >> 1);
  iVar8 = uVar1 * 3;
  setCopControlWord(2,0xa800,(uint)*(byte *)((int)&local_48 + iVar8) << 4);
  setCopControlWord(2,0xb000,(uint)*(byte *)((int)&local_48 + iVar8 + 1) << 4);
  setCopControlWord(2,0xb800,(uint)*(byte *)((int)&local_48 + iVar8 + 2) << 4);
  iVar8 = 0;
  _DAT_1f800090 = 0xfff;
  do {
    FUN_80085480(param_1 + 0x48,0x1f800000);
    FUN_80051794(&DAT_1f800020);
    FUN_80084eb0((int)param_1->sprite_x,&DAT_1f800020);
    FUN_80084250(0x1f800000,&DAT_1f800020);
    local_38 = (uint)*(byte *)(&local_58 + uVar1) << 2;
    local_34 = (uint)*(byte *)((int)&local_58 + uVar1 * 4 + 1) << 2;
    local_30 = (uint)*(byte *)((int)&local_58 + uVar1 * 4 + 2) << 2;
    FUN_80084520(0x1f800000,&local_38);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
    setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
    setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
    copFunction(2,0x49e012);
    uVar3 = getCopReg(2,0x4800);
    uVar5 = getCopReg(2,0x5000);
    uVar7 = getCopReg(2,0x5800);
    _DAT_1f800000 = CONCAT22((short)uVar3,(short)uVar2);
    _DAT_1f80000c = CONCAT22((short)uVar7,(short)uVar6);
    setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar3 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    _DAT_1f800004 = CONCAT22((short)uVar4,(short)uVar2);
    _DAT_1f800008 = CONCAT22((short)uVar3,(short)uVar5);
    _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar6);
    setCopReg(2,in_zero,*(undefined4 *)(param_1 + 0x2c));
    setCopReg(2,extraout_at,param_1->pos_y_fixed);
    copFunction(2,0x486012);
    _DAT_1f800014 = getCopReg(2,0x19);
    _DAT_1f800018 = getCopReg(2,0x1a);
    _DAT_1f80001c = getCopReg(2,0x1b);
    _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
    _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
    _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
    setCopControlWord(2,0,_DAT_1f800000);
    setCopControlWord(2,0x800,_DAT_1f800004);
    setCopControlWord(2,0x1000,_DAT_1f800008);
    setCopControlWord(2,0x1800,_DAT_1f80000c);
    setCopControlWord(2,0x2000,_DAT_1f800010);
    setCopControlWord(2,0x2800,_DAT_1f800014);
    setCopControlWord(2,0x3000,_DAT_1f800018);
    setCopControlWord(2,0x3800,_DAT_1f80001c);
    FUN_80027768(&DAT_8009f3e0,0,0,uVar1 << 5);
    iVar8 = iVar8 + 1;
    param_1->sprite_x = param_1->sprite_x + 0x400;
  } while (iVar8 < 4);
  return;
}
