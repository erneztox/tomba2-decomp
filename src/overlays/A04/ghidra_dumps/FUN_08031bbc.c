// FUN_08031bbc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08031f64) */
/* WARNING: Removing unreachable block (ram,0x0012af50) */
/* WARNING: Removing unreachable block (ram,0x08031fa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08031bbc(undefined1 *param_1,int param_2)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (*(short *)(param_1 + 0x44) >> 5);
    if (DAT_800e7fc7 == param_1[0xbe]) {
      iVar3 = (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x15;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      sVar1 = (short)iVar3;
    }
    else {
      iVar3 = (int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x15;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      sVar1 = -(short)iVar3;
    }
    _DAT_800e7ed8 = _DAT_800e7ed8 + sVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x80;
  if (DAT_800e7fc7 == param_1[0xbe]) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800e7ed8 = _DAT_800e7ed8 + 0x80;
  func_0x00041a1c(param_1,1);
  func_0x00041ac0(param_1);
  if (param_1[0x5f] == '\0') {
    if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = func_0x00045cac(param_1,(int)-*(short *)(param_1 + 0x80),
                            (int)((((uint)*(ushort *)(param_1 + 0x86) -
                                   (uint)*(ushort *)(param_1 + 0x84)) + -0x18) * 0x10000) >> 0x10,
                            (int)*(short *)(param_1 + 0x60));
    if (iVar3 != 0) {
      param_1[0x5f] = param_1[0xbe] + '\x02';
    }
  }
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x4a);
  *(short *)(param_1 + 0x4a) = sVar1 + 0x180;
  if (0x3e00 < (short)(sVar1 + 0x180)) {
    *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  if (param_2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0 < *(short *)(param_1 + 0x4a)) {
    sVar1 = *(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x44) = sVar1 + 0x40;
    if (0xa00 < (short)(sVar1 + 0x40)) {
      *(undefined2 *)(param_1 + 0x44) = 0xa00;
    }
    if (0 < *(short *)(param_1 + 0x4a)) {
      DAT_800bf821 = 0;
      param_1[0xbf] = 2;
      DAT_800e7fc5 = 2;
      if (param_1[0x29] != '\0') {
        param_1[0xbf] = 0;
        if (param_2 == 0) {
          param_1[5] = param_1[5] + '\x01';
        }
        else {
          param_1[0x5f] = param_1[0xbe] + '\x02';
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar2 = func_0x00049250(param_1,0,
                              (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                    (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
      param_1[0x29] = bVar2;
      if (bVar2 != 0) {
        param_1[0x29] = bVar2 & 1;
        if ((((int)(short)_DAT_1f8001a6 & 0x8000U) != 0) && ((_DAT_1f8001a6 & 0xf00) == 0x700)) {
          param_1[0x5f] = 0xff;
        }
        if (param_1[0x29] != '\0') {
          param_1[0xbf] = 0;
          param_1[0x5f] = param_1[0xbe] + '\x02';
          param_1[0x29] = param_1[0x29] | 0x80;
          func_0x00049674(param_1);
          *(undefined2 *)(param_1 + 0x62) = _DAT_1f8001a2;
          halt_baddata();
        }
      }
      goto LAB_08031ec8;
    }
  }
  DAT_800e7fc5 = 1;
LAB_08031ec8:
  bVar2 = param_1[0x5f];
  if (((bVar2 & 0x80) == 0) && ((bVar2 == 0 || ((bVar2 & 1) != param_1[0xbe])))) {
    _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
    _DAT_800e7eb2 = *(undefined2 *)(param_1 + 0x32);
    _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
    DAT_800e7eaa = param_1[0x2a];
    return;
  }
  *param_1 = 2;
  param_1[4] = 2;
  param_1[6] = 0;
  if ((param_1[0x5f] & 0x80) != 0) {
    param_1[5] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[5] = 2;
  if (param_1[0xbe] != '\0') {
    param_1[0x2b] = (char)(*(ushort *)(param_1 + 0x60) >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

