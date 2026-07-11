// FUN_0803d9f0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803d9f0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  
  if (3 < *(byte *)(param_1 + 0x46)) {
    local_20 = 100;
    local_1e = 0;
    local_1c = 0;
    iVar5 = *(int *)(param_1 + 0xd4);
    func_0x000844c0(iVar5 + 0x18,&local_20,&local_18);
    iVar3 = (uint)local_18 + (uint)*(ushort *)(iVar5 + 0x2c);
    local_18 = (ushort)iVar3;
    iVar4 = (uint)local_16 + (uint)*(ushort *)(iVar5 + 0x30);
    local_16 = (ushort)iVar4;
    iVar5 = (uint)local_14 + (uint)*(ushort *)(iVar5 + 0x34);
    local_14 = (ushort)iVar5;
    if (*(char *)(param_1 + 0x46) == '\x04') {
      iVar6 = (int)((iVar3 - (uint)_DAT_800e7eae) * 0x10000) >> 0x10;
      if ((((int)((iVar3 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10) * iVar6 < 0) &&
         (100 < iVar6 + 0x32)) {
        iVar4 = iVar4 - (uint)_DAT_800e7eb2;
        iVar3 = iVar4 * 0x10000 >> 0x10;
        iVar2 = (int)((iVar5 - (uint)_DAT_800e7eb6) * 0x10000) >> 0x10;
        local_16 = (ushort)iVar4;
        local_14 = (ushort)(iVar5 - (uint)_DAT_800e7eb6);
        sVar1 = func_0x00084080(iVar6 * iVar6 + iVar3 * iVar3 + iVar2 * iVar2);
        iVar3 = (int)sVar1;
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (iVar6 * 0x1e == -0x80000000)) {
          trap(0x1800);
        }
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((short)local_16 * 0x1e == -0x80000000)) {
          trap(0x1800);
        }
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && ((short)local_14 * 0x1e == -0x80000000)) {
          trap(0x1800);
        }
        _DAT_800e7eae = _DAT_800e7eae + (short)((iVar6 * 0x1e) / iVar3);
        _DAT_800e7eb2 = _DAT_800e7eb2 + (short)(((short)local_16 * 0x1e) / iVar3);
        _DAT_800e7eb6 = _DAT_800e7eb6 + (short)(((short)local_14 * 0x1e) / iVar3);
      }
      else {
        *(undefined1 *)(param_1 + 0x46) = 5;
        _DAT_800e7eae = local_18;
        _DAT_800e7eb2 = local_16;
        _DAT_800e7eb6 = local_14;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = (int)((iVar3 - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
    iVar4 = (int)((iVar5 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
    sVar1 = func_0x00084080(iVar3 * iVar3 + iVar4 * iVar4);
    _DAT_800e7ed8 =
         func_0x00085690((int)(((uint)local_16 - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000) >>
                         0x10,(int)sVar1);
    _DAT_800e7ed8 = _DAT_800e7ed8 & 0xfff;
    if (*(char *)(param_1 + 0xbe) == '\0') {
      _DAT_800e7ed8 = 0x1000 - _DAT_800e7ed8;
    }
    if (DAT_800e7fc7 != '\x01') {
      _DAT_800e7ed8 = 0x1000 - _DAT_800e7ed8;
    }
    _DAT_800e7eae = local_18;
    _DAT_800e7eb2 = local_16;
    _DAT_800e7eb6 = local_14;
  }
  return;
}

