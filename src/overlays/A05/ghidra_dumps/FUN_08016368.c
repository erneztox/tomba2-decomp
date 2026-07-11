// FUN_08016368

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016368(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 0x29) = 1;
    func_0x00076d68(param_1);
    if (*(byte *)(param_1 + 7) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x080163d8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef6a0c))();
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00076d68(param_1);
    if (*(char *)(param_1 + 7) == '\0') {
      if (DAT_800bf80f == '\0') {
        *(undefined1 *)(param_1 + 7) = 1;
        *(undefined2 *)(param_1 + 0x40) = 0x78;
        halt_baddata();
      }
    }
    else {
      if (*(char *)(param_1 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar1 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar1 + -1;
      if (sVar1 == 1) {
        DAT_1f800137 = 0;
        *(undefined1 *)(param_1 + 5) = 0x20;
        *(undefined1 *)(param_1 + 6) = 0;
      }
    }
    func_0x00065478(param_1,0);
  }
  return;
}

