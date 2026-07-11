// FUN_08024620

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024620(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar3 = func_0x0007778c(param_1);
    if (((iVar3 == 0) && (DAT_1f800207 - 0xf < 4)) && (_DAT_1f800162 < -0x2648)) {
      func_0x0007703c(param_1);
    }
    if (DAT_1f80027a != '\0') {
      return;
    }
    if (param_1[1] != '\0') {
      sVar2 = *(short *)(param_1 + 0x44);
      if (sVar2 != 0) {
        if (sVar2 < -0x20) {
          *(short *)(param_1 + 0x44) = sVar2 + 0x20;
        }
        else if (sVar2 < 0x21) {
          *(undefined2 *)(param_1 + 0x44) = 0;
        }
        else {
          *(short *)(param_1 + 0x44) = sVar2 + -0x20;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = 0;
      if (param_1[0x29] != '\0') {
        iVar3 = (int)*(short *)(param_1 + 0x80);
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (*(short *)(param_1 + 0x60) * 0x28 == -0x80000000)) {
          trap(0x1800);
        }
        iVar3 = (*(short *)(param_1 + 0x60) * 0x28) / iVar3 >> 2;
      }
      if (iVar3 == 0) {
        param_1[0xbf] = 0;
      }
      else {
        *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
             *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + (short)iVar3;
        if (0 < iVar3) {
          if (0x1ff < *(short *)(*(int *)(param_1 + 0xc0) + 0xc)) {
            *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0x1ff;
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (*(short *)(*(int *)(param_1 + 0xc0) + 0xc) < -0x1ff) {
          *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0xfe01;
        }
        if (param_1[0x46] != -1) {
          param_1[0xbf] = 0;
          param_1[0x46] = 0xff;
        }
        if (param_1[0xbf] == '\0') {
          func_0x00074590(0x89,0,0);
          param_1[0xbf] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar3 = func_0x00051b70(param_1,0xc,0x16);
      if (iVar3 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x56) = 0xc00;
      *(undefined2 *)(param_1 + 0x80) = 0x1a7;
      *(undefined2 *)(param_1 + 0x82) = 0x34e;
      *(undefined2 *)(param_1 + 0x84) = 0x3e;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x86) = 0x72;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined2 *)(param_1 + 0x96) = 0;
      param_1[0xbf] = 0;
      param_1[0x46] = 0;
      *(undefined2 *)(param_1 + 0x40) = 0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

