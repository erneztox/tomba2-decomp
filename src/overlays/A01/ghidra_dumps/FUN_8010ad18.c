// FUN_8010ad18

int FUN_8010ad18(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(param_1,0,3,0xf);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801139d4;
    *(undefined1 *)(iVar1 + 3) = 0;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  return iVar1;
}

