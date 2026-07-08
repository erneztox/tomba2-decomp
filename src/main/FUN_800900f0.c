
void FUN_800900f0(short param_1,short param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_80104c30 + param_1 * 4) + param_2 * 0xb0;
  *(undefined1 *)(iVar2 + (uint)*(byte *)(iVar2 + 0x17) + 0x37) = param_3;
  uVar1 = FUN_80090160();
  *(undefined4 *)(iVar2 + 0x90) = uVar1;
  return;
}

