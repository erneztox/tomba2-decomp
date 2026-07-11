// FUN_08030220

int FUN_08030220(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(param_1,1,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801280d0;
    *(undefined1 *)(iVar1 + 3) = 0xb;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
  }
  return iVar1;
}

