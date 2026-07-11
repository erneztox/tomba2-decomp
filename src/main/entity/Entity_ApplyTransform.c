/**
 * @brief Applies GTE transform to entity (rotation + translation)
 * @note Original address: 0x8002AE0C
 */
// Entity_ApplyTransform

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void FUN_8002ae0c(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar8;
  int local_28;
  int local_24;
  int local_20;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  DAT_1f800095 = 0x10;
  DAT_1f800094 = (byte)(param_2 >> 3);
  DAT_1f800096 = DAT_1f800094;
  if (param_3 == 0) {
    uVar7 = CONCAT22((*(short *)((int)param_1 + 0x32) + *(short *)((int)param_1 + 0x86)) -
                     *(short *)(param_1 + 0x21),*(undefined2 *)((int)param_1 + 0x2e));
    uVar8 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),*(undefined2 *)((int)param_1 + 0x36));
    FUN_80085480(param_1 + 0x15,0x1f800000,*(short *)(param_1 + 0x21),param_2,uVar7,uVar8);
    local_28 = (uint)DAT_1f800094 << 2;
    local_24 = (uint)DAT_1f800095 << 2;
    local_20 = (uint)DAT_1f800096 << 2;
    FUN_80084520(0x1f800000,&local_28);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
    copFunction(2,0x49e012);
    uVar1 = getCopReg(2,0x4800);
    uVar3 = getCopReg(2,0x5000);
    uVar5 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
    setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
    setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    _DAT_1f800000 = CONCAT22((short)uVar2,(short)uVar1);
    _DAT_1f80000c = CONCAT22((short)uVar6,(short)uVar5);
    setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
    copFunction(2,0x49e012);
    uVar1 = getCopReg(2,0x4800);
    uVar2 = getCopReg(2,0x5000);
    uVar5 = getCopReg(2,0x5800);
    _DAT_1f800004 = CONCAT22((short)uVar3,(short)uVar1);
    _DAT_1f800008 = CONCAT22((short)uVar2,(short)uVar4);
    _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar5);
    setCopReg(2,in_zero,uVar7);
    setCopReg(2,extraout_at,uVar8);
    copFunction(2,0x486012);
  }
  else {
    FUN_80085480(&DAT_800a1ccc,0x1f800000);
    local_28 = (uint)DAT_1f800094 << 2;
    local_24 = (uint)DAT_1f800095 << 2;
    local_20 = (uint)DAT_1f800096 << 2;
    FUN_80084520(0x1f800000,&local_28);
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
    copFunction(2,0x49e012);
    uVar1 = getCopReg(2,0x4800);
    uVar3 = getCopReg(2,0x5000);
    uVar5 = getCopReg(2,0x5800);
    setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
    setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
    setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
    copFunction(2,0x49e012);
    uVar2 = getCopReg(2,0x4800);
    uVar4 = getCopReg(2,0x5000);
    uVar6 = getCopReg(2,0x5800);
    _DAT_1f800000 = CONCAT22((short)uVar2,(short)uVar1);
    _DAT_1f80000c = CONCAT22((short)uVar6,(short)uVar5);
    setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
    setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
    setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
    copFunction(2,0x49e012);
    uVar1 = getCopReg(2,0x4800);
    uVar2 = getCopReg(2,0x5000);
    uVar5 = getCopReg(2,0x5800);
    _DAT_1f800004 = CONCAT22((short)uVar3,(short)uVar1);
    _DAT_1f800008 = CONCAT22((short)uVar2,(short)uVar4);
    _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar5);
    setCopReg(2,in_zero,*param_1);
    setCopReg(2,extraout_at_00,param_1->flags);
    copFunction(2,0x486012);
  }
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
  if (DAT_800bf870 - 1 < 2) {
    _DAT_1f800090 = 0x800;
  }
  else {
    if (DAT_800bf870 == 7) {
      _DAT_1f800090 = 0x400;
      uVar1 = 0xfffffffd;
      goto LAB_8002b244;
    }
    _DAT_1f800090 = 0;
  }
  uVar1 = 0xfffffff6;
LAB_8002b244:
  FUN_80027768(&DAT_8009fae8,0,uVar1,0);
  return;
}

