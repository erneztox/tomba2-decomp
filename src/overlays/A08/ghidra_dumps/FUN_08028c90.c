// FUN_08028c90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08029060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028c90(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((DAT_800bf80a != '\0') && (DAT_800bf80b != -0x78)) {
      func_0x0007778c(param_1);
      func_0x000517f8(param_1);
      halt_baddata();
    }
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      param_1[0x5e] = 0;
      if (param_1[0x29] == '\0') {
        if (*(short *)(param_1 + 0x42) == 0) {
          sVar2 = *(short *)(param_1 + 0x32);
          *(short *)(param_1 + 0x32) = sVar2 + -8;
          if ((short)(sVar2 + -8) < -0xf5f) {
            *(undefined2 *)(param_1 + 0x32) = 0xf0a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
          *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x42) = 0x1e;
        sVar2 = *(short *)(param_1 + 0x32);
        if (*(short *)(param_1 + 0x32) == -0xec0) {
          param_1[0x5e] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0x32) = sVar2 + 8;
        if (-0xec1 < (short)(sVar2 + 8)) {
          *(undefined2 *)(param_1 + 0x32) = 0xf140;
          param_1[0x5e] = 1;
          func_0x00074590(0x1a,0xfffffff8,0);
        }
        _DAT_800bf850 = 1;
        if ((DAT_800bf80a != '\0') && (DAT_800bf80b == -0x78)) {
          func_0x00042354(1,2);
          param_1[5] = param_1[5] + '\x01';
          iVar3 = func_0x00072ddc(0,1,3,0x10);
          if (iVar3 != 0) {
            *(undefined4 *)(iVar3 + 0x1c) = 0x801280d0;
            *(undefined1 *)(iVar3 + 3) = 0x11;
            halt_baddata();
          }
        }
      }
    }
    else {
      if (bVar1 < 2) {
        if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar1 = param_1[6];
        if (bVar1 == 1) {
          param_1[6] = 2;
          func_0x00040cdc(param_1,0,0x8014549c);
          param_1[0x70] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 < 2) {
          if ((bVar1 == 0) && (param_1[0x29] != '\0')) {
            param_1[6] = 1;
            func_0x00054198(&DAT_800e7e80);
            _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
            _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
            _DAT_800bf850 = 1;
            func_0x00042354(1,2);
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 != 2) {
          halt_baddata();
        }
        func_0x00041098(param_1);
        iVar3 = 0;
        if (param_1[0x70] == -1) {
          param_1[6] = 0;
          func_0x00042310();
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 2) {
          halt_baddata();
        }
        iVar3 = func_0x00121ad8(param_1);
      }
      if (iVar3 != 0) {
        param_1[5] = param_1[5] + '\x01';
      }
    }
    iVar3 = func_0x0007778c(param_1);
    if (iVar3 != 0) {
      func_0x000517f8(param_1);
    }
    param_1[0x29] = 0;
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
      iVar3 = func_0x00051b70(param_1,0xc,0x3b);
      if (iVar3 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x5d;
      *(undefined2 *)(param_1 + 0x82) = 0xba;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x84) = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x40;
      param_1[0x29] = 0;
      *(undefined2 *)(param_1 + 0x42) = 0;
      param_1[4] = param_1[4] + '\x01';
      iVar3 = func_0x00072ddc(0,1,2,0xce);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x1c) = 0x8013ddd4;
        *(undefined2 *)(iVar3 + 0x2e) = 0x445c;
        *(undefined2 *)(iVar3 + 0x32) = 0xead7;
        *(undefined2 *)(iVar3 + 0x36) = 0x1040;
      }
      if (DAT_800bf928 == -1) {
        param_1[5] = 3;
        *(undefined2 *)(param_1 + 0x32) = 0xf140;
        _DAT_800bf850 = 1;
        iVar3 = func_0x00072ddc(0,1,3,0x10);
        if (iVar3 == 0) {
          return;
        }
        *(undefined4 *)(iVar3 + 0x1c) = 0x801280d0;
        *(undefined1 *)(iVar3 + 3) = 0x11;
      }
      else if (DAT_800bf928 == '\0') {
        *(undefined2 *)(param_1 + 0x32) = 0xf0a0;
        param_1[5] = 0;
      }
      else {
        *(undefined2 *)(param_1 + 0x32) = 0xf0a0;
        param_1[5] = 1;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

