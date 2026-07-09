// FUN_8012e52c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012e52c(void)

{
  int *piVar1;
  short sVar2;
  undefined2 in_v0;
  undefined2 uVar3;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  
  *(undefined2 *)(in_v1 + 0x10) = in_v0;
  *(char *)(*(int *)(unaff_s0 + 0xc0) + 0x3e) = *(char *)(*(int *)(unaff_s0 + 0xc0) + 0x3e) + '\x01'
  ;
  if (unaff_s3 == *(byte *)(unaff_s1 + 9) - 1) {
    FUN_80137be8();
    FUN_80137ab4();
    return;
  }
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
  if (*(short *)(unaff_s1 + 0x6a) == 1) {
    sVar2 = *(short *)(*(int *)(unaff_s1 + 0x10) + 0x76);
    *(short *)(unaff_s1 + 0x6a) = sVar2;
    if (sVar2 == 2) {
      uVar3 = 3;
      if (*(char *)(unaff_s1 + 3) == '\0') {
        *(undefined2 *)(unaff_s1 + 0x6a) = 5;
        if (*(short *)(*(int *)(unaff_s1 + 0x10) + 0x78) == 0) {
          func_0x8004ed94(0x25,0x41);
        }
        uVar3 = 0;
        if (*(short *)(unaff_s1 + 0x42) != 0) {
          return;
        }
        *(undefined2 *)(unaff_s1 + 0x6a) = 4;
      }
      else {
        *(undefined2 *)(unaff_s1 + 0x6a) = 3;
      }
                    /* WARNING: Subroutine does not return */
      *(undefined2 *)(unaff_s1 + 2) = uVar3;
      FUN_801402b8();
    }
    if ((*(char *)(unaff_s1 + 3) != '\0') && (sVar2 == 0)) {
      *(undefined2 *)(unaff_s1 + 0x6a) = 4;
      *(undefined1 *)(*(int *)(unaff_s1 + (*(byte *)(unaff_s1 + 9) - 1) * 4 + 0xc0) + 0x3f) = 8;
      FUN_80137e70();
    }
  }
  return;
}

