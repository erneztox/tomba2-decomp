// FUN_8004bef4

void FUN_8004bef4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x5c) == 0) {
    uVar2 = 0;
  }
  else if (*(short *)(param_1 + 0x5c) == 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0x17;
  }
  iVar1 = FUN_80051b70(param_1,1,uVar2);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x80) = 0x46;
    *(undefined2 *)(param_1 + 0x82) = 0x8c;
    *(undefined2 *)(param_1 + 0x84) = 100;
    *(undefined2 *)(param_1 + 0x86) = 100;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}

