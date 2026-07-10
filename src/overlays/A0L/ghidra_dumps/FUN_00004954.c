// FUN_00004954

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00004954(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (DAT_800bf841 == '\0') {
      sVar2 = *(short *)(param_1 + 0x50) + 0x40;
      *(short *)(param_1 + 0x50) = sVar2;
      iVar4 = func_0x00083e80((int)sVar2);
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar4 * 0x20;
      func_0x0004190c(param_1);
    }
    if (DAT_800bf871 == 4) {
      if ((*(char *)(param_1 + 5) == '\x01') &&
         (sVar2 = *(short *)(param_1 + 0x32) + -8, *(short *)(param_1 + 0x32) = sVar2,
         sVar2 < -0x833)) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (4 < DAT_800bf871) {
      if (DAT_800bf871 != 5) {
        halt_baddata();
      }
      uVar3 = func_0x00085690((int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164,
                              (int)_DAT_1f800160 - (int)*(short *)(param_1 + 0x2e));
      *(ushort *)(param_1 + 0x56) = uVar3 & 0xfff;
    }
    func_0x000518fc(param_1);
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
      iVar4 = func_0x000519e0(param_1,0xc,_DAT_800ecfa0,0x800a4bc8);
      if (iVar4 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfa4;
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)((uint)DAT_800bf871 * 2 + -0x7feea34c);
      func_0x00040cdc(param_1,0x8011b154,*(undefined4 *)((uint)DAT_800bf871 * 4 + -0x7feea364));
      func_0x00041718(param_1,0,0);
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0x88;
      *(undefined2 *)(param_1 + 0x86) = 0x110;
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(undefined2 *)(param_1 + 0xb8) = 0xc00;
      *(undefined2 *)(param_1 + 0xba) = 0xc00;
      *(undefined2 *)(param_1 + 0xbc) = 0xc00;
      *(undefined2 *)(param_1 + 0x50) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

