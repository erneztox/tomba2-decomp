// FUN_801257b0

/* WARNING: Control flow encountered bad instruction data */

void FUN_801257b0(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      FUN_8012e858();
      return;
    }
    *(undefined4 *)(param_1 + 0x50) = 0x80138184;
    *(undefined4 *)(param_1 + 0x5c) = 0x7f;
    *(int *)(param_1 + 0x3c) = param_1 + 0x54;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0x101010;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xff74;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  if (0x80807f < (*(uint *)(param_1 + 0x54) & 0xffffff)) {
    *(undefined1 *)(param_1 + 4) = 2;
    FUN_8012e858();
    return;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  uVar2 = *(uint *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) & 0xffffff;
  *(uint *)(param_1 + 0x54) = uVar2;
  *(uint *)(param_1 + 0x54) = uVar2 | *(int *)(param_1 + 0x5c) << 0x18;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x10101;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -5;
  FUN_8012e858();
  return;
}

