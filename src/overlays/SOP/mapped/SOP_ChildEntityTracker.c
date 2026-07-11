// SOP_ChildEntityTracker (SOP_ChildEntityTracker) - Child entity that tracks parent entity position, applies gravity

/* WARNING: Control flow encountered bad instruction data */

void SOP_ChildEntityTracker(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = func_0x0007778c();
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + 0x80;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        sVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
        *(short *)(param_1 + 0x4a) = sVar2;
        if ((*(char *)(param_1 + 1) == '\0') || (sVar2 == 0)) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
        return;
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        *(undefined2 *)(param_1 + 0x4a) = 0xc000;
        *(undefined2 *)(param_1 + 0x50) = 0x400;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
      goto LAB_00002c44;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 5) = 1;
    iVar3 = func_0x0010b44c(*(undefined4 *)(param_1 + 0x10));
    *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar3 + 0x32) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(iVar3 + 0x36) = *(undefined2 *)(param_1 + 0x36);
  }
  if (DAT_800bf9b4 == '\x03') {
    *(undefined2 *)(param_1 + 0x40) = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_00002c44:
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar3 + 0xdc) + 0x2c);
  *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar3 + 0xdc) + 0x30) + 0x14;
  *(short *)(param_1 + 0x36) = *(short *)(*(int *)(iVar3 + 0xdc) + 0x34) + -0x3c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

