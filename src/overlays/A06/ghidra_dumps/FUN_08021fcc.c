// FUN_08021fcc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021fcc(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x100;
        sVar4 = *(short *)(param_1 + 0x40);
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        *(short *)(param_1 + 0x40) = sVar4 + -1;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x100;
        if (sVar4 != 1) {
          return;
        }
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        _DAT_800bf854 = *(byte *)(param_1 + 3) + 1;
        func_0x00074590(8,0xfffffff1,0xffffffd8);
        if (*(char *)(param_1 + 3) == '\0') {
          func_0x0004ed94(0x3d,0x41);
          func_0x00040b48(0x1c);
          halt_baddata();
        }
        if (*(char *)(param_1 + 3) == '\x01') {
          func_0x0004ed94(0x3e,0x41);
          halt_baddata();
        }
        func_0x0004ed94(0x3f,0x41);
        func_0x00040c00(0x1c);
        halt_baddata();
      }
      if (bVar1 != 3) {
        halt_baddata();
      }
      if (_DAT_800bf854 == 0) {
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 0x5e) = 1;
        DAT_1f800137 = 0;
        DAT_800bf841 = 0;
        func_0x0006ea00();
        DAT_800e806c = 0;
        halt_baddata();
      }
      if (_DAT_800bf854 != 0xff) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 2;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 5) = 1;
    func_0x00074590(0x94,0xfffffff6,0xffffffe2);
    DAT_1f800137 = 2;
    DAT_800bf841 = 1;
    DAT_800e806c = 8;
    func_0x0006cba8(param_1 + 0x2c);
    *(undefined2 *)(param_1 + 0x44) = 0xd000;
    *(undefined2 *)(param_1 + 0x40) = 0x28;
    *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x36);
    iVar11 = (int)*(short *)((uint)*(byte *)(param_1 + 3) * 6 + -0x7febb1ee) -
             (int)*(short *)(param_1 + 0x32);
    iVar5 = -(int)*(short *)(param_1 + 0x44) >> 8;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar11 == -0x80000000)) {
      trap(0x1800);
    }
    iVar5 = iVar11 / iVar5 + 1;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar11 * 0x100 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 0x4a) = (short)((iVar11 * 0x100) / iVar5);
  }
  if (*(short *)(param_1 + 0x32) < *(short *)((uint)*(byte *)(param_1 + 3) * 6 + -0x7febb1ee)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
  func_0x0004766c(param_1);
  func_0x00049760(param_1);
  sVar4 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar4 + -1;
  if (sVar4 == 1) {
    DAT_800e806c = 2;
    _DAT_800e8076 = 0x80;
    _DAT_800e8078 = 0xfec0;
    _DAT_800e8074 = _DAT_801003f8 * 5;
    _DAT_800e8042 = *(undefined2 *)((uint)*(byte *)(param_1 + 3) * 6 + -0x7febb1f0);
    _DAT_800e8046 = *(short *)((uint)*(byte *)(param_1 + 3) * 6 + -0x7febb1ee) + 100;
    _DAT_800e804a = *(undefined2 *)((uint)*(byte *)(param_1 + 3) * 6 + -0x7febb1ec);
    *(undefined2 *)(param_1 + 0x2e) = 0x47ea;
    *(undefined2 *)(param_1 + 0x32) = 0xf647;
    *(undefined2 *)(param_1 + 0x36) = 0x266a;
    uVar10 = (uint)*(byte *)(param_1 + 3);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    iVar5 = uVar10 * 6;
    sVar4 = *(short *)(iVar5 + -0x7febb1ee);
    sVar2 = *(short *)(iVar5 + -0x7febb1f0);
    sVar3 = *(short *)(iVar5 + -0x7febb1ec);
    if ((uVar10 != 0) && (uVar10 == 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x40) = 0x5a;
    iVar5 = (int)*(short *)(param_1 + 0x40);
    iVar11 = ((int)sVar2 - (int)*(short *)(param_1 + 0x2e)) * 0x100;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar11 == -0x80000000)) {
      trap(0x1800);
    }
    iVar6 = (int)*(short *)(param_1 + 0x40);
    iVar8 = ((int)sVar4 - (int)*(short *)(param_1 + 0x32)) * 0x100;
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) && (iVar8 == -0x80000000)) {
      trap(0x1800);
    }
    iVar9 = (int)*(short *)(param_1 + 0x40);
    iVar7 = (sVar3 + -0x266a) * 0x100;
    if (iVar9 == 0) {
      trap(0x1c00);
    }
    if ((iVar9 == -1) && (iVar7 == -0x80000000)) {
      trap(0x1800);
    }
    *(short *)(param_1 + 0x48) = (short)(iVar11 / iVar5);
    *(short *)(param_1 + 0x4a) = (short)(iVar8 / iVar6);
    *(short *)(param_1 + 0x4c) = (short)(iVar7 / iVar9);
  }
  else {
    func_0x0006cba8(param_1 + 0x2c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

