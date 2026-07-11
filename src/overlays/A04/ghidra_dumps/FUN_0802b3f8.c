// FUN_0802b3f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802b3f8(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    uVar3 = param_1[0x70] - 1;
    if ('\0' < (char)param_1[0x70]) {
      iVar2 = (int)(uVar3 * 0x1000000) >> 0x18;
      param_1[0x70] = (byte)uVar3;
      if (iVar2 == 0) {
        *param_1 = *param_1 & 0xf7;
        param_1[0xd] = param_1[0xd] & 0xfd;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar2 < 0x1e) {
        if ((uVar3 & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00077e20(param_1,0x20,0x30,0x80);
      }
      param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[0x2b] != 0) {
      param_1[0x2b] = param_1[0x2b] - 1;
      if ((_DAT_1f80017c & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + -0x80;
      iVar2 = func_0x00116b48(param_1);
      if (iVar2 != 0) {
        func_0x000518fc(param_1);
        halt_baddata();
      }
      return;
    }
    if ((DAT_1f800137 == '\0') && (DAT_800bf809 == '\0')) {
      iVar2 = func_0x00127e3c(param_1);
      if (iVar2 != 0) {
        if (param_1[3] == 0x80) {
          func_0x00127670(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x001277d4(param_1);
        iVar2 = func_0x00116b48(param_1);
        if (iVar2 != 0) {
          if (param_1[0x67] == 2) {
            func_0x00074590(0x8d,0,0);
          }
          func_0x00076d68(param_1);
          func_0x000518fc(param_1);
          if (param_1[0x29] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_1[0xb] = param_1[0xb] & 0x3f;
        }
      }
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
      param_1[0x67] = 0;
    }
    else {
      iVar2 = func_0x00127e3c(param_1);
      if ((iVar2 != 0) && (iVar2 = func_0x00116b48(param_1), iVar2 != 0)) {
        func_0x000518fc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    iVar2 = func_0x00127e14(param_1);
    if (iVar2 != 0) {
      param_1[4] = 2;
      param_1[5] = 2;
      param_1[6] = 0;
      param_1[7] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x0012415c(param_1);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      *param_1 = 2;
      if ((param_1[0x1b] & 0x40) != 0) {
        param_1[0x1b] = param_1[0x1b] & 0xbf;
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    func_0x00124660(param_1);
    func_0x00076d68(param_1);
  }
  func_0x0012807c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

