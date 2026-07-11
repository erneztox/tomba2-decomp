// FUN_08032918

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032918(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  if (param_1[5] == '\0') {
    *(short *)(param_1 + 0x6a) = _DAT_800e7f00 + *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_1 + 0x44) + *(short *)(param_1 + 0x62);
    *(short *)(param_1 + 0x44) = sVar2;
    if (param_1[0xbe] == '\0') {
      *(short *)(param_1 + 0x44) = sVar2 + 0x40;
      if ((short)(sVar2 + 0x40) < 0x1000) {
        *(undefined2 *)(param_1 + 0x44) = 0x1000;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *(short *)(param_1 + 0x44) = sVar2 + -0x40;
      if (-0x1000 < (short)(sVar2 + -0x40)) {
        *(undefined2 *)(param_1 + 0x44) = 0xf000;
      }
    }
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (*(short *)(param_1 + 0x44) >> 5);
    if (param_1[0x29] != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041a1c(param_1,1);
    func_0x00041ac0(param_1);
    if (param_1[0x5f] == '\0') {
      if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = func_0x00045cac(param_1,(int)-*(short *)(param_1 + 0x80),
                              (int)((((uint)*(ushort *)(param_1 + 0x86) -
                                     (uint)*(ushort *)(param_1 + 0x84)) + -0x18) * 0x10000) >> 0x10,
                              (int)*(short *)(param_1 + 0x60));
      if (iVar4 != 0) {
        param_1[0x5f] = param_1[0xbe] + '\x02';
      }
    }
    func_0x0012a480(param_1);
    iVar4 = (int)*(short *)(param_1 + 0x44);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x1800 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((_DAT_1f80017c & 0xf) == 0) {
      local_16 = *(undefined2 *)(param_1 + 0x2e);
      local_12 = *(short *)(param_1 + 0x32) + 0x50;
      local_e = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0x502,auStack_18,0xffffffce);
    }
    bVar1 = param_1[0x5f];
    if (((bVar1 & 0x80) != 0) || ((bVar1 != 0 && ((bVar1 & 1) == param_1[0xbe])))) {
      *param_1 = 2;
      param_1[4] = 2;
      param_1[6] = 0;
      if ((param_1[0x5f] & 0x80) == 0) {
        param_1[5] = 2;
        if (param_1[0xbe] == '\0') {
          param_1[0x2b] = (char)(*(short *)(param_1 + 0x60) + 0x800 >> 4);
        }
        else {
          param_1[0x2b] = (char)(*(ushort *)(param_1 + 0x60) >> 4);
        }
      }
      else {
        param_1[5] = 3;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    func_0x0012a598(param_1);
    iVar4 = (int)*(short *)(param_1 + 0x44);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x1800 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((_DAT_1f80017c & 0xf) == 0) {
      local_16 = *(undefined2 *)(param_1 + 0x2e);
      local_12 = *(short *)(param_1 + 0x32) + 0x50;
      local_e = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0x502,auStack_18,0xffffffce);
    }
    uVar5 = *(short *)(param_1 + 0x6c) + 1;
    uVar3 = uVar5 & 0xff;
    *(ushort *)(param_1 + 0x6c) = uVar5;
    if (0x7f < uVar3) {
      uVar3 = 0x80;
    }
    uVar6 = uVar5 & 0xff00 | uVar3;
    uVar5 = _DAT_800e7e68 & (_DAT_1f800174 | _DAT_1f800172 | _DAT_1f800170 | 0xf0);
    *(ushort *)(param_1 + 0x6c) = uVar6;
    if (uVar5 != 0) {
      if (uVar3 < 10) {
        uVar3 = uVar6 + 0x100 & 0xff00;
        *(ushort *)(param_1 + 0x6c) = uVar3;
        if (0x4ff < (short)uVar3) {
          param_1[0x5f] = param_1[0xbe] + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x6c) = 0;
      }
    }
    func_0x0012a80c(param_1);
  }
  return;
}

