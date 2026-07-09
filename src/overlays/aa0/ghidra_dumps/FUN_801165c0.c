// FUN_801165c0

void FUN_801165c0(int param_1)

{
  byte bVar1;
  short in_v1;
  int unaff_s1;
  
  *(short *)(unaff_s1 + 0x52) = -in_v1;
  bVar1 = *(byte *)(unaff_s1 + 7);
  *(byte *)(unaff_s1 + 7) = bVar1 + 1;
  if (*(char *)(bVar1 + 0x5f) == '\x02') {
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  FUN_801281b8();
  return;
}

