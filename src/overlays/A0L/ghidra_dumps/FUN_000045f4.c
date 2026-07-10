// FUN_000045f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000045f4(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[0xb] = 0x20;
    *(undefined4 *)(param_1 + 0x18) = 0x8010c1d8;
    *(undefined2 *)(param_1 + 0x80) = 0x46;
    *(undefined2 *)(param_1 + 0x82) = 0x8c;
    *param_1 = 2;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x42) = 0x100;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
  sVar3 = *(short *)(param_1 + 0x40);
  sVar2 = sVar3 + 0x100;
  *(short *)(param_1 + 0x40) = sVar2;
  if (0x5ff < sVar2) {
    *(short *)(param_1 + 0x40) = sVar3 + -0x500;
  }
  iVar4 = *(short *)(param_1 + 0x42) * 0x18;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0x1f;
  }
  sVar3 = (short)(iVar4 >> 5);
  *(short *)(param_1 + 0x6c) = sVar3;
  *(short *)(param_1 + 0x68) = sVar3;
  if (sVar3 < 0x1000) {
    *(undefined2 *)(param_1 + 0x6c) = 0x1000;
    *(undefined2 *)(param_1 + 0x68) = 0x1000;
  }
  if ((byte)param_1[3] < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00004720 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef6f74))();
    return;
  }
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x36);
  if ((byte)param_1[3] < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00004800 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef6f54))();
    return;
  }
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x42) << 4;
  if (param_1[3] == '\b') {
    *(undefined2 *)(param_1 + 0x84) = 0;
    iVar4 = (int)*(short *)(param_1 + 0x32) - (int)*(short *)(param_1 + 0x62);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    *(short *)(param_1 + 0x86) = (short)iVar4 + 200;
    *(undefined2 *)(param_1 + 0x80) = 100;
    *(undefined2 *)(param_1 + 0x82) = 200;
    *(undefined2 *)(param_1 + 0x54) = 0;
    sVar3 = _DAT_1f8000f2;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(short *)(param_1 + 0x56) = -sVar3;
    func_0x0007703c(param_1,*(short *)(param_1 + 0x42) * 0x2c0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar3 = (*(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x62)) + 200;
  *(short *)(param_1 + 0x86) = sVar3;
  *(short *)(param_1 + 0x84) = sVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

