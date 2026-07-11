/**
 * @brief GTE matrix multiply variant 4: different register layout
 * @note Original: func_80084360 at 0x80084360
 */
// GTE_MulMatrix4



#include "tomba.h"
#include "gte_inline.h"
uint * FUN_80084360(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  setCopControlWord(2,0,*param_1);
  setCopControlWord(2,0x800,param_1->flags);
  setCopControlWord(2,0x1000,param_1->kind);
  setCopControlWord(2,0x1800,param_1->sub_type);
  setCopControlWord(2,0x2000,param_1->state);
  setCopReg(2,0,(uint)(ushort)*param_2 | param_2->flags & 0xffff0000);
  setCopReg(2,0x800,param_2->sub_type);
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,0x4800);
  iVar2 = getCopReg(2,0x5000);
  uVar3 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)*(ushort *)((int)param_2 + 2) | param_2->kind << 0x10);
  setCopReg(2,0x800,(int)(short)*(ushort *)((int)param_2 + 0xe));
  copFunction(2,0x486012);
  iVar4 = getCopReg(2,0x4800);
  uVar5 = getCopReg(2,0x5000);
  iVar6 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)(ushort)param_2->flags | param_2->kind & 0xffff0000);
  setCopReg(2,0x800,param_2->state);
  copFunction(2,0x486012);
  *param_2 = iVar4 << 0x10 | uVar1 & 0xffff;
  param_2->sub_type = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = getCopReg(2,0x4800);
  iVar4 = getCopReg(2,0x5000);
  param_2->flags = uVar1 & 0xffff | iVar2 << 0x10;
  param_2->kind = iVar4 << 0x10 | uVar5 & 0xffff;
  uVar1 = getCopReg(2,0xb);
  param_2->state = uVar1;
  return param_2;
}
