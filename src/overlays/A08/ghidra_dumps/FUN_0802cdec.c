// FUN_0802cdec

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802cdec(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    if ((DAT_800bfa3f & 0x10) != 0) {
      *(short *)(*(int *)(param_1 + 0xd0) + 2) = *(short *)(*(int *)(param_1 + 0xd0) + 2) + -4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(*(int *)(param_1 + 0xd0) + 2) + -4;
    *(short *)(*(int *)(param_1 + 0xd0) + 2) = sVar1;
    if (sVar1 < -0x2dc) {
      *(undefined2 *)(*(int *)(param_1 + 0xd0) + 2) = 0xfd24;
      *(undefined1 *)(param_1 + 6) = 10;
    }
  }
  if (DAT_800e8001 != '\0') {
    *(undefined1 *)(param_1 + 0xbf) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0xbf) = 1;
  if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802ced8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6214))
              (param_1,*(undefined4 *)(param_1 + 0xc4));
    return;
  }
  if (DAT_800e8001 != '\0') {
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0;
  }
  return;
}

