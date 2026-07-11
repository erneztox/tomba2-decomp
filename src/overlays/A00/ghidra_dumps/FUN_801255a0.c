// FUN_801255a0

int FUN_801255a0(undefined4 param_1,short param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(param_1,0,3,0x11);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012e478;
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined1 *)(iVar1 + 0x5e) = 0;
    *(short *)(iVar1 + 0x40) = (param_2 >> 4) + 2;
    *(undefined2 *)(iVar1 + 0x2e) = *param_3;
    *(undefined2 *)(iVar1 + 0x32) = param_3[1];
    *(undefined2 *)(iVar1 + 0x36) = param_3[2];
  }
  return iVar1;
}

