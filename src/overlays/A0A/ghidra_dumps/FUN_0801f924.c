// FUN_0801f924

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f924(undefined1 *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sStack_26;
  short sStack_1e;
  
  *(undefined2 *)(param_1 + 0x40) = 0x32;
  *param_1 = 1;
  param_1[5] = param_1[5] + '\x01';
  *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
  *(short *)(param_1 + 0x32) = _DAT_800e7eb2 + -0xa28;
  *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
  param_1[0x2a] = DAT_800e7eaa;
  func_0x00048894();
  *(short *)(param_1 + 0x76) = _DAT_1f8001a4 + -0x32;
  iVar3 = func_0x000310f4(0xb0a,0);
  *(int *)(param_1 + 0x10) = iVar3;
  sVar2 = _DAT_1f8001a4;
  sVar1 = _DAT_1f8001a0;
  if (iVar3 != 0) {
    *(undefined1 **)(iVar3 + 0x10) = param_1;
    *(undefined2 *)(iVar3 + 0x48) = 0;
    *(short *)(iVar3 + 0x4e) = sVar2;
    *(short *)(iVar3 + 0x4a) = sVar1;
    *(undefined1 *)(iVar3 + 0x2a) = param_1[0x2a];
    iVar4 = func_0x00083f50((int)_DAT_1f8001a0);
    iVar5 = func_0x00083e80((int)_DAT_1f8001a0);
    sStack_26 = (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 0x10);
    sVar1 = (short)((iVar4 << 7) >> 0xc);
    *(short *)(param_1 + 0x2e) = sStack_26 + sVar1;
    sStack_1e = (short)((uint)*(undefined4 *)(param_1 + 0x34) >> 0x10);
    sVar2 = (short)(iVar5 * -0x80 >> 0xc);
    *(short *)(param_1 + 0x36) = sStack_1e + sVar2;
    func_0x00048894(param_1);
    *(undefined2 *)(iVar3 + 0x4c) = _DAT_1f8001a2;
    *(short *)(param_1 + 0x2e) = sStack_26 - sVar1;
    *(short *)(param_1 + 0x36) = sStack_1e - sVar2;
    func_0x00048894(param_1);
    *(undefined2 *)(iVar3 + 0x32) = _DAT_1f8001a2;
    *(short *)(param_1 + 0x2e) = sStack_26;
    *(short *)(param_1 + 0x36) = sStack_1e;
  }
  return;
}

