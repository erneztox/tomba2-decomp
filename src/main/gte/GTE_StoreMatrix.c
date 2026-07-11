/**
 * @brief GTE matrix store: reads GTE regs, stores to param_2 array (+translation)
 * @note Original: func_800847B0 at 0x800847B0
 */
// GTE_StoreMatrix



undefined4 * FUN_800847b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1->flags;
  param_2->flags = uVar2;
  *param_2 = uVar3;
  *(short *)param_2 = (short)uVar2;
  uVar4 = param_1->kind;
  uVar2 = param_1->sub_type;
  param_2->sub_type = uVar4;
  param_2->kind = uVar2;
  *(short *)(param_2 + 3) = (short)uVar3;
  *(short *)(param_2 + 2) = (short)uVar4;
  uVar1 = *(undefined2 *)(param_1 + 4);
  *(short *)(param_2 + 1) = (short)uVar2;
  *(undefined2 *)(param_2 + 4) = uVar1;
  return param_2;
}
