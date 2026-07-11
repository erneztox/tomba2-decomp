// FUN_0000ddac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000ddac(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      if (DAT_800bf841 == '\0') {
        iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x62));
        *(short *)(param_1 + 0x2e) = (short)(iVar4 * 600 >> 0xc) + 0x2880;
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x62));
        *(short *)(param_1 + 0x36) = 0x2600 - (short)(iVar4 * 600 >> 0xc);
        *(ushort *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + 8U & 0xfff;
      }
      func_0x00116224(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x62));
        *(short *)(param_1 + 0x2e) = (short)(iVar4 * 600 >> 0xc) + 0x2880;
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x62));
        *(short *)(param_1 + 0x36) = 0x2600 - (short)(iVar4 * 600 >> 0xc);
        *(ushort *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + 8U & 0xfff;
        func_0x001156f4(param_1);
        if (DAT_1f800246 == '\0') {
          *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x62);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[7] = 1;
        param_1[5] = param_1[5] + '\x01';
        iVar4 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
        uVar3 = func_0x000776f8((iVar4 + -0x400) * 0x10000 >> 0x10,(int)*(short *)(param_1 + 0x56),
                                0x80);
        *(undefined2 *)(param_1 + 0x56) = uVar3;
        *(short *)(*(int *)(param_1 + 0xc0) + 8) = *(short *)(*(int *)(param_1 + 0xc0) + 8) + 0x40;
        *(ushort *)(*(int *)(param_1 + 0xc0) + 8) =
             *(ushort *)(*(int *)(param_1 + 0xc0) + 8) & 0xfff;
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x60));
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x7c) + (short)(iVar4 >> 4);
        *(ushort *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 0x40U & 0xfff;
      }
    }
    else if (bVar1 == 2) {
      func_0x00116350(param_1);
    }
    else if (bVar1 == 3) {
      func_0x00116714(param_1);
      if ((param_1[1] == '\0') && (iVar4 = func_0x0007778c(param_1), iVar4 != 0)) {
        func_0x00051844(param_1);
      }
      _DAT_1f800240 = *(undefined2 *)(param_1 + 0x2e);
      _DAT_1f800242 = *(undefined2 *)(param_1 + 0x32);
      _DAT_1f800244 = *(undefined2 *)(param_1 + 0x36);
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar1) {
    if (3 < bVar1) {
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 == 0) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar4 = func_0x00051b70(param_1,0xc,3);
        if (iVar4 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x62) = 0x400;
        *(undefined2 *)(param_1 + 0x7c) = 0xf128;
        *(undefined2 *)(param_1 + 0x32) = 0xf128;
        *(undefined2 *)(param_1 + 0x80) = 400;
        *(undefined2 *)(param_1 + 0x82) = 800;
        *(undefined2 *)(param_1 + 0x84) = 100;
        *(undefined2 *)(param_1 + 0x86) = 200;
        *(undefined2 *)(param_1 + 0x78) = 600;
        *(undefined2 *)(param_1 + 0x7a) = 0x2880;
        *(undefined2 *)(param_1 + 0x7e) = 0x2600;
        *param_1 = 1;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x60) = 0;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x40) = 0;
        _DAT_1f800248 = param_1;
        *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x62);
        iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x62));
        *(short *)(param_1 + 0x2e) = (short)(iVar4 * 600 >> 0xc) + 0x2880;
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x62));
        *(short *)(param_1 + 0x36) = 0x2600 - (short)(iVar4 * 600 >> 0xc);
        if ((DAT_800bfa1a & 0x10) != 0) {
          param_1[4] = param_1[4] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[5] = param_1[5] + '\x01';
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -2000;
        func_0x0006cba8(param_1 + 0x2c);
      }
    }
    else {
      if (bVar1 == 2) {
        sVar2 = *(short *)(param_1 + 0x32);
        *(short *)(param_1 + 0x32) = sVar2 + 0x10;
        if (*(short *)(param_1 + 0x7c) < (short)(sVar2 + 0x10)) {
          *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x7c);
          func_0x0006e1e4();
          param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x0006cba8(param_1 + 0x2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 == 3) {
        if (DAT_1f800137 == '\0') {
          param_1[4] = 1;
          param_1[5] = 0;
        }
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x60));
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x7c) + (short)(iVar4 >> 4);
        *(ushort *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 0x40U & 0xfff;
        iVar4 = func_0x0007778c(param_1);
        if (iVar4 == 0) {
          return;
        }
        func_0x000517f8(param_1);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

