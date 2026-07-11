// FUN_08019fec

/* WARNING: Control flow encountered bad instruction data */

void FUN_08019fec(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[5];
  iVar3 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    if (-1 < *(short *)(param_1 + 0x4a)) {
      *param_1 = 1;
      param_1[5] = param_1[5] + '\x01';
    }
    if (0 < *(short *)(param_1 + 0x78)) {
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) -
         (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) -
         (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x30) =
         *(int *)(param_1 + 0x30) +
         (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4a);
    func_0x0004766c(param_1);
    iVar3 = func_0x00049250(param_1,0,0x32);
    if (iVar3 != 1) {
      sVar2 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar2 + 0x30;
      if (0x1000 < (short)(sVar2 + 0x30)) {
        *(undefined2 *)(param_1 + 0x4a) = 0x1000;
      }
      goto LAB_0801a1c8;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0xff00;
    param_1[5] = param_1[5] + '\x01';
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) >> 1;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_0801a1c8:
      iVar3 = func_0x0007778c(param_1);
      if (iVar3 != 0) {
        func_0x00077b5c(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar3 + 0x2e);
      *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x32) + -0xa0;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar3 + 0x36);
      func_0x0004766c(param_1);
      func_0x00049760(param_1);
      *(undefined2 *)(param_1 + 0x44) = 0x1000;
      *(undefined2 *)(param_1 + 0x4a) = 0xfe00;
      param_1[0x29] = 0;
      param_1[5] = param_1[5] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

