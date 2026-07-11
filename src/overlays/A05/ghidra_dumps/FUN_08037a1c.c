// FUN_08037a1c

int FUN_08037a1c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,1,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801300f4;
    *(undefined1 *)(iVar1 + 3) = 5;
    *(undefined1 *)(iVar1 + 0x5e) = param_2;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}

