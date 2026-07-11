// FUN_80126608

/* WARNING: Control flow encountered bad instruction data */

void FUN_80126608(void)

{
  byte bVar1;
  short sVar2;
  uint in_v0;
  short *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s8;
  
  while (in_v0 == 0) {
    if ((*unaff_s0 != -1) &&
       ((DAT_80139000 == '\0' || (sVar2 = FUN_8012f864(unaff_s1), sVar2 != 0)))) {
      bVar1 = *(byte *)(unaff_s3 + 6);
      if (bVar1 < 0xfe) {
        *(byte *)(unaff_s3 + 6) = bVar1 + 1;
        *(short *)(unaff_s3 + (uint)bVar1 * 2 + 0x10) = *unaff_s0;
      }
    }
    unaff_s1 = unaff_s1 + 1;
    unaff_s0 = unaff_s0 + *(short *)(unaff_s3 + 10);
    in_v0 = (uint)(unaff_s4 < unaff_s1);
  }
  do {
    unaff_s2 = unaff_s2 + 1;
    if (unaff_s8 < unaff_s2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while ((unaff_s2 < 0) || (*(short *)(unaff_s3 + 10) <= unaff_s2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

