// FUN_080213fc

/* WARNING: Control flow encountered bad instruction data */

void FUN_080213fc(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    uVar3 = *(byte *)(param_1 + 3) - 1;
    if (uVar3 < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x08021614 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar3 * 4 + -0x7fef6920))();
      return;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (DAT_800bf816 == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,0);
      if (iVar2 != 0) {
        return;
      }
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0xbf) = 0;
      *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
      *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
      uVar3 = *(byte *)(param_1 + 3) - 1;
      if (uVar3 < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x080214b8 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar3 * 4 + -0x7fef6950))();
        return;
      }
      func_0x000517f8(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

