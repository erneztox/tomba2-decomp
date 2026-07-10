// FUN_00003fd0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00003fd0(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
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
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  uVar4 = _DAT_1f800164;
  uVar3 = _DAT_1f800162;
  uVar2 = _DAT_1f800160;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -10;
  *(undefined2 *)(param_1 + 0x2c) = uVar2;
  *(undefined2 *)(param_1 + 0x2e) = uVar3;
  *(undefined2 *)(param_1 + 0x30) = uVar4;
  if (DAT_800bfa55 < 4) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

