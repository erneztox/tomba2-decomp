// FUN_8008eda0

void FUN_8008eda0(short param_1,short param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_80104c30 + param_1 * 4) + param_2 * 0xb0;
  *(undefined1 *)(iVar2 + 0x18) = param_3;
  *(char *)(iVar2 + 0x1e) = *(char *)(iVar2 + 0x1e) + '\x01';
  uVar1 = FUN_80090160();
  *(undefined4 *)(iVar2 + 0x90) = uVar1;
  return;
}

