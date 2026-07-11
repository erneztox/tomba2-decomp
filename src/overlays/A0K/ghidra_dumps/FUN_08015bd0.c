// FUN_08015bd0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015bd0(int param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  
  _DAT_1f80026c = *(short *)(param_1 + 0x2e);
  _DAT_1f800270 = *(short *)(param_1 + 0x36);
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    func_0x00076d68(param_1);
    *(undefined2 *)(param_1 + 0x44) = 0x1400;
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + 0x14;
    if (sVar2 == 1) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      DAT_800bfa53 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_08015d94:
    _DAT_1f80026c = *(short *)(param_1 + 0x2e) - _DAT_1f80026c;
    _DAT_1f800270 = *(short *)(param_1 + 0x36) - _DAT_1f800270;
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 0x5e) = 0;
      func_0x00054d14(param_1,0xe7,4);
      *(undefined2 *)(param_1 + 0x40) = 0x5a;
      *(undefined2 *)(param_1 + 0x140) = *(undefined2 *)(param_1 + 0x56);
      if (DAT_800bf871 == '\x05') {
        *(undefined1 *)(param_1 + 6) = 2;
        *(undefined2 *)(param_1 + 0x44) = 0;
        DAT_800bfa53 = 1;
        halt_baddata();
      }
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    func_0x00076d68(param_1,param_2,0x1f800000);
    if (_DAT_800bf85c != 2) {
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined1 *)(param_1 + 0x14b) = 0;
      *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x147) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0010c160(param_1);
    func_0x0010e7ec(param_1);
    func_0x0010c674(param_1,1);
    if (0x1400 < *(short *)(param_1 + 0x44)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00054d14(param_1,0xe7,4);
    if ((*(short *)(param_1 + 0x44) != 0) && ((_DAT_1f80017c & 7) == 0)) {
      func_0x00074590(0x80,0,0);
    }
    goto LAB_08015d94;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

