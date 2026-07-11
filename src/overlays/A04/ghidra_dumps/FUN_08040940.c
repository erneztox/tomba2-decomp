// FUN_08040940

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08040940(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((*(short *)(param_1 + 0x66) != 0) &&
       (func_0x00077b5c(param_1), *(short *)(param_1 + 0xe) == 7)) {
      *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) ^ 1;
    }
    func_0x0004766c(param_1);
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      if (*(short *)(param_1 + 100) != 0) {
        param_1[5] = 2;
        *(undefined2 *)(param_1 + 0x4a) = 0xec00;
        param_1[6] = 0;
        *(undefined2 *)(param_1 + 0x50) = 0x100;
        *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0xe) + -1;
        halt_baddata();
      }
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
    }
    else {
      if (bVar1 != 2) {
        halt_baddata();
      }
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      if (*(short *)(param_1 + 0x66) != 0) {
        *(short *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + -1;
      }
      if (param_1[6] == '\0') {
        if (-1 < *(short *)(param_1 + 0x4a)) {
          param_1[6] = 1;
          halt_baddata();
        }
      }
      else {
        if (param_1[6] != '\x01') {
          halt_baddata();
        }
        iVar5 = 1;
        if (param_1[0x29] == '\0') {
          iVar5 = func_0x00049250(param_1,0,0x1e);
        }
        if (iVar5 != 0) {
          if ((iVar5 == 2) && ((_DAT_1f8001a6 >> 8 & 0xf) == 7)) {
            DAT_800bf9d4 = 0;
            param_1[4] = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_1[5] = 0;
          uVar4 = func_0x0009a450();
          *(ushort *)(param_1 + 0x40) = (uVar4 & 0x3f) + 0x1e;
          *(undefined2 *)(param_1 + 0x66) = 1;
        }
        if (0x2000 < *(short *)(param_1 + 0x4a)) {
          *(undefined2 *)(param_1 + 0x4a) = 0x2000;
        }
      }
    }
    func_0x0007778c(param_1);
    if (*(short *)(param_1 + 0x60) == 0) {
      if (param_1[1] == '\0') {
        *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
        *(undefined2 *)(param_1 + 0x62) = 0x5a;
        halt_baddata();
      }
    }
    else {
      if (*(short *)(param_1 + 0x60) != 1) {
        param_1[0x29] = 0;
        halt_baddata();
      }
      if (param_1[1] != '\0') {
        *(undefined2 *)(param_1 + 0x60) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x62);
      *(ushort *)(param_1 + 0x62) = sVar2 - 1U;
      if ((int)((uint)(ushort)(sVar2 - 1U) << 0x10) < 0) {
        DAT_800bf9d4 = 0;
        param_1[4] = 3;
        halt_baddata();
      }
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if ((1 < (byte)param_1[5]) && ((byte)param_1[5] < 4)) {
          DAT_800bf9d4 = 0;
          DAT_800bf936 = DAT_800bf936 | 8;
          func_0x0004d4c4(0x42,1);
          func_0x0004b0d8(param_1);
          param_1[4] = 3;
        }
        func_0x0007778c(param_1);
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[4] = 1;
    uVar3 = _DAT_800ecf80;
    param_1[0xb] = 0x10;
    param_1[0xd] = 0;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    param_1[0x5e] = 0;
    param_1[3] = 3;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    func_0x00077b38(param_1,0x80144360);
    param_1[0x47] = 0;
    func_0x0004766c(param_1);
    *(undefined2 *)(param_1 + 0x80) = 0x1e;
    *(undefined2 *)(param_1 + 0x82) = 0x3c;
    *(undefined2 *)(param_1 + 0x84) = 0x3c;
    *(undefined2 *)(param_1 + 0x86) = 0x5a;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    param_1[5] = 2;
    param_1[6] = 1;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(undefined2 *)(param_1 + 0x66) = 0;
  }
  param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

