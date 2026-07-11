// FUN_0802d0b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802d0b4(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if ((param_1[3] & 0x80) != 0) {
      iVar3 = func_0x00051b70(param_1,0xc,0x53);
      if (iVar3 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0xa0;
      *(undefined2 *)(param_1 + 0x82) = 0x140;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0x140;
      func_0x000517f8(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = func_0x00051b70(param_1,0xc,(int)*(short *)((uint)(byte)param_1[3] * 2 + -0x7feb86c8));
    if (iVar3 != 0) {
      return;
    }
    uVar2 = 0x80;
    if ((param_1[3] & 2) == 0) {
      uVar2 = 0x60;
    }
    *(undefined2 *)(param_1 + 0x80) = uVar2;
    *(undefined2 *)(param_1 + 0x84) = 0x300;
    *(undefined2 *)(param_1 + 0x86) = 0x300;
    *(short *)(param_1 + 0x82) = *(short *)(param_1 + 0x80) << 1;
    if (param_1[3] == '\0') {
      if (DAT_800bf8d4 == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bf8d4 == -1) {
        param_1[5] = 4;
      }
    }
    *param_1 = 1;
    param_1[4] = param_1[4] + '\x01';
  }
  if ((param_1[3] & 0x80) == 0) {
    uVar2 = 0xe5c0;
    if (((int)(uint)DAT_800bf9ce >> ((byte)param_1[3] & 0x1f) & 1U) == 0) {
      uVar2 = 0xe400;
    }
    *(undefined2 *)(param_1 + 0x32) = uVar2;
    if (DAT_800bf871 == '\x13') {
      param_1[1] = 1;
      func_0x00077ebc(param_1);
      func_0x000517f8(param_1);
    }
  }
  else {
    if (((int)(uint)DAT_800bf9ce >> (param_1[3] & 3) & 1U) == 0) {
      *param_1 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = 1;
    if (DAT_1f800207 == '\x0e') {
      func_0x0007778c(param_1);
      halt_baddata();
    }
  }
  if ((param_1[3] != '\0') || (_DAT_800e7fee == 0)) {
    return;
  }
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    func_0x00126334(param_1,0);
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (DAT_800bf9ce == 4) {
      if (param_1[1] != '\0') {
        func_0x00040b48(0x20);
        param_1[5] = 2;
        halt_baddata();
      }
      return;
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x00126334(param_1,1);
      halt_baddata();
    }
    if (DAT_800bf9ce != 0xf) {
      return;
    }
  }
  func_0x001265e4(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

