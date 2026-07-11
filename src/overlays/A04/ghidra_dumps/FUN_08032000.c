// FUN_08032000

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032000(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  short local_22;
  undefined2 local_1e;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if (param_1[6] == '\0') {
      *(short *)(param_1 + 0x44) = _DAT_800e7ec4;
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (_DAT_800e7ec4 >> 5);
      func_0x00041a1c(param_1,0);
      func_0x00041ac0(param_1);
      iVar4 = (int)*(short *)(param_1 + 0x44);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (0x1800 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((_DAT_1f80017c & 0xf) == 0) {
        local_26 = *(undefined2 *)(param_1 + 0x2e);
        local_22 = *(short *)(param_1 + 0x32) + 0x50;
        local_1e = *(undefined2 *)(param_1 + 0x36);
        func_0x0003116c(0x502,auStack_28,0xffffffce);
      }
      if (param_1[0x5f] == '\0') {
        if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar4 = func_0x00045cac(param_1,(int)-*(short *)(param_1 + 0x80),
                                (int)((((uint)*(ushort *)(param_1 + 0x86) -
                                       (uint)*(ushort *)(param_1 + 0x84)) + -0x18) * 0x10000) >>
                                0x10,(int)*(short *)(param_1 + 0x60));
        if (iVar4 != 0) {
          param_1[0x5f] = param_1[0xbe] + '\x02';
        }
      }
      func_0x0012a480(param_1);
      bVar1 = param_1[0x5f];
      if (((bVar1 & 0x80) == 0) && ((bVar1 == 0 || ((bVar1 & 1) != param_1[0xbe])))) {
        sVar3 = *(short *)(param_1 + 0x42);
        *(short *)(param_1 + 0x42) = sVar3 + 1;
        if (0x1e < (short)(sVar3 + 1)) {
          *(undefined2 *)(param_1 + 0x42) = 0;
          param_1[6] = param_1[6] + '\x01';
          *(short *)(param_1 + 0x6a) = _DAT_800e7f00 + *(short *)(param_1 + 0x80);
          DAT_800e7e80 = 6;
          DAT_800e7e85 = 0x18;
          DAT_800e7e86 = 10;
          DAT_800e7e87 = 0;
          if (*(short *)(param_1 + 0x44) < 0) {
            param_1[0xbe] = 1;
            *(undefined2 *)(param_1 + 100) = 0;
            halt_baddata();
          }
          param_1[0xbe] = 0;
          *(undefined2 *)(param_1 + 100) = 0x800;
          halt_baddata();
        }
        if ((param_1[0x5e] & 8) != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x42) = 0;
        param_1[5] = 3;
        if (*(short *)(param_1 + 0x44) < 0) {
          param_1[0xbe] = 1;
          halt_baddata();
        }
        param_1[0xbe] = 0;
        halt_baddata();
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
    sVar3 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar3 + 1;
    if (0xf < (short)(sVar3 + 1)) {
      param_1[6] = 0;
      param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = func_0x00055824(param_1);
    if (iVar4 != 0) {
      DAT_800e7e85 = 2;
      DAT_800e7e86 = 0;
      DAT_800e7e87 = 0;
      DAT_800e7e80 = bVar1;
      param_1[5] = 3;
      param_1[6] = 0;
    }
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
      local_26 = *(undefined2 *)(param_1 + 0x2e);
      local_22 = *(short *)(param_1 + 0x32) + 0x50;
      local_1e = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0x502,auStack_28,0xffffffce);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_080326d8:
    func_0x0012a80c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      iVar4 = (int)*(short *)(param_1 + 0x44);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      sVar3 = (short)(iVar4 + -0x100);
      if ((iVar4 + -0x100) * 0x10000 < 1) {
        sVar3 = 0;
      }
      if (param_1[0xbe] == '\0') {
        *(short *)(param_1 + 0x44) = sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x44) = -sVar3;
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + (*(short *)(param_1 + 0x44) >> 5);
      func_0x00041a1c(param_1,0);
      func_0x00041ac0(param_1);
      iVar4 = (int)*(short *)(param_1 + 0x44);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (0x1800 < iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((_DAT_1f80017c & 0xf) == 0) {
        local_26 = *(undefined2 *)(param_1 + 0x2e);
        local_22 = *(short *)(param_1 + 0x32) + 0x50;
        local_1e = *(undefined2 *)(param_1 + 0x36);
        func_0x0003116c(0x502,auStack_28,0xffffffce);
      }
      if (param_1[0x5f] == '\0') {
        if (-1 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar4 = func_0x00045cac(param_1,(int)-*(short *)(param_1 + 0x80),
                                (int)((((uint)*(ushort *)(param_1 + 0x86) -
                                       (uint)*(ushort *)(param_1 + 0x84)) + -0x18) * 0x10000) >>
                                0x10,(int)*(short *)(param_1 + 0x60));
        if (iVar4 != 0) {
          param_1[0x5f] = param_1[0xbe] + '\x02';
        }
      }
      func_0x0012a480(param_1);
      bVar1 = param_1[0x5f];
      if (((bVar1 & 0x80) == 0) && ((bVar1 == 0 || ((bVar1 & 1) != param_1[0xbe])))) {
        if (*(short *)(param_1 + 0x44) != 0) {
          return;
        }
        param_1[5] = 0;
        param_1[6] = 0;
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
      local_26 = *(undefined2 *)(param_1 + 0x2e);
      local_22 = *(short *)(param_1 + 0x32) + 0x50;
      local_1e = *(undefined2 *)(param_1 + 0x36);
      func_0x0003116c(0x502,auStack_28,0xffffffce);
    }
    uVar5 = *(short *)(param_1 + 0x6c) + 1;
    uVar2 = uVar5 & 0xff;
    *(ushort *)(param_1 + 0x6c) = uVar5;
    if (0x7f < uVar2) {
      uVar2 = 0x80;
    }
    uVar6 = uVar5 & 0xff00 | uVar2;
    uVar5 = _DAT_800e7e68 & (_DAT_1f800174 | _DAT_1f800172 | _DAT_1f800170 | 0xf0);
    *(ushort *)(param_1 + 0x6c) = uVar6;
    if (uVar5 != 0) {
      if (uVar2 < 10) {
        uVar2 = uVar6 + 0x100 & 0xff00;
        *(ushort *)(param_1 + 0x6c) = uVar2;
        if (0x4ff < (short)uVar2) {
          param_1[0x5f] = param_1[0xbe] + '\x02';
          halt_baddata();
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x6c) = 0;
      }
    }
    goto LAB_080326d8;
  }
  if (bVar1 != 0) {
    halt_baddata();
  }
  if ((param_1[0x5e] & 8) != 0) {
    param_1[5] = 1;
    param_1[6] = 0;
    *(undefined2 *)(param_1 + 0x42) = 0;
    *(short *)(param_1 + 0x6a) = _DAT_800e7f00 + *(short *)(param_1 + 0x80);
    halt_baddata();
  }
  if (param_1[3] != '\x02') goto LAB_08032190;
  sVar3 = *(short *)(param_1 + 0x40) + -1;
  if (*(short *)(param_1 + 0x40) == 0) {
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,
                    (&DAT_80141ab4)[*(byte *)(*(short *)(param_1 + 0xe) + -0x7febe544)]);
    uVar2 = *(short *)(param_1 + 0xe) + 1U & 0xf;
    *(ushort *)(param_1 + 0xe) = uVar2;
    if (uVar2 == 0) {
      uVar2 = func_0x0009a450();
      sVar3 = (uVar2 & 0x3f) + 10;
      goto LAB_08032118;
    }
  }
  else {
LAB_08032118:
    *(short *)(param_1 + 0x40) = sVar3;
  }
  if (((((int)_DAT_800e7ffe & 0x8200U) == 0) &&
      (iVar4 = func_0x0002300c(&DAT_800e7e80,param_1,900), iVar4 != 0)) &&
     (*(short *)(param_1 + 0x36) + 400 < (int)_DAT_1f800164)) {
    param_1[3] = 3;
    *(undefined2 *)(param_1 + 0x44) = 0x1500;
    param_1[0x46] = 1;
    param_1[0xbe] = 0;
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,DAT_80141ab4);
    halt_baddata();
  }
LAB_08032190:
  if ((param_1[6] == '\0') && (iVar4 = func_0x0012a480(param_1), iVar4 != 0)) {
    param_1[6] = 1;
  }
  bVar1 = param_1[0x5f];
  if (((bVar1 & 0x80) == 0) && ((bVar1 == 0 || ((bVar1 & 1) != param_1[0xbe])))) {
    return;
  }
  *param_1 = 2;
  param_1[4] = 2;
  param_1[6] = 0;
  if ((param_1[0x5f] & 0x80) != 0) {
    param_1[5] = 3;
    halt_baddata();
  }
  param_1[5] = 2;
  if (param_1[0xbe] == '\0') {
    param_1[0x2b] = (char)(*(short *)(param_1 + 0x60) + 0x800 >> 4);
    halt_baddata();
  }
  param_1[0x2b] = (char)(*(ushort *)(param_1 + 0x60) >> 4);
  halt_baddata();
}

