// FUN_0801b538

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b538(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 3) != '\0') {
    if (*(char *)(param_1 + 3) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_0801b61c:
    *(undefined1 *)(param_1 + 0x72) = 0;
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
    uVar2 = *(byte *)(param_2 + 0x2a) - 1;
    if (uVar2 < 0x2c) {
                    /* WARNING: Could not emulate address calculation at 0x0801b650 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar2 * 4 + -0x7fef6914))();
      return;
    }
    return;
  }
  *(undefined1 *)(param_1 + 3) = 1;
  cVar1 = *(char *)(param_2 + 0x2a);
  if (cVar1 == '\x01') {
    _DAT_1f8000d2 = 0x12dc;
    _DAT_1f8000d6 = 0xe83d;
  }
  else if (cVar1 == '%') {
    _DAT_1f8000d2 = 0x15d3;
    _DAT_1f8000d6 = 0xe6af;
  }
  else {
    if (cVar1 != '&') {
      if (cVar1 == '\'') {
        _DAT_1f8000d2 = 0x16f3;
        _DAT_1f8000d6 = 0xdc8b;
        _DAT_1f8000da = 0x2986;
      }
      goto LAB_0801b61c;
    }
    _DAT_1f8000d2 = 0x1c70;
    _DAT_1f8000d6 = 0xe568;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

