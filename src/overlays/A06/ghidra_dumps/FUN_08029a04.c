// FUN_08029a04

/* WARNING: Control flow encountered bad instruction data */

void FUN_08029a04(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[3];
    if (bVar1 == 2) {
      if (param_1[5] == '\0') {
        func_0x00122724(param_1);
        halt_baddata();
      }
    }
    else {
      if (bVar1 < 3) {
        func_0x00122524(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
    }
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 != 0) {
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      bVar1 = param_1[3];
      if (bVar1 == 2) {
        iVar3 = func_0x00051b70(param_1,0xc,0x2b);
        if (iVar3 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x80) = 0xe0;
        *(undefined2 *)(param_1 + 0x82) = 0x1c0;
        *(undefined2 *)(param_1 + 0x84) = 0x10;
        *(undefined2 *)(param_1 + 0x86) = 0x40;
        *(undefined2 *)(param_1 + 0x56) = 0x800;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[4] = param_1[4] + '\x01';
        if ((DAT_800bfa1d & 4) == 0) {
          return;
        }
        param_1[5] = 1;
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x40;
        halt_baddata();
      }
      if (bVar1 < 3) {
        iVar3 = func_0x00051b70(param_1,0xc,0x29);
        if (iVar3 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x80) = 100;
        *(undefined2 *)(param_1 + 0x82) = 200;
        *(undefined2 *)(param_1 + 0x84) = 0x9a;
        *(undefined2 *)(param_1 + 0x86) = 0x9a;
        *param_1 = 1;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[4] = param_1[4] + '\x01';
        if ((param_1[3] == '\x01') && (DAT_800bf932 < 2)) {
          func_0x00040b48(0x7e);
          uVar2 = *(undefined2 *)(param_1 + 0x36);
          *(undefined2 *)(param_1 + 0x36) = 0x21a0;
          param_1[0x5e] = 1;
          param_1[0x5f] = 0;
          param_1[5] = 4;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x20;
          *(undefined2 *)(param_1 + 0x74) = uVar2;
        }
        else {
          param_1[0x5e] = 0;
          if (param_1[3] != DAT_800bfa10) {
            return;
          }
          param_1[5] = 2;
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 100;
        }
      }
      else if (bVar1 == 3) {
        iVar3 = func_0x00051b70(param_1,0xc,0x46);
        if (iVar3 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x80) = 100;
        *(undefined2 *)(param_1 + 0x82) = 200;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x84) = 0x4d;
        *(undefined2 *)(param_1 + 0x86) = 0x4d;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x42) = 0;
        param_1[4] = param_1[4] + '\x01';
      }
    }
  }
  else if (bVar1 == 2) {
    if (param_1[3] == '\x03') {
      func_0x00122878(param_1);
    }
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 == 0) {
      return;
    }
    func_0x000517f8(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

