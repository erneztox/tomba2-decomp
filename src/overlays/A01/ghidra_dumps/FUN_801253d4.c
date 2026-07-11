// FUN_801253d4

/* WARNING: Control flow encountered bad instruction data */

void FUN_801253d4(int param_1)

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
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x50) = 0x801382c8;
    *(undefined4 *)(param_1 + 0x58) = 0xc0000;
    *(undefined4 *)(param_1 + 0x5c) = 0x7f;
    *(int *)(param_1 + 0x3c) = param_1 + 0x54;
    *(undefined2 *)(param_1 + 0x32) = 0xff74;
    *(undefined2 *)(param_1 + 0x2c) = 0x1abf;
    *(undefined2 *)(param_1 + 0x2e) = 0xe5b9;
    *(undefined4 *)(param_1 + 0x54) = 0x22020;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x30) = 0x24a4;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if ((*(uint *)(param_1 + 0x54) & 0xffffff) < 0x200000) {
    *(undefined1 *)(param_1 + 1) = 1;
    uVar2 = *(uint *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) & 0xffffff;
    *(uint *)(param_1 + 0x54) = uVar2;
    *(uint *)(param_1 + 0x54) = uVar2 | *(int *)(param_1 + 0x5c) << 0x18;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -0x12;
    if (*(uint *)(param_1 + 0x58) < 0x70000) {
      return;
    }
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) - 0x30000;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

