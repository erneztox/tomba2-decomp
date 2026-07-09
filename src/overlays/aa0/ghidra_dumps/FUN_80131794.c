// FUN_80131794

undefined4 FUN_80131794(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x8007a980(3,4,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8013a330;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined1 *)(iVar1 + 2) = 0x10;
    uVar2 = FUN_80143734();
    return uVar2;
  }
  return 0;
}

