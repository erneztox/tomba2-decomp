// FUN_80134af0

void FUN_80134af0(int param_1)

{
  byte bVar1;
  short sVar2;
  int in_v1;
  int unaff_s0;
  
  if (in_v1 == 2) {
    if (0x10 < *(byte *)(param_1 + 5)) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) - 8;
    }
    sVar2 = *(short *)(param_1 + 6) + 6;
    *(short *)(param_1 + 6) = sVar2;
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    if (0xff < sVar2) {
      *(undefined1 *)(unaff_s0 + 5) = 3;
      FUN_8013db88();
      return;
    }
  }
  else {
    if (in_v1 != 3) {
      FUN_8013db88();
      return;
    }
    *(undefined1 *)(unaff_s0 + 4) = 2;
  }
  *(char *)(unaff_s0 + 7) = *(char *)(param_1 + 4) << 5;
  bVar1 = *(char *)(param_1 + 4) + 1;
  *(byte *)(param_1 + 4) = bVar1;
  if (5 < bVar1) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  func_0x8002b278();
  *(undefined2 *)(unaff_s0 + 0x4a) = 0;
  FUN_8013dbd4();
  return;
}

