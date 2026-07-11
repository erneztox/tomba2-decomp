// FUN_000016cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000016cc(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x145) & 1) == 0) {
    if (*(byte *)(param_1 + 7) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0000172c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef7040))();
      return;
    }
    iVar1 = (uint)*(ushort *)(param_1 + 0x62) << 0x10;
    if ((int)_DAT_1f80019e + ((iVar1 >> 0x10) - (iVar1 >> 0x1f) >> 1) <
        (int)*(short *)(param_1 + 0x32)) {
      *(undefined1 *)(param_1 + 0x148) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  return;
}

