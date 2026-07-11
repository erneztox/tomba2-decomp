// FUN_0802e6d4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802e6d4(int param_1)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = *(byte *)(param_1 + 5) - 1;
  if (uVar2 < 0xe) {
                    /* WARNING: Could not emulate address calculation at 0x0802e70c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar2 * 4 + -0x7fef6010))();
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0x501;
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined2 *)(param_1 + 6) = 1;
    if ((*(int *)(*(int *)(param_1 + 0xfc) + 0x40) != 0) &&
       ((*(char *)(param_1 + 5) == '\x03' || (*(char *)(param_1 + 5) == '\x04')))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x71) = 0x1c;
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    halt_baddata();
  }
  sVar1 = func_0x00125d5c(param_1,*(undefined1 *)(param_1 + 0x71),0x85a);
  if (sVar1 != 0) {
    uVar2 = func_0x0009a450();
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*(int *)(param_1 + 0xfc) + 0x40) == 0) {
        *(undefined4 *)(param_1 + 4) = 0xe01;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0x601;
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = 1;
      uVar2 = func_0x0009a450();
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)((uVar2 & 7) + 0x80141904);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

