// FUN_80116774

void FUN_80116774(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0x50) = 0xff80;
  *(short *)(unaff_s1 + 0x66) = *(short *)(unaff_s1 + 0x56) + -0x800;
  *(undefined2 *)(unaff_s1 + 0x4e) = 0xff80;
  *(undefined2 *)(unaff_s1 + 0x52) = 0xfff0;
  iVar2 = func_0x80083f50((int)*(short *)(unaff_s1 + 0x56));
  iVar3 = (int)*(short *)(unaff_s1 + 0x56);
  *(short *)(unaff_s1 + 0x48) = (short)(iVar2 >> 4);
  *(undefined2 *)(unaff_s1 + 0x4a) = 0;
  iVar2 = func_0x80083e80();
  *(short *)(unaff_s1 + 0x4c) = (short)(-iVar2 >> 4);
  *(undefined2 *)(unaff_s1 + 0x44) = 0xc00;
  bVar1 = *(byte *)(unaff_s1 + 7);
  *(undefined2 *)(unaff_s1 + 0x40) = 0x1e;
  *(byte *)(unaff_s1 + 7) = bVar1 + 1;
  if (*(char *)(bVar1 + 0x5f) == '\x02') {
    *(undefined1 *)(iVar3 + 0xb) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(char *)(iVar3 + 5) = *(char *)(iVar3 + 5) + '\x01';
  }
  FUN_801281b8();
  return;
}

