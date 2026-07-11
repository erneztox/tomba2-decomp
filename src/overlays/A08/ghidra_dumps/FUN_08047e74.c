// FUN_08047e74

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08047e74(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x000517f8(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,0x41);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 0x88;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      func_0x000517f8(param_1);
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x000517f8(param_1);
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      if (param_1[6] != '\0') {
        return;
      }
      *(undefined2 *)(param_1 + 0x84) = 0x5a;
      *(undefined2 *)(param_1 + 0x86) = 0x50;
      param_1[6] = param_1[6] + '\x01';
    }
    else {
      if (bVar1 == 0) {
        return;
      }
      if (3 < bVar1) {
        return;
      }
      func_0x00042354(1,1);
      _DAT_800e7eae = 0x3f01;
      _DAT_800e7eb6 = 0x1e3f;
      DAT_800bfa44 = DAT_800bfa44 | 2;
      func_0x0004d4c4(0x1b,1);
      func_0x0004b0d8(param_1);
      func_0x00040b48(0x30);
      param_1[4] = 3;
    }
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

