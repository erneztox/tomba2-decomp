// FUN_08035acc

/* WARNING: Control flow encountered bad instruction data */

void FUN_08035acc(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (((byte)param_1[3] < 3) && ((DAT_800bfa42 & 0x80) != 0)) {
        param_1[4] = 3;
        halt_baddata();
      }
      param_1[0xb] = 0x20;
      *(undefined4 *)(param_1 + 0x18) = 0x80117628;
      *(undefined2 *)(param_1 + 100) = 200;
      *(undefined2 *)(param_1 + 0x66) = 200;
      param_1[0x60] = 0;
      param_1[0x61] = 0;
      param_1[0x62] = 0;
      param_1[99] = 0;
      *(undefined2 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x80) = 0x46;
      *(undefined2 *)(param_1 + 0x82) = 0x8c;
      *(short *)(param_1 + 0x84) = *(short *)(param_1 + 100) + 0x40;
      *param_1 = 1;
      param_1[4] = 1;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(short *)(param_1 + 0x86) = *(short *)(param_1 + 100) + 0x1d0;
      func_0x00122c70(param_1);
      param_1[0x2a] = *(undefined1 *)((byte)param_1[3] + 0x80146208);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) goto LAB_08035d80;
      DAT_800bfa42 = param_1[3] * '\x02' + 4;
      if (param_1[3] == '\x02') goto LAB_08035d3c;
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          halt_baddata();
        }
        sVar2 = *(short *)(param_1 + 0x68);
        *(short *)(param_1 + 0x68) = sVar2 + 0x199;
        if ((short)(sVar2 + 0x199) < 0x1000) {
          halt_baddata();
        }
LAB_08035d3c:
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 != 2) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) goto LAB_08035d80;
      DAT_800bfa42 = 0x80;
    }
    param_1[4] = 3;
LAB_08035d80:
    func_0x0007778c(param_1);
    halt_baddata();
  }
  if ((byte)param_1[3] < 3) {
    if (param_1[5] != '\0') {
      if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0012e82c(param_1);
      if (((byte)param_1[3] + 1) * 2 == (uint)DAT_800bfa42) {
        param_1[4] = 2;
        param_1[5] = 0;
        param_1[0x29] = 2;
        halt_baddata();
      }
      goto LAB_08035c80;
    }
    if (DAT_800bfa42 != 0) {
      param_1[0x29] = 0;
      param_1[5] = param_1[5] + '\x01';
      halt_baddata();
    }
  }
  func_0x0012e82c(param_1);
LAB_08035c80:
  func_0x0012e6cc(param_1);
  func_0x0012e168(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

