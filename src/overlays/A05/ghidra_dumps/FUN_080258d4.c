// FUN_080258d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080258d4(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined4 *)(param_1 + 0x7c) = 0x80142108;
        *(undefined2 *)(param_1 + 0x80) = 0x60;
        *(undefined2 *)(param_1 + 0x82) = 0xc0;
        *(undefined2 *)(param_1 + 0x84) = 0x40;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x86) = 0xa0;
        param_1[4] = param_1[4] + '\x01';
      }
    }
    else if (bVar1 == 2) {
      bVar1 = param_1[5];
      if (bVar1 == 1) {
        if (param_1[6] == '\0') {
          param_1[6] = 1;
          func_0x00074590(0x8b,0,0xffffffd8);
        }
      }
      else if ((bVar1 != 0) && (uVar4 = 0, bVar1 < 4)) {
        param_1[0xb] = 0xf;
        *(undefined1 **)(param_1 + 0x10) = _DAT_800bf864;
        _DAT_800bf864 = param_1;
        param_1[0xbf] = 0;
        do {
          if ((_DAT_800bf850 & 1 << (uVar4 & 0x1f)) != 0) {
            param_1[0xbf] = param_1[0xbf] + '\x01';
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 3);
        _DAT_800bf850 = _DAT_800bf850 | 1 << ((byte)param_1[3] & 0x1f);
        *(undefined4 *)(param_1 + 0x7c) = 0x80142108;
        func_0x00041718(param_1,0,0);
        param_1[0x5e] = 1;
        param_1[5] = 0;
        param_1[4] = 1;
        func_0x0004ed94(0x39,0x42);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x000518fc(param_1);
      cVar2 = DAT_800e7e81;
      param_1[1] = DAT_800e7e81;
      if (cVar2 == '\0') {
        return;
      }
      func_0x00076d68(param_1);
      func_0x00077e7c(param_1);
    }
    else if (bVar1 == 3) {
      func_0x0007a624(param_1);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = param_1[0x5e];
  if (bVar1 == 1) {
    func_0x0011e3ac(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf816 == '\0') {
        func_0x0007778c(param_1);
        iVar3 = func_0x0012b118(param_1);
        if (iVar3 != 0) {
          if ((param_1[0x29] & 0x80) == 0) {
            *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
            func_0x0004766c(param_1);
            iVar3 = func_0x00049250(param_1,0,
                                    (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                          (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
            if (iVar3 == 1) {
              param_1[0x29] = param_1[0x29] | 0x40;
            }
          }
          if (param_1[0x29] == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          func_0x00041768(param_1,0,4);
        }
      }
      func_0x000518fc(param_1);
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
    }
  }
  else if (bVar1 == 2) {
    func_0x0011e4c4(param_1);
    if (param_1[1] != '\0') {
      func_0x00076d68(param_1);
      halt_baddata();
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

