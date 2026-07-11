// FUN_080232c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080232c4(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(param_1 + 0x76);
  if (iVar2 == 1) {
    if ((*(byte *)(param_1 + 0x2b) & 0x80) == 0) {
      *(undefined2 *)(param_1 + 0x4c) = 0x180;
      *(undefined2 *)(param_1 + 0x48) = 0x180;
    }
    else {
      *(undefined2 *)(param_1 + 0x4c) = 0x200;
      *(undefined2 *)(param_1 + 0x48) = 0x200;
      if (_DAT_800bf858 == 0) {
        func_0x0004cbd8(param_1,0);
        _DAT_800bf858 = iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(undefined2 *)(param_1 + 0x52) = 0xfff8;
    iVar2 = func_0x00077768((uint)*(byte *)(param_1 + 0x46) << 4,(int)*(short *)(param_1 + 0x56),1);
    if (iVar2 != 0) {
      *(short *)(param_1 + 0x4c) = -*(short *)(param_1 + 0x4c);
      *(short *)(param_1 + 0x52) = -*(short *)(param_1 + 0x52);
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
    *(undefined1 *)(param_1 + 0x5f) = 1;
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x00074590(0xf,0xfffffffb,0);
    }
    *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + 1;
  }
  else if (iVar2 < 2) {
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x2b) == '\0') {
        return;
      }
      *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + 1;
    }
  }
  else if (iVar2 == 2) {
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + *(short *)(param_1 + 0x4c);
    iVar2 = *(int *)(param_1 + 0xc0);
    if (((int)*(short *)(iVar2 + 0xc) < -(int)*(short *)(param_1 + 0x48)) ||
       ((int)*(short *)(param_1 + 0x48) < (int)*(short *)(iVar2 + 0xc))) {
      if (0 < *(short *)(param_1 + 0x4c)) {
        *(short *)(iVar2 + 0xc) = *(short *)(param_1 + 0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(iVar2 + 0xc) = -*(short *)(param_1 + 0x48);
      sVar1 = *(short *)(param_1 + 0x48) + -0x18;
      *(short *)(param_1 + 0x48) = sVar1;
      if (sVar1 < 1) {
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
        *(undefined2 *)(param_1 + 0x76) = 0;
        halt_baddata();
      }
      if (sVar1 < 0xa1) {
        *(undefined1 *)(param_1 + 0x5f) = 0;
      }
      *(short *)(param_1 + 0x4c) = -*(short *)(param_1 + 0x4c);
      *(short *)(param_1 + 0x52) = -*(short *)(param_1 + 0x52);
    }
    sVar1 = *(short *)(param_1 + 0x4c) + *(short *)(param_1 + 0x52);
    *(short *)(param_1 + 0x4c) = sVar1;
    if (0x5e < (ushort)(sVar1 - 1U)) {
      if ((sVar1 < 0) && (-0x60 < sVar1)) {
        *(undefined2 *)(param_1 + 0x4c) = 0xffa0;
      }
      if (*(char *)(param_1 + 0x2b) != '\0') {
        *(undefined2 *)(param_1 + 0x76) = 1;
      }
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

