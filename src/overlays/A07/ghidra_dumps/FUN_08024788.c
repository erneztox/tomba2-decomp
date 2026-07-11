// FUN_08024788

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024788(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x0004190c(param_1);
    bVar1 = param_1[6];
    if (bVar1 == 1) {
      if ((DAT_800bfa4e == '\x02') && (DAT_800bfa48 == '\x02')) {
        func_0x00040cdc(param_1,0x8001b4dc,0x801332ec);
        DAT_800bfa4e = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00040cdc(param_1,0x8001b4dc,0x8013339c);
      param_1[6] = param_1[6] + '\x01';
      param_1[0x70] = 1;
      halt_baddata();
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
      iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfe8,0x80133274);
      if (iVar2 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfe4;
      func_0x00077c40(param_1,0x8001b4dc,0);
      *(undefined2 *)(param_1 + 0xb8) = 0x800;
      *(undefined2 *)(param_1 + 0xba) = 0x800;
      *(undefined2 *)(param_1 + 0xbc) = 0x800;
      *(undefined2 *)(param_1 + 0x56) = 0x800;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 100;
      *(undefined2 *)(param_1 + 0x82) = 200;
      *(undefined2 *)(param_1 + 0x84) = 0x50;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x90;
      param_1[0x2b] = 0;
      param_1[4] = param_1[4] + '\x01';
      func_0x00051b04(*(undefined4 *)(param_1 + 0xec),0x24,0x11);
      func_0x00051b04(*(undefined4 *)(param_1 + 0xf0),0x24,0x12);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

