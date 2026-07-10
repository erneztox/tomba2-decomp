// FUN_00027768

/* WARNING: Control flow encountered bad instruction data */

void FUN_00027768(void)

{
  undefined1 in_v0;
  short sVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  int unaff_s1;
  
  *(undefined1 *)(unaff_s1 + 0x29) = in_v0;
  if (*(char *)(unaff_s1 + 0x5f) != '\x02') {
    *(undefined1 *)(unaff_s1 + 0x5f) = 0;
    bVar5 = *(byte *)(unaff_s1 + 0x29);
    iVar2 = func_0x0004954c();
    bVar5 = bVar5 | iVar2 != 0;
    *(byte *)(unaff_s1 + 0x29) = bVar5;
    iVar2 = func_0x0004954c();
    bVar5 = bVar5 | iVar2 != 0;
    *(byte *)(unaff_s1 + 0x29) = bVar5;
    iVar2 = func_0x000493e8();
    if (iVar2 != 0) {
      bVar5 = bVar5 | 2;
    }
    *(byte *)(unaff_s1 + 0x29) = bVar5;
  }
  FUN_0004130c();
  uVar4 = *(short *)(unaff_s1 + 0x40) - 1;
  *(ushort *)(unaff_s1 + 0x40) = uVar4;
  sVar1 = *(short *)(unaff_s1 + 0x44) >> 4;
  *(short *)(unaff_s1 + 0x62) = sVar1;
  *(short *)(unaff_s1 + 0x58) = sVar1;
  if ((-1 < (int)((uint)uVar4 << 0x10)) &&
     ((*(char *)(unaff_s1 + 0x5f) == '\0' || (*(short *)(unaff_s1 + 0x66) == 0xc00)))) {
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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

