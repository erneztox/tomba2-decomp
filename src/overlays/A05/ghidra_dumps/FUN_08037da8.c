// FUN_08037da8

int FUN_08037da8(undefined4 param_1,char param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,0,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801300f4;
    *(char *)(iVar1 + 3) = param_2 + '\r';
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}

