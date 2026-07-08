
void FUN_80056d44(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 0x181) = 0;
  *(undefined2 *)(param_1 + 0x182) = 0;
  *(undefined1 *)(param_1 + 0x16a) = 0;
  FUN_80053d90();
  *(undefined1 *)(param_1 + 0x178) = 0;
  if ((*(byte *)(param_1 + 0x146) & 3) == 0) {
    if (param_2 == 0) {
      *(undefined2 *)(param_1 + 0x58) = 0;
      FUN_80054d14(param_1,0x14,0);
    }
    *(undefined1 *)(param_1 + 0x167) = 0x10;
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined1 *)(param_1 + 0x145) = 1;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x144) = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x145) = 1;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined1 *)(param_1 + 5) = 6;
  }
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}

