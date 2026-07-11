// FUN_8010cf90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011f07c) */
/* WARNING: Removing unreachable block (ram,0x80127e08) */
/* WARNING: Removing unreachable block (ram,0x80127e18) */
/* WARNING: Removing unreachable block (ram,0x02002820) */
/* WARNING: Removing unreachable block (ram,0x80128160) */
/* WARNING: Removing unreachable block (ram,0x8012817c) */
/* WARNING: Removing unreachable block (ram,0x80127dec) */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010cf90(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *unaff_s0;
  undefined4 *puVar3;
  int unaff_s1;
  byte *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s6;
  
  if (*(byte *)(unaff_s1 + 0x87) == unaff_s3) {
    *(undefined1 *)((int)unaff_s0 + 6) = 0;
    *(undefined1 *)((int)unaff_s0 + 7) = 1;
    *(undefined1 *)((int)unaff_s0 + 0x29) = 0;
    FUN_801280d4();
    return;
  }
  do {
    iVar2 = func_0x80072ddc();
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x2c) = (int)*(short *)(unaff_s0 + -2) << 0x10;
      *(int *)(iVar2 + 0x30) = (int)*(short *)((int)unaff_s0 + -6) << 0x10;
      *(int *)(iVar2 + 0x34) = (int)*(short *)(unaff_s0 + -1) << 0x10;
      uVar1 = *(undefined1 *)((int)unaff_s0 + -9);
      *(undefined2 *)(iVar2 + 0x54) = 0;
      *(undefined2 *)(iVar2 + 0x56) = 0;
      *(undefined2 *)(iVar2 + 0x58) = 0;
      *(undefined1 *)(iVar2 + 3) = uVar1;
      *(undefined4 *)(iVar2 + 0x1c) = *unaff_s0;
      if (unaff_s6 != 0) {
        *(int *)(unaff_s4 + *(short *)(unaff_s4 + 8) * 4 + 0xc) = iVar2;
        *(short *)(unaff_s4 + 8) = *(short *)(unaff_s4 + 8) + 1;
      }
    }
    do {
      puVar3 = unaff_s0;
      unaff_s2 = unaff_s2 + 0x10;
      unaff_s0 = puVar3 + 4;
      if (*unaff_s2 == unaff_s3) {
        return;
      }
    } while ((unaff_s6 != 0) && (0xe < *(short *)(unaff_s4 + 8)));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)((int)puVar3 + 0xe)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

