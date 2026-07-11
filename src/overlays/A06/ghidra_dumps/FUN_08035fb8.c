// FUN_08035fb8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08035fb8(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  short sVar7;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (((DAT_800bf809 != '\0') || (DAT_1f800137 != '\0')) &&
       (iVar6 = func_0x0007778c(param_1), iVar6 != 0)) {
      func_0x0004190c(param_1);
      if (*(short *)(param_1 + 0x7e) == 0) {
        *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + 0x10;
        *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + 0x10;
        *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x10;
        if (0x11ff < *(ushort *)(param_1 + 0xb8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (*(short *)(param_1 + 0x7e) != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + -0x10;
        *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + -0x10;
        *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x10;
        if (*(ushort *)(param_1 + 0xb8) < 0x1001) {
          *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + -1;
        }
      }
      func_0x000518fc(param_1);
    }
    bVar1 = param_1[5];
    if (bVar1 == 1) {
      func_0x0007778c(param_1);
      func_0x0012e7a8(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x0007778c(param_1);
      func_0x0012e4d0(param_1);
      halt_baddata();
    }
    if (bVar1 == 3) {
      param_1[1] = 1;
      func_0x0012e984(param_1);
      halt_baddata();
    }
    if (bVar1 != 4) {
      halt_baddata();
    }
    param_1[1] = 1;
    func_0x0012ed0c(param_1);
    if (param_1[1] == '\0') {
      return;
    }
    func_0x0004190c(param_1);
    sVar7 = *(short *)(param_1 + 0x7e);
    if (sVar7 != 0) goto LAB_0803663c;
    *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + 0x10;
    *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + 0x10;
    uVar2 = *(ushort *)(param_1 + 0xb8);
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x10;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      iVar6 = func_0x000519e0(param_1,7,_DAT_800ecfb0,0x80142120);
      uVar5 = _DAT_800ecfb4;
      if (iVar6 == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0x50;
        *(undefined2 *)(param_1 + 0x82) = 0xa0;
        *(undefined2 *)(param_1 + 0x84) = 100;
        *(undefined2 *)(param_1 + 0x86) = 200;
        param_1[0x1b] = 1;
        *param_1 = 1;
        param_1[0x5e] = 0;
        param_1[0x29] = 0;
        param_1[0xd] = param_1[0xd] | 1;
        *(undefined4 *)(param_1 + 0x3c) = uVar5;
        param_1[4] = param_1[4] + '\x01';
        if ((byte)param_1[3] < 3) {
          func_0x0004766c(param_1);
          func_0x00049760(param_1);
          uVar4 = _DAT_1f8001a2;
          uVar3 = _DAT_1f8001a0;
          *(undefined2 *)(param_1 + 0x7e) = 0;
          *(undefined2 *)(param_1 + 0x60) = uVar3;
          *(undefined2 *)(param_1 + 0x62) = uVar4;
          func_0x00119b20(param_1);
        }
        *(undefined2 *)(param_1 + 0x6a) = 0;
        *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_1 + 0x32);
        *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x36);
        if (param_1[3] == '\0') {
          param_1[0xbe] = 0;
          func_0x0004130c(param_1,0);
          func_0x00077c40(param_1,0x8014d97c,1);
          param_1[5] = 1;
          halt_baddata();
        }
        if ((byte)(param_1[3] - 1) < 2) {
          param_1[0xbe] = 1;
          func_0x0004130c(param_1,0);
          func_0x00077c40(param_1,0x8014d97c,0);
          param_1[5] = 0;
          halt_baddata();
        }
        func_0x00077c40(param_1,0x8014d97c,1);
        param_1[5] = 3;
        *param_1 = 2;
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
      return;
    }
    func_0x0007778c(param_1);
    if ((byte)param_1[5] < 9) {
                    /* WARNING: Could not emulate address calculation at 0x08036370 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6020))();
      return;
    }
    if (param_1[1] == '\0') {
      return;
    }
    func_0x0004190c(param_1);
    sVar7 = *(short *)(param_1 + 0x7e);
    if (sVar7 != 0) {
LAB_0803663c:
      if (sVar7 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + -0x10;
      *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + -0x10;
      *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x10;
      if (*(ushort *)(param_1 + 0xb8) < 0x1001) {
        *(short *)(param_1 + 0x7e) = *(short *)(param_1 + 0x7e) + -1;
      }
      goto LAB_080366c8;
    }
    *(short *)(param_1 + 0xb8) = *(short *)(param_1 + 0xb8) + 0x10;
    *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + 0x10;
    uVar2 = *(ushort *)(param_1 + 0xb8);
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x10;
  }
  if (0x11ff < uVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_080366c8:
  func_0x000518fc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

