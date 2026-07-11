// FUN_080181bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080181bc(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
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
    *(undefined1 *)(param_1 + 4) = 1;
    uVar3 = _DAT_8011bc2a;
    uVar2 = _DAT_8011bc28;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined2 *)(param_1 + 0x44) = uVar2;
    *(undefined2 *)(param_1 + 0x46) = uVar3;
  }
  if (*(byte *)(iVar5 + 4) < 2) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0x8011bc2c;
      *(undefined4 *)(param_1 + 0x34) = 0x8011bc2c;
    }
    if (((uint)*(byte *)(iVar5 + 0x72) & *(uint *)(param_1 + 0x50)) == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0x54);
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar5 + 0x2e);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar5 + 0x32);
    *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(iVar5 + 0x36);
    *(short *)(param_1 + 0x2c) =
         *(short *)(param_1 + 0x2c) + (short)(*(short *)(iVar5 + 0x9c) * iVar4 >> 0xc);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_1 + 0x2e) + (short)(*(short *)(iVar5 + 0xa2) * iVar4 >> 0xc);
    *(short *)(param_1 + 0x30) =
         *(short *)(param_1 + 0x30) + (short)(*(short *)(iVar5 + 0xa8) * iVar4 >> 0xc);
    *(short *)(param_1 + 0x2c) =
         *(short *)(param_1 + 0x2c) + (short)(*(short *)(iVar5 + 0x98) * -0x6e >> 0xc);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_1 + 0x2e) + (short)(*(short *)(iVar5 + 0x9e) * -0x6e >> 0xc);
    *(short *)(param_1 + 0x30) =
         *(short *)(param_1 + 0x30) + (short)(*(short *)(iVar5 + 0xa4) * -0x6e >> 0xc);
    *(short *)(param_1 + 0x2c) =
         *(short *)(param_1 + 0x2c) + (short)(*(short *)(iVar5 + 0x9a) * 3 >> 6);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_1 + 0x2e) + (short)(*(short *)(iVar5 + 0xa0) * 3 >> 6);
    *(short *)(param_1 + 0x30) =
         *(short *)(param_1 + 0x30) + (short)(*(short *)(iVar5 + 0xa6) * 3 >> 6);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 4) = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

