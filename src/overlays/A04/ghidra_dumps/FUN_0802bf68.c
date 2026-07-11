// FUN_0802bf68

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802bf68(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = param_1[7];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
          *(int *)(param_1 + 0x2c) =
               *(int *)(param_1 + 0x2c) -
               (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
        *(int *)(param_1 + 0x34) =
             *(int *)(param_1 + 0x34) +
             (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x50);
        if (*(short *)(param_1 + 0x50) < 0x3c) {
          *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 4;
        }
        if (0 < *(short *)(param_1 + 0x40)) {
          *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
        }
        iVar5 = func_0x00083e80(*(short *)(param_1 + 0x40) * -0x2e + 0x400);
        *(short *)(param_1 + 0x58) = (short)(iVar5 * -0x2000 + 0x400 >> 0xc);
        func_0x00124a08(param_1);
        if (param_1[0x29] == 0) {
          return 0;
        }
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        param_1[0x50] = 0xf2;
        param_1[0x51] = 0xff;
        param_1[0x42] = 7;
        param_1[0x43] = 0;
        param_1[7] = param_1[7] + 1;
        if ((param_1[4] == 2) && ((*param_1 & 2) != 0)) {
          *param_1 = 7;
        }
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = *(short *)(param_1 + 0x32) + 0x50;
        local_16 = *(undefined2 *)(param_1 + 0x36);
        uVar6 = 0x502;
        if ((_DAT_800bfe56 & 0x10) != 0) {
          uVar6 = 0;
        }
        func_0x0003116c(uVar6,auStack_20,0xffffffce);
        halt_baddata();
      }
      if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x50);
      if (*(short *)(param_1 + 0x50) < 0x3c) {
        *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 4;
      }
      sVar3 = *(short *)(param_1 + 0x4e) + 0x2580;
      if (*(short *)(param_1 + 0x4e) < -0xa0) {
        *(short *)(param_1 + 0x4e) = sVar3;
        if (-10 < sVar3) {
          param_1[0x4e] = 0x60;
          param_1[0x4f] = 0xff;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        sVar3 = *(short *)(param_1 + 0x4e) + -0x2580;
        if ((0xa0 < *(short *)(param_1 + 0x4e)) && (*(short *)(param_1 + 0x4e) = sVar3, sVar3 < 10))
        {
          param_1[0x4e] = 0xa0;
          param_1[0x4f] = 0;
        }
      }
      if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
        *(int *)(param_1 + 0x34) =
             *(int *)(param_1 + 0x34) +
             (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
        func_0x00124a08(param_1);
        sVar3 = *(short *)(param_1 + 0x42);
        *(short *)(param_1 + 0x42) = sVar3 + -1;
        if (((short)(sVar3 + -1) != -1) && (param_1[0x29] == 0)) {
          return 0;
        }
        if (param_1[0x29] != 0) {
          local_1e = *(undefined2 *)(param_1 + 0x2e);
          local_1a = *(short *)(param_1 + 0x32) + 0x50;
          local_16 = *(undefined2 *)(param_1 + 0x36);
          uVar6 = 0x502;
          if ((_DAT_800bfe56 & 0x10) != 0) {
            uVar6 = 0;
          }
          func_0x0003116c(uVar6,auStack_20,0xffffffce);
        }
        return 1;
      }
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) -
           (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (param_1[0x46] != 2) {
      param_1[0x46] = 2;
      func_0x00077cfc(param_1,0x80144f14,2,8);
      param_1[0x80] = 0x50;
      param_1[0x81] = 0;
      param_1[0x82] = 0xa0;
      param_1[0x83] = 0;
      param_1[0x84] = 0x8c;
      param_1[0x85] = 0;
      param_1[0x86] = 0xf0;
      param_1[0x87] = 0;
      param_1[0x7c] = 0;
      param_1[0x7d] = 0;
      param_1[0x7e] = 0;
      param_1[0x7f] = 0;
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
    }
    uVar2 = *(ushort *)(param_1 + 0x62);
    uVar4 = ((uint)*(ushort *)(param_1 + 0x56) - (uint)*(ushort *)(param_1 + 0x60) & 0xfff) - 0x401;
    if ((uVar2 & 1) == 0) {
      if (uVar4 < 0x7ff) {
        *(ushort *)(param_1 + 0x62) = uVar2 ^ 1;
        halt_baddata();
      }
    }
    else if (0x7fe < uVar4) {
      *(ushort *)(param_1 + 0x62) = uVar2 ^ 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0x4e] = 0xd0;
    param_1[0x4f] = 0x33;
    param_1[0x50] = 0xd4;
    param_1[0x51] = 0xff;
    param_1[0x40] = 0x16;
    param_1[0x41] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    if (*param_1 == 3) {
      func_0x000331d8(param_1,*(undefined4 *)(param_1 + 0xc4),0xffffff9c,0);
      param_1[0x1b] = param_1[0x1b] | 0x40;
    }
    func_0x00124a08(param_1);
    param_1[7] = param_1[7] + 1;
  }
  if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) -
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x50);
  if (*(short *)(param_1 + 0x50) < 0x3c) {
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 4;
  }
  sVar3 = *(short *)(param_1 + 0x4e) + -0x300;
  if (*(short *)(param_1 + 0x4e) < 0) {
    sVar3 = *(short *)(param_1 + 0x4e) + 0x300;
    *(short *)(param_1 + 0x4e) = sVar3;
    if (-0x1145 < sVar3) {
      param_1[0x4e] = 0xbb;
      param_1[0x4f] = 0xee;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(short *)(param_1 + 0x4e) = sVar3;
    if (sVar3 < 0x1145) {
      param_1[0x4e] = 0x45;
      param_1[0x4f] = 0x11;
    }
  }
  if (0 < *(short *)(param_1 + 0x40)) {
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
  }
  iVar5 = func_0x00083e80(*(short *)(param_1 + 0x40) * -0x2e + 0x400);
  *(short *)(param_1 + 0x58) = (short)(iVar5 * -0x2000 >> 0xc);
  func_0x00124a08(param_1);
  if (-1 < *(short *)(param_1 + 0x50)) {
    param_1[7] = param_1[7] + 1;
    iVar5 = func_0x00083e80(*(short *)(param_1 + 0x40) * -0x2e + 0x400);
    *(short *)(param_1 + 0x58) = (short)(iVar5 * -0x2000 + 0x400 >> 0xc);
    if (param_1[0x46] != 4) {
      param_1[0x46] = 4;
      func_0x00077cfc(param_1,0x80144f14,4,0xb);
      param_1[0x80] = 0x50;
      param_1[0x81] = 0;
      param_1[0x82] = 0xa0;
      param_1[0x83] = 0;
      param_1[0x84] = 0x8c;
      param_1[0x85] = 0;
      param_1[0x86] = 0xf0;
      param_1[0x87] = 0;
      param_1[0x7c] = 0;
      param_1[0x7d] = 0;
      param_1[0x7e] = 0;
      param_1[0x7f] = 0;
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}

