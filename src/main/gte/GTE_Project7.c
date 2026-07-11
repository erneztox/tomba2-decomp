/**
 * @brief GTE project variant 7: different matrix source
 * @note Original: func_80032CBC at 0x80032CBC
 */
// GTE_Project7



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void FUN_80032cbc(undefined4 *param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint local_20;
  uint local_1c;
  uint local_18;
  
  local_20 = (uint)*param_2;
  local_1c = (uint)param_2->flags;
  local_18 = (uint)param_2->kind;
  FUN_80084520(0x1f800000,&local_20);
  setCopControlWord(2,0,_DAT_1f8000f8);
  setCopControlWord(2,0x800,_DAT_1f8000fc);
  setCopControlWord(2,0x1000,_DAT_1f800100);
  setCopControlWord(2,0x1800,_DAT_1f800104);
  setCopControlWord(2,0x2000,_DAT_1f800108);
  setCopReg(2,0x4800,_DAT_1f800000 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800004 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f80000c & 0xffff);
  copFunction(2,0x49e012);
  uVar4 = getCopReg(2,0x4800);
  uVar6 = getCopReg(2,0x5000);
  uVar8 = getCopReg(2,0x5800);
  setCopReg(2,0x4800,_DAT_1f800000 >> 0x10);
  setCopReg(2,0x5000,_DAT_1f800008 & 0xffff);
  setCopReg(2,0x5800,_DAT_1f80000c >> 0x10);
  copFunction(2,0x49e012);
  uVar5 = getCopReg(2,0x4800);
  uVar7 = getCopReg(2,0x5000);
  uVar9 = getCopReg(2,0x5800);
  _DAT_1f800000 = CONCAT22((short)uVar5,(short)uVar4);
  _DAT_1f80000c = CONCAT22((short)uVar9,(short)uVar8);
  setCopReg(2,0x4800,_DAT_1f800004 & 0xffff);
  setCopReg(2,0x5000,_DAT_1f800008 >> 0x10);
  setCopReg(2,0x5800,_DAT_1f800010 & 0xffff);
  copFunction(2,0x49e012);
  uVar4 = getCopReg(2,0x4800);
  uVar5 = getCopReg(2,0x5000);
  uVar8 = getCopReg(2,0x5800);
  _DAT_1f800004 = CONCAT22((short)uVar6,(short)uVar4);
  _DAT_1f800008 = CONCAT22((short)uVar5,(short)uVar7);
  _DAT_1f800010 = CONCAT22(_DAT_1f800012,(short)uVar8);
  setCopReg(2,in_zero,*param_1);
  setCopReg(2,extraout_at,param_1->flags);
  copFunction(2,0x486012);
  iVar1 = getCopReg(2,0x19);
  iVar2 = getCopReg(2,0x1a);
  iVar3 = getCopReg(2,0x1b);
  _DAT_1f800014 = iVar1 + _DAT_1f80010c;
  _DAT_1f800018 = iVar2 + _DAT_1f800110;
  _DAT_1f80001c = iVar3 + _DAT_1f800114;
  setCopControlWord(2,0,_DAT_1f800000);
  setCopControlWord(2,0x800,_DAT_1f800004);
  setCopControlWord(2,0x1000,_DAT_1f800008);
  setCopControlWord(2,0x1800,_DAT_1f80000c);
  setCopControlWord(2,0x2000,_DAT_1f800010);
  setCopControlWord(2,0x2800,iVar1 + _DAT_1f80010c);
  setCopControlWord(2,0x3000,iVar2 + _DAT_1f800110);
  setCopControlWord(2,0x3800,iVar3 + _DAT_1f800114);
  return;
}
