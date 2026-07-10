// FUN_00003344

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003344(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
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
    if (((int)(uint)DAT_800bfa3d >> ((byte)param_1[3] & 0x1f) & 1U) != 0) {
      param_1[4] = 3;
      halt_baddata();
    }
    iVar2 = func_0x00051b70(param_1,0xc,(int)*(short *)((uint)(byte)param_1[3] * 2 + -0x7fef1c74));
    if (iVar2 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x80) = 0x118;
    *(undefined2 *)(param_1 + 0x82) = 0x230;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x84) = 0x172;
    *(undefined2 *)(param_1 + 0x86) = 0x172;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    param_1[4] = param_1[4] + '\x01';
    if (DAT_800bfa41 == '\0') {
      param_1[5] = 0;
      halt_baddata();
    }
    if (*(char *)(*(short *)((uint)(byte)param_1[3] * 2 + -0x7fef1c68) + -0x7ff4074c) != '\0') {
      param_1[5] = 2;
      *param_1 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[5] = 1;
    iVar2 = func_0x00031220(0xa02,0,0);
    if (iVar2 != 0) {
      *(char *)(iVar2 + 3) = param_1[3] + '\x01';
      *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(iVar2 + 0x2e) = *(short *)(param_1 + 0x32) + -0x96;
      *(undefined2 *)(iVar2 + 0x30) = *(undefined2 *)(param_1 + 0x36);
      if (param_1[3] != '\0') {
        *(undefined2 *)(iVar2 + 0x50) = 0xd00;
        *(undefined2 *)(iVar2 + 0x52) = 0xfb17;
        *(undefined2 *)(iVar2 + 0x54) = 0xced;
        *(int *)(param_1 + 0x10) = iVar2;
        halt_baddata();
      }
      *(undefined2 *)(iVar2 + 0x50) = 0x780;
      *(undefined2 *)(iVar2 + 0x52) = 0xfcc8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return;
  }
  param_1[1] = 1;
  func_0x00077ebc(param_1);
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    iVar2 = func_0x0010bd00(param_1);
    if (iVar2 != 0) {
      param_1[6] = 0;
      *param_1 = 2;
      param_1[5] = param_1[5] + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = func_0x0010c01c(param_1);
      if (iVar2 != 0) {
        param_1[6] = 0;
        param_1[5] = param_1[5] + '\x01';
        halt_baddata();
      }
      goto LAB_000035b8;
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
  }
  if (param_1[3] == '\0') {
    func_0x0010be20(param_1);
  }
LAB_000035b8:
  func_0x000517f8(param_1);
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

