// FUN_0801b17c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b17c(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined1 *)(param_1 + 3) = 1;
    if (*(byte *)(param_2 + 0x2a) < 6) {
      _DAT_1f8000d2 = 0x3860;
      _DAT_1f8000da = 0x9b5;
      _DAT_1f8000d6 = *(short *)(param_2 + 0x32) + -600;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(byte *)(param_2 + 0x2a) == 0xf) {
      _DAT_1f8000d2 = 0x430f;
      _DAT_1f8000d6 = 0xda24;
      _DAT_1f8000da = 0x965;
    }
  }
  else if (*(char *)(param_1 + 3) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
  uVar1 = *(byte *)(param_2 + 0x2a) - 4;
  if (uVar1 < 0x26) {
                    /* WARNING: Could not emulate address calculation at 0x0801b250 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar1 * 4 + -0x7fef69ac))();
    return;
  }
  return;
}

