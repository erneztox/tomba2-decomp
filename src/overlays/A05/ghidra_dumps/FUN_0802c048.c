// FUN_0802c048

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802c048(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  byte bVar6;
  undefined1 uVar7;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    func_0x00122cd4(param_1,1);
    sVar2 = *(short *)(param_1 + 0x4a);
    sVar3 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x200;
    *(short *)(param_1 + 0x4a) = sVar3 + *(short *)(param_1 + 0x50);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
    if ((int)((uint)(ushort)(sVar3 + *(short *)(param_1 + 0x50)) << 0x10) < 1) {
      return;
    }
    param_1[6] = param_1[6] + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x4a) = 0xe000;
      param_1[6] = 1;
      *(undefined2 *)(param_1 + 0x50) = 0x200;
      bVar1 = DAT_800e7fc7;
      *(undefined2 *)(param_1 + 0x44) = 0x800;
      param_1[0xbe] = bVar1 & 1;
    }
  }
  else if (bVar1 == 2) {
    func_0x00122cd4(param_1,1);
    sVar2 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x200;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
    func_0x0004766c(param_1);
    bVar6 = func_0x00049250(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    bVar1 = param_1[0x29];
    param_1[0x29] = bVar1 | bVar6;
    if (bVar1 != 0 || bVar6 != 0) {
      func_0x00049674(param_1);
      if ((param_1[0x46] & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
      uVar5 = _DAT_1f8001a2;
      uVar4 = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x58) = _DAT_1f8001a2;
      *(undefined2 *)(param_1 + 0x60) = uVar4;
      *(undefined2 *)(param_1 + 0x62) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00049760(param_1);
    if (param_1[0x29] == '\0') {
      return;
    }
    *param_1 = 1;
    param_1[4] = 1;
    uVar7 = func_0x00123108(param_1);
    param_1[5] = uVar7;
    param_1[6] = 0;
    param_1[7] = 0;
    func_0x00074590(0x89,0,0xffffffec);
    func_0x0003116c(0,param_1 + 0x2c,0xffffffce);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

