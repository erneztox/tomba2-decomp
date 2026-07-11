// FUN_0803928c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803928c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[0x5e];
    if (bVar1 == 1) {
      func_0x00131bc4(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x001310d8(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x001320b4(param_1);
      if (param_1[1] != '\0') {
        func_0x000518fc(param_1);
      }
      param_1[0x2b] = 0;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[3] == '\0') {
      iVar2 = func_0x000519e0(param_1,0xb,_DAT_800ecfa0,0x8014168c);
      if (iVar2 == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0xaa;
        *(undefined2 *)(param_1 + 0x82) = 0x154;
        *(undefined2 *)(param_1 + 0x84) = 0x154;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (param_1[3] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = func_0x000519e0(param_1,0xc,_DAT_800ecfa0,0x8014168c);
      if (iVar2 == 0) {
        func_0x00051b04(*(undefined4 *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0),0x12,0xb);
        *(undefined2 *)(param_1 + 0x80) = 0x96;
        *(undefined2 *)(param_1 + 0x82) = 300;
        *(undefined2 *)(param_1 + 0x84) = 300;
        *(undefined2 *)(param_1 + 0x86) = 900;
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfa8;
        func_0x00040cdc(param_1,0x80148e68,0x800a3d18);
        param_1[0x7b] = 0;
        func_0x00041718(param_1,0,0);
        *param_1 = 9;
        *(undefined2 *)(param_1 + 0x56) = 0x92e;
        param_1[0x2b] = 0;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        if (param_1[3] != '\x01') {
          param_1[0x5e] = 0;
          param_1[3] = 2;
          param_1[4] = param_1[4] + '\x01';
          halt_baddata();
        }
        if (DAT_800bf8e2 == -1) {
          param_1[0x5e] = 2;
        }
        else {
          param_1[0x5e] = 1;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

