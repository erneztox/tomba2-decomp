// FUN_0802af2c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802af2c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x0004190c(param_1);
    bVar1 = param_1[6];
    if (bVar1 == 1) {
      if ((DAT_800bfa4e == '\x02') && (DAT_800bfa48 == '\0')) {
        func_0x00040cdc(param_1,0x8001b4dc,0x8014179c);
        return;
      }
      func_0x00040cdc(param_1,0x8001b4dc,0x8014182c);
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (param_1[0x2b] == '\x03') {
        param_1[6] = 1;
        func_0x00042354(1,3);
        halt_baddata();
      }
    }
    else if (bVar1 == 2) {
      func_0x00041098(param_1);
      if (param_1[0x70] == -1) {
        param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x00041098(param_1);
      if (param_1[0x70] == -1) {
        param_1[4] = 3;
        func_0x00042310();
      }
    }
    func_0x000518fc(param_1);
    param_1[0x2b] = 0;
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
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x80141724);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecff8;
      func_0x00077c40(param_1,0x8001b4dc,0);
      *(undefined2 *)(param_1 + 0xb8) = 0x800;
      *(undefined2 *)(param_1 + 0xba) = 0x800;
      *(undefined2 *)(param_1 + 0xbc) = 0x800;
      *(undefined2 *)(param_1 + 0x56) = 0xc00;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 0x50;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x90;
      param_1[0x2b] = 0;
      param_1[4] = param_1[4] + '\x01';
      func_0x00051b04(*(undefined4 *)(param_1 + 0xec),0xf,0xf);
      func_0x00051b04(*(undefined4 *)(param_1 + 0xf0),0xf,0x10);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

