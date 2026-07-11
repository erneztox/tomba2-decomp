// FUN_08032024

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08032024(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + 1;
        if (0x1d < (short)(sVar2 + 1)) {
          *(undefined2 *)(param_1 + 0x2e) = 0x179f;
          *(undefined2 *)(param_1 + 0x32) = 0xfa42;
          *(undefined2 *)(param_1 + 0x36) = 0x315b;
          *param_1 = 1;
          param_1[5] = 10;
          param_1[0x28] = param_1[0x28] | 0x80;
          DAT_800bfa29 = 10;
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 10) {
          halt_baddata();
        }
        if (DAT_800bf816 == '\0') {
          return;
        }
        if (DAT_800bf817 != '\f') {
          return;
        }
        func_0x0007778c(param_1);
      }
      goto LAB_080321f0;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    DAT_800e806c = 8;
    *(undefined2 *)(param_1 + 0x50) = 0x140;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    param_1[5] = param_1[5] + '\x01';
  }
  param_1[1] = 1;
  func_0x00077efc(param_1);
  sVar2 = *(short *)(param_1 + 0x4a);
  *(short *)(param_1 + 0x4a) = sVar2 + *(short *)(param_1 + 0x50);
  if (0x17ff < (short)(sVar2 + *(short *)(param_1 + 0x50))) {
    *(undefined2 *)(param_1 + 0x4a) = 0x1800;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  if (-0x9c5 < *(short *)(param_1 + 0x32)) {
    *(undefined2 *)(param_1 + 0x40) = 0;
    param_1[5] = param_1[5] + '\x01';
  }
  if (*(short *)(param_1 + 0x32) < -0xabe) {
    if ((_DAT_1f80017c & 1) == 0) {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 100;
      func_0x0003116c(0x2c,param_1 + 0x2c,0xffffffec);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -100;
    }
    func_0x0006cba8(param_1 + 0x2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_080321f0:
  if (param_1[1] != '\0') {
    func_0x000517f8(param_1);
  }
  return;
}

