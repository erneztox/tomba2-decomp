
void FUN_8001e504(void)

{
  undefined2 uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int in_v1;
  uint unaff_s0;
  uint unaff_s1;
  undefined2 *unaff_s2;
  ushort unaff_s3;
  
  uVar3 = 0xd;
  while( true ) {
    *(ushort *)(in_v1 + 0x1aa) = uVar3 | 0x10;
    FUN_8001dd04();
    if ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x400) != 0) {
      uVar5 = 1;
      do {
        if (0xf00 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,s_ClearImage2_80010a64);
        }
        uVar5 = uVar5 + 1;
      } while ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x400) != 0);
    }
    unaff_s1 = unaff_s1 - unaff_s0;
    FUN_8001dd04();
    FUN_8001dd04();
    iVar2 = DAT_80026d88;
    if (unaff_s1 == 0) break;
    unaff_s0 = 0x40;
    if (unaff_s1 < 0x41) {
      unaff_s0 = unaff_s1;
    }
    iVar4 = 0;
    if (0 < (int)unaff_s0) {
      do {
        uVar1 = *unaff_s2;
        unaff_s2 = unaff_s2 + 1;
        iVar4 = iVar4 + 2;
        *(undefined2 *)(iVar2 + 0x1a8) = uVar1;
      } while (iVar4 < (int)unaff_s0);
    }
    uVar3 = *(ushort *)(DAT_80026d88 + 0x1aa) & 0xffcf;
    in_v1 = DAT_80026d88;
  }
  *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) & 0xffcf;
  if ((*(ushort *)(iVar2 + 0x1ae) & 0x7ff) != unaff_s3) {
    uVar5 = 1;
    do {
      if (0xf00 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_8001e5ec(s___d__d____d__d__80010a40 + 4,s_LoadImage_80010a70 + 8);
      }
      uVar5 = uVar5 + 1;
    } while ((*(ushort *)(DAT_80026d88 + 0x1ae) & 0x7ff) != unaff_s3);
  }
  return;
}

