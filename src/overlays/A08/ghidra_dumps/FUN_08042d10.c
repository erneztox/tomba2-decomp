// FUN_08042d10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08042d10(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[0x5e];
    if (bVar1 == 1) {
      func_0x0013b32c(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0013b1dc(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0013b9f8(param_1);
    }
    else if (bVar1 == 3) {
      func_0x0013bb64(param_1);
      if (param_1[1] == '\0') {
        return;
      }
      func_0x000518fc(param_1);
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
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x801414ac);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x80148790,0x800a3d18);
      param_1[0x7b] = 0;
      func_0x00041718(param_1,0,0);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x86) = 0x180;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x42) = 0;
      param_1[0xb] = param_1[0xb] & 0xc0 | 0x80;
      if (DAT_800bfa43 == 1) {
        *(undefined2 *)(param_1 + 0x2e) = 0x3911;
        *(undefined2 *)(param_1 + 0x32) = 0xdce4;
        *(undefined2 *)(param_1 + 0x36) = 0x23a8;
        *(undefined2 *)(param_1 + 0x56) = 0xd2a;
        param_1[0x5e] = 1;
      }
      else if ((DAT_800bfa43 < 2) && (DAT_800bfa43 == 0)) {
        *param_1 = 2;
        *(undefined2 *)(param_1 + 0x84) = 2000;
        *(undefined2 *)(param_1 + 0x86) = 0x890;
        *(undefined2 *)(param_1 + 0x56) = 0x92e;
        param_1[0x5e] = 0;
      }
      else {
        *param_1 = 2;
        *(undefined2 *)(param_1 + 0x2e) = 0x3731;
        *(undefined2 *)(param_1 + 0x32) = 0xdce4;
        *(undefined2 *)(param_1 + 0x36) = 0x2008;
        *(undefined2 *)(param_1 + 0x56) = 0x52a;
        if (DAT_800bfa43 != 2) {
          func_0x000312d4(0x90c,param_1 + 0x2c,0xfffffff6);
          param_1[0x5e] = 3;
          param_1[0x2b] = 0;
          param_1[4] = param_1[4] + '\x01';
          halt_baddata();
        }
        param_1[0x5e] = 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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

