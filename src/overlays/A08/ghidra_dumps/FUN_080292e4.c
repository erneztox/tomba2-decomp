// FUN_080292e4

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080292e4(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1[6];
  if (bVar1 == 3) {
    if ((DAT_800bfa32 & 0x1f) == 0x1f) {
      DAT_800bfa32 = DAT_800bfa32 | 0x80;
      param_1[6] = 0;
      halt_baddata();
    }
    param_1[6] = 0;
    *param_1 = 2;
    func_0x00042310();
    halt_baddata();
  }
  if (bVar1 < 4) {
    if (bVar1 == 1) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if ((short)(sVar2 + -1) == -1) {
        *(undefined2 *)(param_1 + 0x40) = 0x1e;
        param_1[6] = param_1[6] + '\x01';
        func_0x00054d14(&DAT_800e7e80,0x73,0);
        halt_baddata();
      }
      return 0;
    }
    if (1 < bVar1) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if ((short)(sVar2 + -1) != -1) {
        return 0;
      }
      param_1[6] = param_1[6] + '\x01';
      if (param_1[3] != '\x02') {
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x3f);
        DAT_800bfa32 = DAT_800bfa32 | (byte)(1 << ((byte)param_1[3] & 0x1f));
        func_0x00074590(0x1a,10,0);
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
  }
  else {
    if (bVar1 == 5) {
      if (param_1[0x2b] != '\0') {
        return 0;
      }
      *param_1 = 2;
      param_1[6] = 99;
      return 0;
    }
    if (bVar1 < 5) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return 0;
      }
      if (param_1[3] == '\x02') {
        halt_baddata();
      }
      *param_1 = 2;
      halt_baddata();
    }
    if (bVar1 != 99) {
      return 0;
    }
    param_1[6] = 0;
    *param_1 = 1;
  }
  if (param_1[0x2b] != '\x03') {
    return 0;
  }
  if (DAT_800bfae9 != '\0') {
    *(undefined2 *)(param_1 + 0x40) = 0x2d;
    param_1[6] = param_1[6] + '\x01';
    func_0x00042354(1,2);
    DAT_800e7e84 = 4;
    DAT_800e7e85 = 0x21;
    DAT_800e7e86 = 0;
    DAT_800e7ee1 = 0;
    func_0x00054d14(&DAT_800e7e80,0x72,0);
    func_0x00040b48(0x3b);
    func_0x001294b4(param_1[3]);
    func_0x0004d604(0x35,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x40) = 0x1e;
  func_0x0004ed94(0x72,0x41);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

