// FUN_08038e6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08038e6c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,0x2f);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0xa0;
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
    if ((byte)param_1[5] < 2) {
      return;
    }
    if (3 < (byte)param_1[5]) {
      return;
    }
    if (DAT_800e7eee != '\0') {
      func_0x0004bec4();
    }
    func_0x0011b79c(_DAT_1f800214);
    func_0x0004d4c4(0x2d,1);
    func_0x0004b0d8(param_1);
    func_0x00040b48(0x14);
    param_1[4] = 3;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

