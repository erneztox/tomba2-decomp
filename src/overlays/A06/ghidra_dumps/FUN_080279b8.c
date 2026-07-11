// FUN_080279b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080279b8(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar4 = func_0x0007778c(param_1);
    if (iVar4 == 0) {
      return;
    }
    if (param_1[0x29] != '\0') {
      if ((DAT_800e7fc7 & 1) == 0) {
        iVar4 = func_0x00083e80((int)_DAT_800e7ed8);
        **(undefined2 **)(param_1 + 0xc0) = (short)(iVar4 * -8 >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = func_0x00083e80(-(int)_DAT_800e7ed8);
      **(undefined2 **)(param_1 + 0xc0) = (short)(iVar4 * -8 >> 0xc);
      uVar5 = func_0x00083f50(-(int)_DAT_800e7ed8);
      *(short *)(*(int *)(param_1 + 0xc0) + 2) = (short)(uVar5 >> 9);
      uVar2 = func_0x00085690((int)*(short *)(*(int *)(param_1 + 0xc0) + 2),
                              (int)*(short *)(param_1 + 0x60));
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = uVar2;
      sVar3 = func_0x00085690((int)**(short **)(param_1 + 0xc0),(int)*(short *)(param_1 + 0x60));
      *(short *)(*(int *)(param_1 + 0xc0) + 10) = -sVar3;
    }
    func_0x000517f8(param_1);
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
      iVar4 = func_0x00051b70(param_1,0xc,0x31);
      if (iVar4 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x1e;
      *(undefined2 *)(param_1 + 0x82) = 0x3c;
      *(undefined2 *)(param_1 + 0x84) = 0x32;
      *(undefined2 *)(param_1 + 0x86) = 100;
      *param_1 = 1;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x60) = 0x3e0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

