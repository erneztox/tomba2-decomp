// FUN_0802c258

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802c394) */
/* WARNING: Removing unreachable block (ram,0x0802c3a4) */
/* WARNING: Removing unreachable block (ram,0x0802c3ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802c258(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if ((DAT_800bf9c9 & 0x80) != 0) {
      *(undefined1 *)(param_1 + 6) = 2;
      DAT_800e806c = 0x11;
      *(undefined2 *)(param_1 + 0x40) = 10;
      iVar4 = (int)*(short *)(param_1 + 0x40);
      iVar6 = ((int)*(short *)(param_1 + 0x70) - (int)*(short *)(param_1 + 0x32)) * 0x10;
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      if ((iVar4 == -1) && (iVar6 == -0x80000000)) {
        trap(0x1800);
      }
      iVar7 = (int)*(short *)(param_1 + 0x40);
      iVar5 = ((int)*(short *)(param_1 + 0x72) - (int)*(short *)(param_1 + 0x36)) * 0x10;
      if (iVar7 == 0) {
        trap(0x1c00);
      }
      if ((iVar7 == -1) && (iVar5 == -0x80000000)) {
        trap(0x1800);
      }
      *(short *)(param_1 + 0x4e) =
           (short)((((int)*(short *)(param_1 + 0x6e) - (int)*(short *)(param_1 + 0x2e)) * 0x10) / 10
                  );
      *(short *)(param_1 + 0x50) = (short)(iVar6 / iVar4);
      *(short *)(param_1 + 0x52) = (short)(iVar5 / iVar7);
    }
    _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
    *(undefined1 *)(param_1 + 1) = 0;
    _DAT_800e8046 = *(undefined2 *)(param_1 + 0x32);
    _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
    _DAT_800e8074 = -_DAT_1f8000ee;
    _DAT_800e8076 = 0x120;
    if (_DAT_800bf854 < 3) {
      _DAT_800e8078 = 0x200;
    }
    else {
      _DAT_800e8078 = 0xfe00;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x200;
      iVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x52));
      *(int *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x30) + iVar4 * *(short *)(param_1 + 0x44) * 0x10;
      iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x52));
      iVar6 = iVar4 * *(short *)(param_1 + 0x44) >> 4;
      iVar4 = *(short *)(param_1 + 0x4c) * iVar6;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar6;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar4;
      if ((*(byte *)(param_1 + 0x46) & 8) != 0) {
        return;
      }
      uVar3 = func_0x00085690(-iVar4);
      *(undefined2 *)(param_1 + 0x56) = uVar3;
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_800bf9c9 = DAT_800bf9c9 & 0x7f;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x4e) * 0x1000;
    *(undefined1 *)(param_1 + 1) = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x1000;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x52) * 0x1000;
    _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
    _DAT_800e8046 = *(undefined2 *)(param_1 + 0x32);
    _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
    _DAT_800e8074 = -_DAT_1f8000ee;
    _DAT_800e8076 = 0x120;
    if (2 < _DAT_800bf854) {
      _DAT_800e8078 = 0xfe00;
      if ((_DAT_1f80017c & 7) == 0) {
        func_0x00074590(0x93,0,0);
      }
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

