// FUN_8003b054

void FUN_8003b054(int param_1,undefined4 *param_2,int param_3)

{
  undefined2 uVar1;
  
  if (param_3 == 1) {
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 1);
    *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)param_2;
    *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 3);
    uVar1 = *(undefined2 *)(param_2 + 2);
    *(char *)(param_1 + 0xc) = *(char *)(param_1 + 0xc) + -1;
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + -1;
    *(undefined2 *)(param_1 + 0x24) = uVar1;
    *(char *)(param_1 + 0x1c) = *(char *)(param_1 + 0x1c) + -1;
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + -1;
  }
  else {
    if (param_3 < 2) {
      if (param_3 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0xc) = *param_2;
      *(undefined4 *)(param_1 + 0x14) = param_2[1];
      *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 2);
      *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 3);
      return;
    }
    if (param_3 == 2) {
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 2);
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 3);
      *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)param_2;
      uVar1 = *(undefined2 *)(param_2 + 1);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -1;
      *(char *)(param_1 + 0x15) = *(char *)(param_1 + 0x15) + -1;
      *(undefined2 *)(param_1 + 0x24) = uVar1;
      *(char *)(param_1 + 0x1d) = *(char *)(param_1 + 0x1d) + -1;
      *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x25) + -1;
    }
    else {
      if (param_3 != 3) {
        return;
      }
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 3);
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 2);
      *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 1);
      uVar1 = *(undefined2 *)param_2;
      *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + -1;
      *(char *)(param_1 + 0xc) = *(char *)(param_1 + 0xc) + -1;
      *(char *)(param_1 + 0x15) = *(char *)(param_1 + 0x15) + -1;
      *(undefined2 *)(param_1 + 0x24) = uVar1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + -1;
      *(char *)(param_1 + 0x1d) = *(char *)(param_1 + 0x1d) + -1;
      *(char *)(param_1 + 0x1c) = *(char *)(param_1 + 0x1c) + -1;
      *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x25) + -1;
      *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + -1;
    }
  }
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)((int)param_2 + 6);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)((int)param_2 + 2);
  return;
}

