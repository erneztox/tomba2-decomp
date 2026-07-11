// FUN_08026780

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08026780(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  ushort uVar5;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if (param_1[6] == '\0') {
      param_1[6] = 1;
      if (DAT_1f800137 == '\x02') {
        DAT_1f800137 = '\0';
      }
      func_0x0004ed94(0x42,0x41);
      func_0x00074590(0x19,0,0xf);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[6] != '\x01') {
      halt_baddata();
    }
    bVar4 = false;
    if ((param_1[0x29] == '\0') && (bVar4 = false, (DAT_800e7fc7 & 1) == param_1[0x5f])) {
      param_1[6] = 0;
      bVar4 = true;
    }
    if (bVar4) {
      param_1[5] = 0;
      halt_baddata();
    }
    if (DAT_800bf918 < 3) {
      return;
    }
    cVar2 = param_1[0x46];
    bVar4 = false;
    if (cVar2 == '\0') {
      sVar3 = *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x50) = sVar3 + -0x10;
      if ((short)(sVar3 + -0x10) < -0x300) {
        *(undefined2 *)(param_1 + 0x50) = 0xfd00;
        halt_baddata();
      }
      goto LAB_080269a4;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1[5] = 3;
        DAT_1f800236 = 1;
        DAT_800bf80f = 2;
        DAT_800bf839 = 1;
        _DAT_800bf83a = 0x1200;
        return;
      }
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    if (DAT_800bf918 < 3) {
      if (param_1[0x29] == '\0') {
        return;
      }
      if (DAT_800e7ea9 != '\0') {
        if (DAT_800e7ffb == '\0') {
          param_1[5] = 1;
          halt_baddata();
        }
        return;
      }
      return;
    }
    cVar2 = param_1[0x46];
    bVar4 = false;
    if (cVar2 == '\0') {
      sVar3 = *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x50) = sVar3 + -0x10;
      if ((short)(sVar3 + -0x10) < -0x300) {
        *(undefined2 *)(param_1 + 0x50) = 0xfd00;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_080269a4;
    }
  }
  if (cVar2 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar4 = false;
  sVar3 = *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x50) = sVar3 + 0x10;
  if (0x300 < (short)(sVar3 + 0x10)) {
    *(undefined2 *)(param_1 + 0x50) = 0x300;
    bVar4 = true;
  }
LAB_080269a4:
  uVar5 = _DAT_1f80017c & 0xf;
  *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x5a) + *(short *)(param_1 + 0x50);
  if (uVar5 == 0) {
    func_0x00074590(0xd,0xffffffe3,0);
  }
  if (!bVar4) {
    return;
  }
  param_1[5] = 2;
  *param_1 = 2;
  *(undefined2 *)(param_1 + 0x40) = 0xf;
  DAT_800e7e86 = 0;
  DAT_800e7e85 = 0x24;
  DAT_800e7e84 = 4;
  DAT_800bf81f = 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

