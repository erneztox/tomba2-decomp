// FUN_0802c664

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802c664(byte *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
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
        func_0x00083e80(*(short *)(param_1 + 0x40) * -0x2e + 0x400);
        param_1[0x58] = 0;
        param_1[0x59] = 0;
        func_0x00124a08(param_1);
        if (param_1[0x29] == 0) {
          return 0;
        }
        param_1[0x42] = 0xe;
        param_1[0x43] = 0;
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        param_1[0x50] = 0xe4;
        param_1[0x51] = 0xff;
        param_1[7] = param_1[7] + 1;
        if ((param_1[4] == 2) && ((*param_1 & 2) != 0)) {
          *param_1 = 7;
        }
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        local_1a = *(short *)(param_1 + 0x32) + 0x50;
        local_16 = *(undefined2 *)(param_1 + 0x36);
        uVar3 = 0x502;
        if ((_DAT_800bfe56 & 0x10) != 0) {
          uVar3 = 0;
        }
        func_0x0003116c(uVar3,auStack_20,0xffffffce);
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x50);
      if (*(short *)(param_1 + 0x50) < 0x3c) {
        *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 4;
      }
      sVar2 = *(short *)(param_1 + 0x4e);
      if ((*(short *)(param_1 + 0x4e) < -0xa0) &&
         (*(short *)(param_1 + 0x4e) = sVar2 + 0x2580, -10 < (short)(sVar2 + 0x2580))) {
        param_1[0x4e] = 0x60;
        param_1[0x4f] = 0xff;
      }
      if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
        *(int *)(param_1 + 0x34) =
             *(int *)(param_1 + 0x34) +
             (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
        func_0x00124a08(param_1);
        sVar2 = *(short *)(param_1 + 0x42);
        *(short *)(param_1 + 0x42) = sVar2 + -1;
        if (((short)(sVar2 + -1) != -1) && (param_1[0x29] == 0)) {
          return 0;
        }
        if (param_1[0x29] != 0) {
          local_1e = *(undefined2 *)(param_1 + 0x2e);
          local_1a = *(short *)(param_1 + 0x32) + 0x50;
          local_16 = *(undefined2 *)(param_1 + 0x36);
          uVar3 = 0x502;
          if ((_DAT_800bfe56 & 0x10) != 0) {
            uVar3 = 0;
          }
          func_0x0003116c(uVar3,auStack_20,0xffffffce);
        }
        param_1[0x4e] = 0;
        param_1[0x4f] = 0;
        return 1;
      }
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) -
           (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00124a08(param_1);
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
    param_1[0x4e] = 0x30;
    param_1[0x4f] = 0xcc;
    param_1[0x50] = 0xd4;
    param_1[0x51] = 0xff;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x40] = 0x16;
    param_1[0x41] = 0;
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
  sVar2 = *(short *)(param_1 + 0x4e);
  if ((*(short *)(param_1 + 0x4e) < 0) &&
     (*(short *)(param_1 + 0x4e) = sVar2 + 0x300, -0x1145 < (short)(sVar2 + 0x300))) {
    param_1[0x4e] = 0xbb;
    param_1[0x4f] = 0xee;
  }
  if (0 < *(short *)(param_1 + 0x40)) {
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
  }
  func_0x00083e80(*(short *)(param_1 + 0x40) * -0x2e + 0x400);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  func_0x00124a08(param_1);
  if (*(short *)(param_1 + 0x50) < 0) {
    return 0;
  }
  param_1[7] = param_1[7] + 1;
  func_0x00083e80(*(short *)(param_1 + 0x40) * -0x2e + 0x400);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

