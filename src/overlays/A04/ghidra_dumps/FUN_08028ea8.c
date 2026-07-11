// FUN_08028ea8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028ea8(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[0x2b] != '\0') {
      param_1[0x2b] = 0;
      func_0x00040b48(0x15);
    }
    if ((DAT_1f800207 - 0x10 < 6) && (_DAT_1f8000f2 < 0x400)) {
      func_0x0007703c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0007778c(param_1);
    if (param_1[1] == '\0') {
      return;
    }
    func_0x000518fc(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = func_0x00051b70(param_1,0xc,0x1d);
      if (iVar2 != 0) {
        return;
      }
      **(undefined2 **)(param_1 + 0xc0) = 0xff18;
      *(undefined2 *)(param_1 + 0x80) = 0xfa;
      *(undefined2 *)(param_1 + 0x82) = 500;
      *(undefined2 *)(param_1 + 0x84) = 0x4e2;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 0x578;
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    func_0x0007778c(param_1);
    func_0x000518fc(param_1);
    func_0x00121cc8(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

