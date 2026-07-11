/**
 * @brief GTE matrix multiply variant 3: different input format
 * @note Original: func_80084250 at 0x80084250
 */
// GTE_MulMatrix3



uint * FUN_80084250(uint *param_1,ushort *param_2)

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
  setCopReg(2,0,(uint)*param_2 | *(uint *)(param_2 + 2) & 0xffff0000);
  setCopReg(2,0x800,*(undefined4 *)(param_2 + 6));
  copFunction(2,0x486012);
  uVar1 = getCopReg(2,0x4800);
  iVar2 = getCopReg(2,0x5000);
  uVar3 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)param_2->flags | *(int *)(param_2 + 4) << 0x10);
  setCopReg(2,0x800,(int)(short)param_2->sub_action);
  copFunction(2,0x486012);
  iVar4 = getCopReg(2,0x4800);
  uVar5 = getCopReg(2,0x5000);
  iVar6 = getCopReg(2,0x5800);
  setCopReg(2,0,(uint)param_2->kind | *(uint *)(param_2 + 4) & 0xffff0000);
  setCopReg(2,0x800,*(undefined4 *)(param_2 + 8));
  copFunction(2,0x486012);
  *param_1 = iVar4 << 0x10 | uVar1 & 0xffff;
  param_1->sub_type = iVar6 << 0x10 | uVar3 & 0xffff;
  uVar1 = getCopReg(2,0x4800);
  iVar4 = getCopReg(2,0x5000);
  param_1->flags = uVar1 & 0xffff | iVar2 << 0x10;
  param_1->kind = iVar4 << 0x10 | uVar5 & 0xffff;
  uVar1 = getCopReg(2,0xb);
  param_1->state = uVar1;
  return param_1;
}
