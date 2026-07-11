// FUN_80111b34

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80111b34(void)

{
  int iVar1;
  undefined2 *unaff_s0;
  undefined2 *puVar2;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  func_0x800518fc();
  *(undefined1 *)((int)unaff_s0 + 0x2b) = 0;
  while( true ) {
    *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 2) = *unaff_s0;
    *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 4) = unaff_s0[1];
    *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 8) = unaff_s0[2];
    *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 10) = unaff_s0[3];
    *(undefined2 *)(*(int *)(unaff_s1 + 0xc0) + 0xc) = unaff_s0[4];
    *(int *)(*(int *)(unaff_s1 + 0xc0) + 0x40) =
         unaff_s4 + *(int *)((short)unaff_s0[5] * 4 + unaff_s5);
    if ((int)(uint)*(byte *)(unaff_s3 + 8) <= unaff_s2) break;
    unaff_s2 = unaff_s2 + 1;
    iVar1 = func_0x8007aae8();
    *(int *)(unaff_s1 + 0xc4) = iVar1;
    puVar2 = unaff_s0 + 7;
    *(undefined2 *)(iVar1 + 6) = unaff_s0[6];
    unaff_s0 = unaff_s0 + 8;
    **(undefined2 **)(unaff_s1 + 0xc4) = *puVar2;
    unaff_s1 = unaff_s1 + 4;
  }
  *(undefined2 *)(unaff_s3 + 0x54) = 0;
  *(undefined2 *)(unaff_s3 + 0x58) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(unaff_s3 + 3)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

