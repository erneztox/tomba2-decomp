// FUN_0002313c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002313c(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int unaff_s0;
  short unaff_s1;
  
  if (*(char *)(unaff_s0 + 0x46) == '\0') {
    *(short *)(unaff_s0 + 0x58) = unaff_s1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_s0 + 0x58) = unaff_s1 + -0x800;
  if (*(char *)(unaff_s0 + 0x5f) == '\0') {
    *(undefined1 *)(unaff_s0 + 0xbf) = 1;
  }
  else if (*(char *)(unaff_s0 + 0x5f) != '\x01') {
    cVar3 = '\x02';
    if (unaff_s1 != 0) {
      cVar3 = 0 < unaff_s1;
    }
    if (*(char *)(unaff_s0 + 0x46) == cVar3) {
      *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
    }
    if ((((int)_DAT_800e7ffe & 0x8200U) == 0) &&
       (iVar1 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(unaff_s0 + 0x2e)) * 0x10000) >> 0x10,
       iVar2 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(unaff_s0 + 0x36)) * 0x10000) >> 0x10,
       iVar1 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2), iVar1 < 0x2bd)) {
      if (*(byte *)(unaff_s0 + 0xe) - 1 < 3) {
        return;
      }
      *(int *)(unaff_s0 + 0x2c) =
           *(int *)(unaff_s0 + 0x2c) +
           (int)*(short *)(unaff_s0 + 0x44) * (int)*(short *)(unaff_s0 + 0x48);
      *(int *)(unaff_s0 + 0x34) =
           *(int *)(unaff_s0 + 0x34) +
           (int)*(short *)(unaff_s0 + 0x44) * (int)*(short *)(unaff_s0 + 0x4c);
    }
    else {
      *(undefined1 *)(unaff_s0 + 6) = 9;
      *(undefined1 *)(unaff_s0 + 7) = 0;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

