// FUN_0801ae40

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ae40(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined1 *)(param_1 + 3) = 1;
    cVar1 = *(char *)(param_2 + 0x2a);
    if (cVar1 == '\x01') {
      _DAT_1f8000d2 = 0x167f;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (cVar1 == '\x05') {
      _DAT_1f8000d2 = 0x2eff;
      _DAT_1f8000da = 0xb1c;
      _DAT_1f8000d6 = *(short *)(param_2 + 0x32) + -600;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (cVar1 == '%') {
      _DAT_1f8000d2 = 0x18bf;
      _DAT_1f8000d6 = 0xe92e;
      _DAT_1f8000da = 0x253d;
    }
  }
  else if (*(char *)(param_1 + 3) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
  uVar2 = *(byte *)(param_2 + 0x2a) - 1;
  if (uVar2 < 0x25) {
                    /* WARNING: Could not emulate address calculation at 0x0801af34 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 * 4 + -0x7fef6a44))();
    return;
  }
  return;
}

