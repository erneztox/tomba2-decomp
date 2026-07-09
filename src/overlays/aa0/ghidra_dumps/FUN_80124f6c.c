// FUN_80124f6c

undefined4 FUN_80124f6c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x80072ddc(param_1,0x80,3,0x10);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012da04;
    uVar2 = FUN_8012df40();
    return uVar2;
  }
  return 0;
}

