// FUN_000055f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000055f4(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00074590(0x8c,0,0x14);
    _DAT_1f80020c = _DAT_1f80020c | 7;
    func_0x0010bdec(param_1);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    if (*(char *)(param_1 + 3) == '\0') {
      if (*(short *)(param_1 + 0x6e) < 0) {
        *(short *)(param_1 + 0x4e) = (short)(*(short *)(param_1 + 0x9c) * 0xf >> 0xb);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x4e) = (short)(*(short *)(param_1 + 0x9c) * -0x1e >> 0xc);
      *(short *)(param_1 + 0x50) = (short)(*(short *)(param_1 + 0xa2) * -0x1e >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 3) != '\x01') {
      _DAT_800e7e90 = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x4e) = (short)(*(short *)(param_1 + 0x9a) * 0xf >> 0xb);
    *(short *)(param_1 + 0x50) = (short)(*(short *)(param_1 + 0xa0) * 0xf >> 0xb);
    *(short *)(param_1 + 0x52) = (short)(*(short *)(param_1 + 0xa6) * 0xf >> 0xb);
    _DAT_800e7e90 = param_1;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + (*(short *)(param_1 + 0x4e) >> 5);
  sVar2 = *(short *)(param_1 + 0x52) + (*(short *)(param_1 + 0x52) >> 5);
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + (*(short *)(param_1 + 0x50) >> 5);
  *(short *)(param_1 + 0x52) = sVar2;
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x4e);
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + sVar2;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 1) = 1;
  *(int *)(param_1 + 0xac) = (int)*(short *)(param_1 + 0x2e);
  *(int *)(param_1 + 0xb0) = (int)*(short *)(param_1 + 0x32);
  *(int *)(param_1 + 0xb4) = (int)*(short *)(param_1 + 0x36);
  func_0x00077ebc(param_1);
  func_0x00051300(param_1);
  if ((DAT_1f800137 == '\x02') && (DAT_800bf80d == '\x02')) {
    *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

