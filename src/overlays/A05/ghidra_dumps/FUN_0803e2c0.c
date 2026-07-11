// FUN_0803e2c0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803e2c0(int param_1)

{
  byte bVar1;
  short extraout_var;
  undefined2 extraout_var_00;
  int iVar2;
  undefined2 extraout_var_01;
  short extraout_var_02;
  int iVar3;
  short local_20;
  undefined2 local_1e;
  short local_1c;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
LAB_0803e390:
    if (DAT_800bf924 == -1) goto LAB_0803e3bc;
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(int *)(param_1 + 0x40) = param_1 + 0x54;
    *(int *)(param_1 + 0x3c) = param_1 + 0x54;
    *(undefined4 *)(param_1 + 0x50) = 0x8013fc14;
    *(undefined4 *)(param_1 + 0x54) = 0x10101010;
    *(undefined2 *)(param_1 + 0x2c) = 0x3ab8;
    *(undefined2 *)(param_1 + 0x2e) = 0xe53e;
    *(undefined2 *)(param_1 + 0x30) = 0x13e4;
    *(undefined2 *)(param_1 + 0x32) = 0xfff6;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    if (DAT_800bf924 == -1) {
      *(undefined2 *)(param_1 + 0x2e) = 0xe496;
      goto LAB_0803e390;
    }
  }
  if ((DAT_800bf9bf & 0x7f) < 2) {
    return;
  }
LAB_0803e3bc:
  func_0x0002b278(param_1);
  if ((DAT_800bf873 == '\0') && (*(char *)(param_1 + 1) != '\0')) {
    func_0x0009a450();
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - extraout_var;
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_1 + 0x2e) + (short)(-0x1b6a - *(short *)(param_1 + 0x2e) >> 3);
    func_0x00083e80((int)*(short *)(param_1 + 0x5a));
    *(undefined2 *)(param_1 + 0x48) = extraout_var_00;
    iVar2 = func_0x0009a450();
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) + (short)(iVar2 >> 9);
    func_0x00083e80((int)*(short *)(param_1 + 0x5c));
    *(undefined2 *)(param_1 + 0x4c) = extraout_var_01;
    func_0x0009a450();
    *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x5c) + extraout_var_02;
    if (*(char *)(param_1 + 5) == '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x58) < 0) {
      iVar2 = 0;
      do {
        iVar3 = func_0x0009a450();
        local_20 = *(short *)(param_1 + 0x2c) + (short)(iVar3 + -0x4000 >> 6);
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        iVar3 = func_0x0009a450();
        local_1c = *(short *)(param_1 + 0x30) + (short)(iVar3 + -0x4000 >> 6);
        func_0x00031220(0xd,&local_20,0xfffffffb);
        iVar3 = iVar2 << 0x10;
        iVar2 = iVar2 + -1;
      } while (0 < iVar3);
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

