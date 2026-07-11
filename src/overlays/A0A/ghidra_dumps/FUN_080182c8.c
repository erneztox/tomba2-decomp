// FUN_080182c8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080182c8(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0x10);
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
    *(undefined2 *)(param_1 + 0x48) = 0xc0;
    *(undefined2 *)(param_1 + 0x4a) = 0xc0;
    *(undefined2 *)(param_1 + 0x32) = 0xfff6;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0x8011bf30;
    *(undefined4 *)(param_1 + 0x34) = 0x8011bf30;
  }
  *(short *)(param_1 + 0x2c) =
       *(short *)(iVar2 + 0x2e) +
       (short)((uint)(*(short *)(*(int *)(iVar2 + 0xc0) + 0x1a) * 5) >> 8);
  *(short *)(param_1 + 0x2e) =
       *(short *)(iVar2 + 0x32) +
       (short)((uint)(*(short *)(*(int *)(iVar2 + 0xc0) + 0x20) * 5) >> 8);
  *(short *)(param_1 + 0x30) =
       *(short *)(iVar2 + 0x36) +
       (short)((uint)(*(short *)(*(int *)(iVar2 + 0xc0) + 0x26) * 5) >> 8);
  *(char *)(param_1 + 7) = -0x80 - *(char *)(iVar2 + 0x18);
  if (1 < *(byte *)(iVar2 + 4)) {
    return;
  }
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

