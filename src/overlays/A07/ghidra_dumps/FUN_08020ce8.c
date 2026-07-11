// FUN_08020ce8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08020ce8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    if (((int)(short)_DAT_800e7eea & 0xf000U) != 0x2000) {
      return;
    }
    if ((_DAT_800e7eea & 0x1f) != (ushort)*(byte *)(param_1 + 3)) {
      return;
    }
    if (DAT_800e7ffb != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    iVar2 = (int)*(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7feccf20);
    if (iVar2 == -1) {
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    else {
      uVar1 = func_0x0007e038(iVar2,2);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    if (*(short *)(param_1 + 0x40) != 0) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    }
    if ((((int)(short)_DAT_800e7eea & 0xf000U) != 0x2000) && (*(short *)(param_1 + 0x40) == 0)) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      *(undefined1 *)(param_1 + 6) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

