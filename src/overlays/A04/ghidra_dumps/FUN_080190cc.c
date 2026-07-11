// FUN_080190cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080190cc(int param_1)

{
  if (DAT_800e7ee1 != '\0') {
    *(undefined1 *)(param_1 + 0x72) = 0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
  if (*(byte *)(param_1 + 3) < 0x17) {
                    /* WARNING: Could not emulate address calculation at 0x0801912c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef64c4))();
    return;
  }
  if (-0x1a91 < _DAT_1f8000d6) {
    *(undefined1 *)(param_1 + 0x74) = 2;
    _DAT_1f8000d6 = -0x1a90;
    *(undefined2 *)(param_1 + 0x4a) = 0xe570;
  }
  return;
}

