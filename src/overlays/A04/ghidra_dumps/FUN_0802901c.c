// FUN_0802901c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802901c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    cVar3 = param_1[5];
    if (cVar3 == '\0') {
      iVar4 = func_0x0007778c(param_1);
      if ((iVar4 != 0) && ((param_1[0x5e] & 8) != 0)) {
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
    }
    else {
      if (cVar3 != '\x01') {
        halt_baddata();
      }
      func_0x00077ebc(param_1);
      bVar1 = param_1[6];
      param_1[1] = 1;
      if (bVar1 == 1) {
        *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (*(short *)(param_1 + 0x44) >> 5);
        func_0x00041a1c(param_1,0);
        func_0x00041ac0(param_1);
        func_0x0012c8ac(param_1,1);
        cVar3 = param_1[0x29];
        if (cVar3 == '\0') {
          *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
          cVar3 = func_0x001322a8(param_1,0,
                                  (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                        (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
          param_1[0x29] = cVar3;
          if (cVar3 != '\0') {
            param_1[0x29] = 0x81;
            func_0x00049674(param_1);
            *(undefined2 *)(param_1 + 0x62) = _DAT_1f8001a2;
          }
          cVar3 = param_1[0x29];
        }
        if (cVar3 == '\0') {
          *(undefined2 *)(param_1 + 0x4a) = 0x400;
          param_1[0xbf] = 2;
          param_1[6] = param_1[6] + '\x01';
          *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_1 + 0x44);
        }
        func_0x0006cba8(param_1 + 0x2c);
        _DAT_1f8000d6 = _DAT_1f8000d6 + 10;
        if (-0x1965 < (short)_DAT_1f8000d6) {
          _DAT_1f8000d6 = 0xe69c;
          halt_baddata();
        }
      }
      else if (bVar1 < 2) {
        if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if ((param_1[0x5e] & 8) == 0) {
          param_1[5] = param_1[5] + -1;
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 == 1) {
          func_0x0006cba8(param_1 + 0x2c);
          DAT_800bf809 = cVar3;
          DAT_800bf841 = cVar3;
          func_0x0006e1c0(8);
          *(undefined2 *)(param_1 + 0x44) = 0xa00;
          param_1[6] = param_1[6] + '\x01';
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 2) {
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x44);
        *(ushort *)(param_1 + 0x44) = sVar2 - 0x80U;
        *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (*(short *)(param_1 + 0x42) >> 5);
        if ((int)((uint)(ushort)(sVar2 - 0x80U) << 0x10) < 0) {
          *(undefined2 *)(param_1 + 0x44) = 0;
        }
        func_0x00041a1c(param_1,1);
        func_0x00041ac0(param_1);
        sVar2 = *(short *)(param_1 + 0x4a);
        *(short *)(param_1 + 0x4a) = sVar2 + 0x360;
        if (0x3800 < (short)(sVar2 + 0x360)) {
          *(undefined2 *)(param_1 + 0x4a) = 0x3800;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        if (-0x16a8 < *(short *)(param_1 + 0x32)) {
          *param_1 = 2;
          param_1[4] = 2;
          param_1[5] = 3;
          *(undefined2 *)(param_1 + 0x44) = 0;
        }
        func_0x0006cba8(param_1 + 0x2c);
        if (((short)_DAT_1f8000d6 < *(short *)(param_1 + 0x32)) &&
           (iVar4 = (uint)_DAT_1f8000d6 + ((int)((uint)*(ushort *)(param_1 + 0x4a) << 0x10) >> 0x1a)
           , _DAT_1f8000d6 = (ushort)iVar4, -0x1965 < iVar4 * 0x10000 >> 0x10)) {
          _DAT_1f8000d6 = 0xe69c;
        }
      }
    }
    if (param_1[1] != '\0') {
      func_0x000517f8(param_1);
    }
    param_1[0x5e] = 0;
    param_1[0x29] = 0;
    param_1[0x5f] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = func_0x00051b70(param_1,0xc,0x25);
      if (iVar4 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x84) = 0x78;
      *(undefined2 *)(param_1 + 0x80) = 0x78;
      *(undefined2 *)(param_1 + 0x82) = 0xf0;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *param_1 = 1;
      param_1[4] = param_1[4] + '\x01';
      func_0x00041194(param_1,0xf0 - *(short *)(param_1 + 0x84),0,0);
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
      param_1[0x5e] = 0;
      param_1[0xbf] = 0;
    }
  }
  else if (bVar1 == 2) {
    if (((short)_DAT_1f8000d6 < *(short *)(param_1 + 0x32)) &&
       (iVar4 = (uint)_DAT_1f8000d6 + ((int)((uint)*(ushort *)(param_1 + 0x4a) << 0x10) >> 0x19),
       _DAT_1f8000d6 = (ushort)iVar4, -0x1965 < iVar4 * 0x10000 >> 0x10)) {
      _DAT_1f8000d6 = 0xe69c;
    }
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      sVar2 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar2 + 0x360;
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (*(short *)(param_1 + 0x42) >> 5);
      if (0x3800 < (short)(sVar2 + 0x360)) {
        *(undefined2 *)(param_1 + 0x4a) = 0x3800;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      if (-0x16a8 < *(short *)(param_1 + 0x32)) {
        *(undefined2 *)(param_1 + 0x40) = 0x3c;
        param_1[5] = param_1[5] + '\x01';
      }
      iVar4 = func_0x0007778c(param_1);
      if (iVar4 == 0) {
        return;
      }
      func_0x000517f8(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0006cba8(param_1 + 0x2c);
        param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      param_1[5] = param_1[5] + '\x01';
    }
    else if (bVar1 == 3) {
      DAT_800bf841 = 0;
      DAT_800bf809 = 0;
      DAT_1f800137 = 0;
      DAT_800bfa0c = DAT_800bfa0c | 0x80;
      func_0x0006e1e4();
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

