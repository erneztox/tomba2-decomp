// FUN_0801f2e4

void FUN_0801f2e4(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  param_2 = param_2 * 0x10;
  iVar2 = func_0x0007aa38(param_1,(uint)*(byte *)(param_2 + -0x7fed63b3) |
                                  (*(byte *)(param_2 + -0x7fed63b4) & 0x7f) << 8,0,0);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x10) = param_1;
    *(undefined1 *)(iVar2 + 2) = *(undefined1 *)(param_2 + -0x7fed63b2);
    *(byte *)(iVar2 + 0x28) = *(byte *)(param_2 + -0x7fed63b4);
    *(int *)(param_1 + 0x14) = iVar2;
    *(int *)(iVar2 + 0x2c) = (int)*(short *)(param_2 + -0x7fed63b0) << 0x10;
    *(int *)(iVar2 + 0x30) = (int)*(short *)(param_2 + -0x7fed63ae) << 0x10;
    *(int *)(iVar2 + 0x34) = (int)*(short *)(param_2 + -0x7fed63ac) << 0x10;
    uVar1 = *(undefined1 *)(param_2 + -0x7fed63b1);
    *(undefined2 *)(iVar2 + 0x54) = 0;
    *(undefined2 *)(iVar2 + 0x56) = 0;
    *(undefined2 *)(iVar2 + 0x58) = 0;
    *(undefined1 *)(iVar2 + 3) = uVar1;
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_2 + -0x7fed63a8);
  }
  return;
}

