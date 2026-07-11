// FUN_80139c2c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80139cf4) */
/* WARNING: Removing unreachable block (ram,0x80139d04) */
/* WARNING: Removing unreachable block (ram,0x80139d14) */
/* WARNING: Removing unreachable block (ram,0x80139d24) */

undefined4 FUN_80139c2c(int param_1)

{
  undefined4 uVar1;
  int unaff_s0;
  
  if ((*(ushort *)(param_1 + 2) & 1) == 0) {
    uVar1 = FUN_80142c04();
    return uVar1;
  }
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
  FUN_801406e4();
  if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_s0 + 0x2c) =
       *(int *)(unaff_s0 + 0x2c) +
       (int)*(short *)(unaff_s0 + 0x48) * (int)*(short *)(unaff_s0 + 0x4e);
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) +
       (int)*(short *)(unaff_s0 + 0x4c) * (int)*(short *)(unaff_s0 + 0x4e);
  return 0xffffffff;
}

