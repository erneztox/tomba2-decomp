// FUN_0801fac0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801fac0(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      func_0x0007778c(param_1);
      if (DAT_800bf809 == '\0') {
        sVar2 = *(short *)(param_1 + 0x40);
        *(ushort *)(param_1 + 0x40) = sVar2 - 1U;
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x82;
        if (((int)((uint)(ushort)(sVar2 - 1U) << 0x10) < 1) ||
           (*(short *)(param_1 + 0x76) <= *(short *)(param_1 + 0x32))) {
          func_0x00074590(0x8c,(int)((1 - (uint)(byte)param_1[3]) * 0x2000000) >> 0x18,0);
          func_0x00118ce0(param_1);
          *(undefined2 *)(param_1 + 0x40) = 7;
          param_1[0x5e] = 1;
          param_1[5] = param_1[5] + '\x01';
          halt_baddata();
        }
      }
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (DAT_800bf809 != '\0') {
          return;
        }
        sVar2 = *(short *)(param_1 + 0x40);
        *(short *)(param_1 + 0x40) = sVar2 + -1;
        if (sVar2 != 1) {
          return;
        }
        func_0x001188c0(param_1);
        func_0x00074590(6,0x16,0);
      }
    }
    else if (bVar1 == 2) {
      func_0x0007778c(param_1);
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 != 1) {
        return;
      }
      *param_1 = 2;
      param_1[4] = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0x78;
      *(undefined2 *)(param_1 + 0x82) = 0xf0;
      *(undefined2 *)(param_1 + 0x84) = 200;
      *(undefined2 *)(param_1 + 0x86) = 0x154;
      param_1[4] = 1;
      param_1[0x5e] = 0;
      bVar1 = *(byte *)((byte)param_1[3] + 0x80127170);
      param_1[0xb] = 0x16;
      *(undefined4 *)(param_1 + 0x7c) = 0x80113c70;
      param_1[0xd] = 1;
      *(undefined4 *)(param_1 + 0x78) = 0x8011c090;
      *(ushort *)(param_1 + 0x40) = (ushort)bVar1;
    }
  }
  else if (bVar1 == 2) {
    param_1[4] = 3;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

