// FUN_0803f7bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0803f8d4) */
/* WARNING: Removing unreachable block (ram,0x0803f8e8) */

void FUN_0803f7bc(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0x3c;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  uVar2 = *(int *)(param_1 + 0x54) + 1;
  *(uint *)(param_1 + 0x54) = uVar2;
  if (0x1b7 < uVar2) {
    if ((0x1d5 < uVar2) && (0x1f7 < uVar2)) {
      *(undefined1 *)(param_1 + 4) = 2;
    }
    uVar2 = *(int *)(param_1 + 0x54) - 0x1b8;
    if (uVar2 < 0x35) {
                    /* WARNING: Could not emulate address calculation at 0x0803f868 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar2 * 4 + -0x7fef5e30))();
      return;
    }
  }
  return;
}

