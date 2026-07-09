// FUN_8012e87c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

uint FUN_8012e87c(void)

{
  int *piVar1;
  undefined2 uVar2;
  short sVar3;
  ushort uVar4;
  int in_v0;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined2 unaff_s4;
  
  if (unaff_s2 != in_v0) {
    while( true ) {
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3a) =
           *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38);
      unaff_s3 = unaff_s3 + 1;
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x3c) =
           *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 0x38);
      if ((int)(uint)*(byte *)(unaff_s1 + 9) <= unaff_s3) break;
      piVar1 = (int *)(unaff_s0 + 0xc4);
      unaff_s0 = unaff_s0 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(*(undefined1 *)(*piVar1 + 0x3e)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    uVar5 = 1;
    if (*(short *)(unaff_s1 + 0x6a) == 1) {
      sVar3 = *(short *)(*(int *)(unaff_s1 + 0x10) + 0x76);
      *(short *)(unaff_s1 + 0x6a) = sVar3;
      if (sVar3 == 2) {
        uVar2 = 3;
        if (*(char *)(unaff_s1 + 3) == '\0') {
          *(undefined2 *)(unaff_s1 + 0x6a) = 5;
          if (*(short *)(*(int *)(unaff_s1 + 0x10) + 0x78) == 0) {
            func_0x8004ed94(0x25,0x41);
          }
          uVar2 = 0;
          if (*(short *)(unaff_s1 + 0x42) != 0) {
            return 4;
          }
          *(undefined2 *)(unaff_s1 + 0x6a) = 4;
        }
        else {
          *(undefined2 *)(unaff_s1 + 0x6a) = 3;
        }
                    /* WARNING: Subroutine does not return */
        *(undefined2 *)(unaff_s1 + 2) = uVar2;
        FUN_801402b8();
      }
      uVar5 = (uint)*(byte *)(unaff_s1 + 3);
      if ((uVar5 != 0) && (sVar3 == 0)) {
        *(undefined2 *)(unaff_s1 + 0x6a) = 4;
        *(undefined1 *)(*(int *)(unaff_s1 + (*(byte *)(unaff_s1 + 9) - 1) * 4 + 0xc0) + 0x3f) = 8;
        uVar5 = FUN_80137e70();
      }
    }
    return uVar5;
  }
  iVar8 = 1;
  FUN_80137e70();
  *(undefined2 *)(unaff_s1 + 0x6a) = unaff_s4;
  *(short *)(unaff_s1 + 0x42) = (short)unaff_s2;
  iVar7 = unaff_s1;
  FUN_80137be8();
  *(undefined1 *)(unaff_s1 + 0x2b) = 0;
  *(short *)(unaff_s1 + 0x42) = *(short *)(unaff_s1 + 0x42) + -1;
  iVar6 = *(int *)(unaff_s0 + 0xc0);
  *(undefined2 *)(iVar6 + 10) = *(undefined2 *)(unaff_s1 + 100);
  sVar3 = func_0x800781e0(iVar8 - iVar7,
                          (int)*(short *)(unaff_s2 + 0x36) - (int)*(short *)(iVar6 + 0x164));
  if (((((int)*(short *)(unaff_s3 + 0x17e) & 0x8200U) != 0) || (0x640 < sVar3)) || (0x44c < sVar3))
  {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = 2;
  if (600 < sVar3) {
    uVar4 = 1;
  }
  if (uVar4 == 1) {
    uVar5 = FUN_80140ac8();
    return uVar5;
  }
  if (1 < uVar4) {
    if (uVar4 != 2) {
      uVar5 = FUN_80140ad8();
      return uVar5;
    }
    return (uint)*(byte *)(unaff_s1 + -0x7feb410c);
  }
  if (uVar4 != 0) {
    uVar5 = FUN_80140ad8();
    return uVar5;
  }
  uVar5 = FUN_80140ac8();
  return uVar5;
}

