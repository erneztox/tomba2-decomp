// FUN_08029308

/* WARNING: Control flow encountered bad instruction data */

void FUN_08029308(int param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x71) == -1) {
    if (*(char *)(param_1 + 0x5e) == '\x01') {
      *(undefined1 *)(param_1 + 0x5e) = 2;
      DAT_800bf939 = DAT_800bf939 | 0x20;
    }
    *(undefined1 *)(param_1 + 5) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(char *)(param_1 + 0x5e) == '\x01') && (uVar1 = *(byte *)(param_1 + 6) - 1, uVar1 < 0x11)) {
                    /* WARNING: Could not emulate address calculation at 0x08029394 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar1 * 4 + -0x7fef66cc))();
    return;
  }
  return;
}

