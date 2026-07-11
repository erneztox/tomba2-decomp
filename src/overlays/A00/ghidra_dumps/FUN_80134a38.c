// FUN_80134a38

/* WARNING: Control flow encountered bad instruction data */

void FUN_80134a38(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      FUN_8013dbd4();
      return;
    }
    *(undefined4 *)(param_1 + 0x50) = 0x8014afc0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 0x55) = 0x20;
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x5a) = 0xfff0;
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 100;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (0x40 < *(byte *)(param_1 + 0x55)) {
      *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) - 8;
    }
    sVar2 = *(short *)(param_1 + 0x56) + 6;
    *(short *)(param_1 + 0x56) = sVar2;
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + -1;
    if (0xbf < sVar2) {
      *(undefined1 *)(param_1 + 5) = 2;
      FUN_8013db88();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8013db88();
      return;
    }
    if (-1 < *(char *)(param_1 + 0x55)) {
      *(char *)(param_1 + 0x55) = *(char *)(param_1 + 0x55) + '\f';
    }
    sVar2 = *(short *)(param_1 + 0x56) + 6;
    *(short *)(param_1 + 0x56) = sVar2;
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + -1;
    if (0x7f < sVar2) {
      *(undefined1 *)(param_1 + 5) = 1;
      FUN_8013db88();
      return;
    }
  }
  else if (bVar1 == 2) {
    if (0x10 < *(byte *)(param_1 + 0x55)) {
      *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) - 8;
    }
    sVar2 = *(short *)(param_1 + 0x56) + 6;
    *(short *)(param_1 + 0x56) = sVar2;
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + -1;
    if (0xff < sVar2) {
      *(undefined1 *)(param_1 + 5) = 3;
      FUN_8013db88();
      return;
    }
  }
  else {
    if (bVar1 != 3) {
      FUN_8013db88();
      return;
    }
    *(undefined1 *)(param_1 + 4) = 2;
  }
  *(char *)(param_1 + 7) = *(char *)(param_1 + 0x54) << 5;
  bVar1 = *(char *)(param_1 + 0x54) + 1;
  *(byte *)(param_1 + 0x54) = bVar1;
  if (5 < bVar1) {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  func_0x8002b278(param_1);
  *(undefined2 *)(param_1 + 0x4a) = 0;
  FUN_8013dbd4();
  return;
}

