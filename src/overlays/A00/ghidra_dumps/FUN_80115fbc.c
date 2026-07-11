// FUN_80115fbc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80115fbc(void)

{
  undefined1 uVar1;
  short in_v0;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int unaff_s0;
  undefined2 unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  if (in_v0 != 0) {
    *(undefined2 *)(unaff_s0 + 0x42) = unaff_s1;
    uVar2 = *(ushort *)(unaff_s0 + 0x66) & 0xfff;
    *(ushort *)(unaff_s0 + 0x66) = uVar2;
    *(ushort *)(unaff_s0 + 0x56) = uVar2;
    *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  }
  *(short *)(unaff_s0 + 0x32) =
       *(short *)(unaff_s0 + 0x32) - (short)(char)((ushort)*(undefined2 *)(unaff_s0 + 0x4a) >> 8);
  *(short *)(unaff_s0 + 0x40) =
       *(short *)(unaff_s0 + 0x40) - (short)(char)((ushort)*(undefined2 *)(unaff_s0 + 0x4a) >> 8);
  if ((*(short *)(unaff_s0 + 0x4a) != 0) || (*(short *)(unaff_s0 + 0x42) == 0)) {
    if ((int)*(short *)(unaff_s0 + 0x40) * (int)*(short *)(unaff_s0 + 0x4a) < 1) {
      *(undefined2 *)(unaff_s0 + 0x4a) = 0;
      uVar3 = *(undefined2 *)
               (*(int *)((uint)*(byte *)(unaff_s0 + 3) * 4 + -0x7feb6ba0) +
               *(short *)(unaff_s0 + 0x6c) * 6 + 2);
      *(undefined2 *)(unaff_s0 + 0x40) = 1;
      *(undefined2 *)(unaff_s0 + 0x32) = uVar3;
    }
    return;
  }
  uVar3 = FUN_8011fd94();
  *(undefined2 *)(unaff_s0 + 0x66) = uVar3;
  iVar5 = unaff_s0;
  uVar3 = FUN_801214ac();
  *(undefined2 *)(unaff_s0 + 0x50) = uVar3;
  *(undefined1 *)(unaff_s0 + 5) = 0;
  if (*(char *)(unaff_s0 + 3) == '\0') {
    iVar4 = 3;
    *(undefined1 *)(unaff_s0 + 6) = 3;
    *(undefined1 *)(unaff_s0 + 7) = 0;
  }
  else {
    iVar4 = 1;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    *(undefined1 *)(unaff_s0 + 7) = 1;
  }
  if (iVar4 != 0) {
    *(undefined1 *)(unaff_s0 + 0x29) = 0;
    FUN_801280d4();
    return;
  }
  *(short *)(unaff_s0 + 0x60) = (short)iVar5 + 1;
  uVar1 = 0x5a;
  *(undefined2 *)(unaff_s0 + 0x62) = 0x5a;
  while( true ) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(uVar1) {
    case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    unaff_s3 = unaff_s3 + 1;
    unaff_s2 = unaff_s2 + 1;
    if (3 < unaff_s3 * 0x10000 >> 0x10) break;
    uVar1 = *(undefined1 *)(*(int *)(unaff_s0 + (unaff_s2 * 0x10000 >> 0xe) + 0xc0) + 0x3e);
  }
  return;
}

