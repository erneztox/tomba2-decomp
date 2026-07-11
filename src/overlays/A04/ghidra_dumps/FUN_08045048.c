// FUN_08045048

/* WARNING: Control flow encountered bad instruction data */

void FUN_08045048(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x0003116c(0x503,param_1 + 0x2c,0xffffffe2);
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      if (*(int *)(param_1 + 0x10) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = 0;
      }
      func_0x0007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar3 = func_0x00051b70(param_1,0xc,0x21);
    if (iVar3 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x80) = 0x38;
    *(undefined2 *)(param_1 + 0x82) = 0x70;
    *(undefined2 *)(param_1 + 0x84) = 0x8c;
    *param_1 = 1;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x86) = 0xf0;
    param_1[4] = 1;
    param_1[5] = 0;
  }
  if (DAT_1f800137 != '\0') {
    return;
  }
  if (param_1[3] == '\x01') {
    func_0x0013decc(param_1);
  }
  else {
    if (param_1[5] == '\0') {
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      *(undefined2 *)(param_1 + 0x54) = 0x400;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[5] = 1;
    }
    else if (param_1[5] != '\x01') {
      halt_baddata();
    }
    uVar2 = *(ushort *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x40) = uVar2 - 1;
    if (0 < (int)((uint)uVar2 << 0x10)) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x100;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x52) * 0x100;
      func_0x0004766c(param_1);
      iVar3 = func_0x000495dc(param_1,(int)*(short *)(param_1 + 0x80),0);
      if (iVar3 == 0) {
        iVar3 = func_0x00116b48(param_1);
        if (iVar3 == 0) {
          return;
        }
        func_0x000517f8(param_1);
      }
      else {
        *param_1 = 2;
        param_1[4] = 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = 2;
    param_1[4] = 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

