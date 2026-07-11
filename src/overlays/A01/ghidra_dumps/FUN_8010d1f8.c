// FUN_8010d1f8

void FUN_8010d1f8(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int unaff_s0;
  
  if (*(char *)(param_1 + 6) != '\0') {
    if (*(char *)(param_1 + 6) != '\x01') {
      bVar2 = *(byte *)(unaff_s0 + 5);
      *(undefined1 *)(unaff_s0 + 0x70) = 2;
      *(byte *)(unaff_s0 + 5) = bVar2 + 1;
      *(char *)(bVar2 + 0xc0) = (char)param_1;
      *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
      FUN_801282dc();
      return;
    }
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 == 1) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x80077b5c(param_1);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x5e);
  if (cVar1 == '\0') {
    *(undefined2 *)(param_1 + 0x4a) = 0xe000;
    FUN_80116214();
    return;
  }
  if (cVar1 == '\x01') {
    *(undefined2 *)(param_1 + 0x4a) = 0xe000;
    FUN_80116214();
    return;
  }
  if (cVar1 == '\x02') {
    *(undefined2 *)(param_1 + 0x4a) = 0xe000;
    FUN_80116214();
    return;
  }
  *(undefined2 *)(param_1 + 0x4a) = 0xe000;
  *(undefined2 *)(param_1 + 0x50) = 0x100;
  *(undefined2 *)(param_1 + 0x40) = 0x14;
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  FUN_80116274();
  return;
}

