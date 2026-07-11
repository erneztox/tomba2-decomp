// FUN_8011c998

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011c998(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 in_v0;
  int iVar2;
  undefined1 *unaff_s0;
  undefined1 unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x62) = in_v0;
  *(short *)(unaff_s0 + 100) = *(short *)(param_1 * 0xc + param_2 + 4) - *(short *)(unaff_s0 + 0x36)
  ;
  unaff_s0[0x5f] = *(undefined1 *)(param_1 * 0xc + param_2 + 6);
  uVar1 = *(ushort *)(param_1 * 0xc + param_2 + 8);
  *(ushort *)(unaff_s0 + 0x82) = uVar1;
  iVar2 = (uint)uVar1 << 0x10;
  *(short *)(unaff_s0 + 0x80) = (short)((iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1);
  uVar1 = *(ushort *)(param_1 * 0xc + param_2 + 10);
  *unaff_s0 = unaff_s1;
  *(ushort *)(unaff_s0 + 0x86) = uVar1;
  iVar2 = (uint)uVar1 << 0x10;
  *(short *)(unaff_s0 + 0x84) = (short)((iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1);
  unaff_s0[0x29] = 0;
  *(undefined2 *)(unaff_s0 + 0x50) = 0;
  *(undefined2 *)(unaff_s0 + 0x5a) = *(undefined2 *)(unaff_s0 + 0x56);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(unaff_s0[3]) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

