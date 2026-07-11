// FUN_80120564

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80120564(void)

{
  byte bVar1;
  int in_v1;
  uint uVar2;
  byte *unaff_s0;
  ushort *unaff_s1;
  ushort *unaff_s3;
  int unaff_s4;
  
  *(ushort *)(unaff_s0 + 0x8a) = unaff_s1[1];
  *(ushort *)(unaff_s0 + 0x8c) = unaff_s1[2];
  *(ushort *)(unaff_s0 + 0x54) = unaff_s1[3];
  *(ushort *)(unaff_s0 + 0x56) = unaff_s1[4];
  *(ushort *)(unaff_s0 + 0x58) = unaff_s1[5];
  *(ushort *)(in_v1 + 0x3a) = unaff_s1[6];
  *(ushort *)(unaff_s0 + 0x80) = unaff_s1[7];
  *(ushort *)(unaff_s0 + 0x82) = unaff_s1[8];
  *(ushort *)(unaff_s0 + 0x84) = unaff_s1[9];
  bVar1 = unaff_s0[0x47];
  uVar2 = (uint)bVar1;
  *(ushort *)(unaff_s0 + 0x86) = unaff_s1[10];
  if (uVar2 == 2) {
    *(ushort *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(ushort *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) >> 1;
    if (*(short *)(unaff_s0 + 0x82) != 0) {
LAB_80120678:
      unaff_s0[0x4a] = 0;
      unaff_s0[0x4b] = 0;
      unaff_s0[0x50] = 0;
      unaff_s0[0x51] = 2;
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x16) =
           *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3a);
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x12) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(unaff_s0[3]) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        *(undefined2 *)(unaff_s0 + 0x78) = *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2);
        FUN_801291f4();
        return;
      }
    }
    *unaff_s0 = bVar1;
  }
  else {
    if (uVar2 == 0) {
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = 0x140;
      uVar2 = 0;
      goto LAB_801295f4;
    }
    if (uVar2 != 1) {
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = 0x140;
      goto LAB_80120678;
    }
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = 0x140;
    *(ushort *)(unaff_s0 + 0x70) = *(short *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) + unaff_s1[-5];
  }
  while (FUN_80130d9c(uVar2), unaff_s1 < unaff_s3) {
    uVar2 = (uint)*unaff_s1;
    unaff_s1 = unaff_s1 + 1;
LAB_801295f4:
    uVar2 = FUN_80130838(unaff_s4 + uVar2 * 4 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

