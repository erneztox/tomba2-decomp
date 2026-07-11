// FUN_80137b58

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_80137b58(byte *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  bVar1 = param_1[7];
  if (bVar1 == 1) {
    if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
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
    sVar2 = *(short *)(param_1 + 0x4e) + -0x300;
    if (*(short *)(param_1 + 0x4e) < 0) {
      sVar2 = *(short *)(param_1 + 0x4e) + 0x300;
      *(short *)(param_1 + 0x4e) = sVar2;
      if (-0x1145 < sVar2) {
        param_1[0x4e] = 0xbb;
        param_1[0x4f] = 0xee;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *(short *)(param_1 + 0x4e) = sVar2;
      if (sVar2 < 0x1145) {
        param_1[0x4e] = 0x45;
        param_1[0x4f] = 0x11;
      }
    }
    if (0 < *(short *)(param_1 + 0x40)) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    }
    iVar3 = func_0x80083e80(*(short *)(param_1 + 0x40) * -0x2e + 0x400);
    *(short *)(param_1 + 0x58) = (short)(iVar3 * -0x2000 >> 0xc);
    FUN_801406e4(param_1);
    uVar4 = 0;
    if (-1 < *(short *)(param_1 + 0x50)) {
      param_1[7] = param_1[7] + 1;
      iVar3 = func_0x80083e80(*(short *)(param_1 + 0x40) * -0x2e + 0x400);
                    /* WARNING: Subroutine does not return */
      *(short *)(param_1 + 0x58) = (short)(iVar3 * -0x2000 + 0x400 >> 0xc);
      FUN_801402b8(param_1,0x22,0xb);
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Subroutine does not return */
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffb;
      FUN_801402b8(param_1,8,8);
    }
    if (bVar1 == 2) {
      if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
        uVar4 = FUN_80140e1c();
        return uVar4;
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
      iVar3 = func_0x80083e80(*(short *)(param_1 + 0x40) * -0x2e + 0x400);
      *(short *)(param_1 + 0x58) = (short)(iVar3 * -0x2000 + 0x400 >> 0xc);
      FUN_801406e4(param_1);
      if (param_1[0x29] != 0) {
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        param_1[0x50] = 0xf2;
        param_1[0x51] = 0xff;
        param_1[0x42] = 7;
        param_1[0x43] = 0;
        param_1[7] = param_1[7] + 1;
        uVar4 = 0;
        if ((param_1[4] == 2) && (uVar4 = 0, (*param_1 & 2) != 0)) {
          *param_1 = 7;
          halt_baddata();
        }
      }
    }
    else {
      if (bVar1 != 3) {
        halt_baddata();
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x50);
      if (*(short *)(param_1 + 0x50) < 0x3c) {
        *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 4;
      }
      sVar2 = *(short *)(param_1 + 0x4e) + 0x2580;
      if (*(short *)(param_1 + 0x4e) < -0xa0) {
        *(short *)(param_1 + 0x4e) = sVar2;
        if (-10 < sVar2) {
          param_1[0x4e] = 0x60;
          param_1[0x4f] = 0xff;
          uVar4 = FUN_80140f80();
          return uVar4;
        }
      }
      else {
        sVar2 = *(short *)(param_1 + 0x4e) + -0x2580;
        if ((0xa0 < *(short *)(param_1 + 0x4e)) && (*(short *)(param_1 + 0x4e) = sVar2, sVar2 < 10))
        {
          param_1[0x4e] = 0xa0;
          param_1[0x4f] = 0;
        }
      }
      if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
      *(int *)(param_1 + 0x34) =
           *(int *)(param_1 + 0x34) +
           (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
      FUN_801406e4(param_1);
      sVar2 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar2 + -1;
      if (((short)(sVar2 + -1) == -1) || (uVar4 = 0, param_1[0x29] != 0)) {
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

