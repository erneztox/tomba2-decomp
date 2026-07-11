// FUN_0801e1f0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801e1f0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 3) < 0xe) {
                    /* WARNING: Could not emulate address calculation at 0x0801e3d0 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef69fc))();
      return;
    }
    iVar2 = func_0x0007778c(param_1);
    if ((iVar2 != 0) && (*(char *)(param_1 + 0x5e) == '\0')) {
      func_0x000517f8(param_1);
    }
    if (DAT_800bf816 != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
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
      iVar2 = func_0x00051b70(param_1,0xc,*(undefined1 *)(*(byte *)(param_1 + 3) + 0x80129bf4));
      if (iVar2 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0x5e) = 2;
      *(undefined2 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined1 *)(param_1 + 0xbf) = 1;
      *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 0x80;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x56);
      if (*(byte *)(param_1 + 3) < 0xe) {
                    /* WARNING: Could not emulate address calculation at 0x0801e2b8 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6a34))();
        return;
      }
      func_0x000517f8(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

