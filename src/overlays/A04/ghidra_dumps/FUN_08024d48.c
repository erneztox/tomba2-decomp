// FUN_08024d48

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024d48(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    iVar5 = func_0x00072f14(param_1);
    if (iVar5 == 0) {
      return;
    }
    *param_1 = 1;
    param_1[5] = param_1[5] + '\x01';
    DAT_800bf871 = '\x01';
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (((param_1[0x29] != '\0') && (DAT_800e7ea9 != '\0')) && (DAT_800e7ffb == '\0')) {
          param_1[5] = 3;
          DAT_1f800137 = 2;
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        bVar4 = false;
        if (param_1[0x46] == '\0') {
          sVar2 = *(short *)(param_1 + 0x50);
          *(short *)(param_1 + 0x50) = sVar2 + -0x10;
          if ((short)(sVar2 + -0x10) < -0x300) {
            *(undefined2 *)(param_1 + 0x50) = 0xfd00;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          if (param_1[0x46] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          sVar2 = *(short *)(param_1 + 0x50);
          *(short *)(param_1 + 0x50) = sVar2 + 0x10;
          if (0x300 < (short)(sVar2 + 0x10)) {
            *(undefined2 *)(param_1 + 0x50) = 0x300;
            bVar4 = true;
          }
        }
        uVar3 = _DAT_1f80017c & 0xf;
        *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) + *(short *)(param_1 + 0x50);
        if (uVar3 == 0) {
          func_0x00074590(0xd,0xffffffe3,0);
        }
        if (bVar4) {
          param_1[5] = param_1[5] + '\x01';
          DAT_1f800236 = 1;
          DAT_800bf839 = 1;
          DAT_800bf80f = 2;
          _DAT_800bf83a = 0x1100;
          func_0x0005082c(0,0,0);
        }
      }
      return;
    }
    if (bVar1 == 0) {
      if (DAT_800bf871 == '\x05') {
        *param_1 = 2;
        param_1[5] = 1;
        *(undefined2 *)(param_1 + 0x50) = 0x400;
        func_0x00072efc();
      }
      else {
        param_1[5] = 2;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

