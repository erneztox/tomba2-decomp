// FUN_00027144

/* WARNING: Control flow encountered bad instruction data */

void FUN_00027144(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int unaff_s1;
  int unaff_s2;
  
  bVar4 = *(byte *)(unaff_s1 + 0x29);
  iVar2 = func_0x0004954c();
  bVar4 = bVar4 | iVar2 != 0;
  *(byte *)(unaff_s1 + 0x29) = bVar4;
  iVar2 = func_0x0004954c();
  bVar4 = bVar4 | iVar2 != 0;
  *(byte *)(unaff_s1 + 0x29) = bVar4;
  iVar2 = func_0x000493e8();
  if (iVar2 != 0) {
    bVar4 = bVar4 | 2;
  }
  *(byte *)(unaff_s1 + 0x29) = bVar4;
  FUN_0004130c();
  sVar1 = *(short *)(unaff_s1 + 0x44) >> 4;
  *(short *)(unaff_s1 + 0x62) = sVar1;
  *(short *)(unaff_s1 + 0x58) = sVar1;
  if (((unaff_s2 != 0) || (*(char *)(unaff_s1 + 0x29) == '\0')) &&
     (*(char *)(unaff_s1 + 0x5f) == '\0')) {
    iVar2 = 8;
    if ((*(ushort *)(unaff_s1 + 0x66) - 0xb00 < 0x201) ||
       (*(ushort *)(unaff_s1 + 0x66) - 0x100 < 0x401)) {
      iVar2 = 10;
    }
    sVar1 = *(short *)(unaff_s1 + 0x42) + 0x1f;
    *(short *)(unaff_s1 + 0x42) = sVar1;
    iVar3 = func_0x00083e80((int)sVar1);
    *(short *)(unaff_s1 + 0x32) = *(short *)(unaff_s1 + 0x32) + (short)(iVar3 >> iVar2);
    return;
  }
  *(undefined2 *)(unaff_s1 + 0x44) = 0;
  if (*(char *)(unaff_s1 + 0x29) == '\a') {
    *(undefined2 *)(unaff_s1 + 0x62) = 0;
    *(undefined2 *)(unaff_s1 + 0x58) = 0;
    *(undefined1 *)(unaff_s1 + 7) = 0;
    *(undefined1 *)(unaff_s1 + 6) = 3;
  }
  else {
    *(undefined1 *)(unaff_s1 + 6) = 0;
    *(undefined1 *)(unaff_s1 + 5) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

