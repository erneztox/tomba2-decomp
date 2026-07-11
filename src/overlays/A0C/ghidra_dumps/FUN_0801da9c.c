// FUN_0801da9c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801da9c(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      if (DAT_800bf841 == '\0') {
        iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x76));
        *(short *)(param_1 + 0x2e) = (short)(iVar4 * 0x4b0 >> 0xc) + 0x1600;
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x76));
        *(short *)(param_1 + 0x36) = 0x12c0 - (short)(iVar4 * 0x4b0 >> 0xc);
      }
      func_0x00115f14(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x76));
        *(short *)(param_1 + 0x2e) = (short)(iVar4 * 0x4b0 >> 0xc) + 0x1600;
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x76));
        *(short *)(param_1 + 0x36) = 0x12c0 - (short)(iVar4 * 0x4b0 >> 0xc);
        func_0x001153e4(param_1);
        if (DAT_1f800246 == '\0') {
          *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x62);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[7] = 1;
        param_1[5] = param_1[5] + '\x01';
        iVar4 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
        uVar2 = func_0x000776f8((iVar4 + -0x400) * 0x10000 >> 0x10,(int)*(short *)(param_1 + 0x56),
                                0x80);
        *(undefined2 *)(param_1 + 0x56) = uVar2;
        *(short *)(*(int *)(param_1 + 0xc0) + 8) = *(short *)(*(int *)(param_1 + 0xc0) + 8) + 0x40;
        *(ushort *)(*(int *)(param_1 + 0xc0) + 8) =
             *(ushort *)(*(int *)(param_1 + 0xc0) + 8) & 0xfff;
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x60));
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x7c) + (short)(iVar4 >> 4);
        *(ushort *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 0x40U & 0xfff;
        iVar4 = (_DAT_800e7eb2 + 300) - (uint)*(ushort *)(param_1 + 0x7c);
        if ((iVar4 + 0x20U & 0xffff) < 0x41) {
          *(short *)(param_1 + 0x7c) = (short)(_DAT_800e7eb2 + 300);
        }
        else {
          iVar5 = iVar4 * 0x10000 >> 0x10;
          iVar4 = iVar5;
          if (iVar5 < 0) {
            iVar4 = -iVar5;
          }
          sVar3 = (short)iVar4;
          if (0x200 < sVar3) {
            sVar3 = 0x200;
          }
          if (iVar5 < 0) {
            sVar3 = -sVar3;
          }
          *(short *)(param_1 + 0x7c) = *(short *)(param_1 + 0x7c) + (sVar3 >> 4);
        }
      }
    }
    else if (bVar1 == 2) {
      func_0x00116040(param_1);
    }
    else if (bVar1 == 3) {
      func_0x00116404(param_1);
      if ((param_1[1] == '\0') && (iVar4 = func_0x001168dc(param_1), iVar4 != 0)) {
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
      func_0x0006cba8(param_1 + 0x2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        iVar4 = func_0x00051b70(param_1,0xc,5);
        if (iVar4 != 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x76) = 0x400;
        *(undefined2 *)(param_1 + 0x80) = 400;
        *(undefined2 *)(param_1 + 0x84) = 100;
        *(undefined2 *)(param_1 + 0x86) = 200;
        *(undefined2 *)(param_1 + 0x7a) = 0x1600;
        *(undefined2 *)(param_1 + 0x7c) = 0xf060;
        *(undefined2 *)(param_1 + 0x7e) = 0x12c0;
        *param_1 = 1;
        param_1[0x29] = 0;
        *(undefined2 *)(param_1 + 0x82) = 800;
        *(undefined2 *)(param_1 + 0x60) = 0;
        *(undefined2 *)(param_1 + 0x62) = 0x400;
        *(undefined2 *)(param_1 + 100) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x74) = 0;
        *(undefined2 *)(param_1 + 0x78) = 800;
        *(undefined2 *)(param_1 + 0x40) = 0;
        _DAT_1f800248 = param_1;
        iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x76));
        *(short *)(param_1 + 0x2e) = (short)(iVar4 * 0x4b0 >> 0xc) + 0x1600;
        iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x76));
        *(short *)(param_1 + 0x36) = 0x12c0 - (short)(iVar4 * 0x4b0 >> 0xc);
        if ((DAT_800bfa1a & 4) != 0) {
          param_1[4] = param_1[4] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_1[5] = param_1[5] + '\x01';
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -2000;
        *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x62);
      }
    }
    else {
      if (bVar1 == 2) {
        sVar3 = *(short *)(param_1 + 0x32);
        *(short *)(param_1 + 0x32) = sVar3 + 0x10;
        if ((short)(sVar3 + 0x10) <= *(short *)(param_1 + 0x7c)) {
          func_0x0006cba8(param_1 + 0x2c);
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x7c);
        func_0x0006e1e4();
        func_0x0006ea00();
        param_1[5] = param_1[5] + '\x01';
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

