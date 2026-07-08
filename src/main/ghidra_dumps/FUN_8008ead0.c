
void FUN_8008ead0(short param_1,short param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_80104c30 + param_1 * 4);
  FUN_80092a70(param_3,param_3);
  uVar1 = FUN_80090160((int)param_1,(int)param_2);
  *(undefined4 *)(iVar2 + param_2 * 0xb0 + 0x90) = uVar1;
  return;
}

