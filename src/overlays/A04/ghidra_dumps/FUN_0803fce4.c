// FUN_0803fce4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803fce4(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((0x300b < _DAT_1f800164) && (_DAT_1f8000f2 < 0x400)) {
      func_0x0007703c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0007778c(param_1);
    if (param_1[5] == '\0') {
      if (param_1[0x2b] != '\0') {
        param_1[5] = 1;
        *(undefined2 *)(param_1 + 0x42) = 2;
        halt_baddata();
      }
    }
    else {
      if (param_1[5] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar3 = *(short *)(param_1 + 0x4e) + 0x200U & 0xfff;
      *(ushort *)(param_1 + 0x4e) = uVar3;
      if ((uVar3 == 0) &&
         (sVar2 = *(short *)(param_1 + 0x42), *(short *)(param_1 + 0x42) = sVar2 + -1, sVar2 == 1))
      {
        param_1[5] = 0;
      }
      iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x66) + (short)((iVar4 << 5) >> 0xc);
    }
    if (param_1[1] != '\0') {
      func_0x00138a98(param_1);
      func_0x000517f8(param_1);
    }
    param_1[0x2b] = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bfa0c & 0x80) == 0) {
        iVar4 = func_0x00051b70(param_1,0xc,0x24);
        if (iVar4 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x80) = 100;
        *(undefined2 *)(param_1 + 0x82) = 100;
        *(undefined2 *)(param_1 + 0x84) = 0x6e;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x86) = 0xdc;
        param_1[4] = param_1[4] + '\x01';
        func_0x0004766c(param_1);
        func_0x00048750(param_1);
        *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
        *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0x300;
        func_0x0011bdfc(param_1,0);
        func_0x0011bdfc(param_1,1);
        func_0x0011bf00(param_1,0);
        func_0x0011bf00(param_1,1);
        func_0x0011bf00(param_1,2);
        func_0x0011bf00(param_1,3);
        func_0x0011bf00(param_1,4);
        *(undefined2 *)(param_1 + 0x5c) = 0x363f;
        *(undefined2 *)(param_1 + 0x40) = 0;
        *(undefined2 *)(param_1 + 0xe) = 0;
        param_1[0xd] = param_1[0xd] | 8;
        *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_1 + 0x32);
        *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x36);
        func_0x000517f8(param_1);
        *(undefined2 *)(param_1 + 0x4e) = 0;
      }
      else {
        uVar5 = 0;
        do {
          if (((int)(uint)DAT_800bfa0c >> (uVar5 & 0x1f) & 1U) == 0) {
            func_0x0013ebe4(param_1 + 0x2c,1,uVar5);
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 5);
        param_1[4] = 3;
      }
    }
  }
  else if (bVar1 == 2) {
    if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0803ffbc */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5c44))();
      return;
    }
    iVar4 = func_0x0007778c(param_1);
    if (iVar4 == 0) {
      return;
    }
    func_0x00138a98(param_1);
    func_0x000517f8(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

