// FUN_0801fc18

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801fc18(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  func_0x0007778c();
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x50) + 0x380;
    *(short *)(param_1 + 0x50) = sVar2;
    if (0x1800 < sVar2) {
      *(undefined2 *)(param_1 + 0x50) = 0x1800;
    }
    if (*(short *)(param_1 + 0x2e) < 0x1741) {
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 2;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x80;
    if (-0xcd1 < *(short *)(param_1 + 0x32)) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 5) = 1;
      *(undefined2 *)(param_1 + 0x2e) = 0x1740;
      *(undefined2 *)(param_1 + 0x32) = 0xf330;
      *(undefined2 *)(param_1 + 0x56) = 0x4b0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x40) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    func_0x0006cba8(param_1 + 0x2c);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf9d6 != '\b') {
        return;
      }
      func_0x00074590(0x82,0xf,0);
      func_0x0003116c(1,param_1 + 0x2c,0xffffffec);
      *(undefined2 *)(param_1 + 0x36) = 0x2eb8;
      *(undefined2 *)(param_1 + 0x58) = 0x400;
      *(undefined2 *)(param_1 + 0x50) = 0xe800;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x40) + 1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 < 0x1e) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    iVar5 = (int)(((uint)_DAT_8013306e - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
    iVar4 = (int)(((uint)_DAT_8013306a - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
    sVar2 = func_0x00085690(iVar5,iVar4);
    *(short *)(param_1 + 0x56) = -sVar2;
    iVar3 = func_0x00083f50((int)-sVar2);
    *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
    sVar2 = func_0x00084080(iVar4 * iVar4 + iVar5 * iVar5);
    iVar3 = func_0x00085690((int)(((uint)_DAT_8013306c - (uint)*(ushort *)(param_1 + 0x32)) *
                                 0x10000) >> 0x10,(int)sVar2);
    iVar3 = func_0x00083e80(-iVar3);
    *(short *)(param_1 + 0x4a) = (short)(-iVar3 >> 4);
    *(undefined2 *)(param_1 + 0x44) = 0x1800;
    func_0x00041718(param_1,1);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 == 3) {
    iVar3 = (int)*(short *)(param_1 + 0x44);
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar3;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar3;
    if (sVar2 != 1) {
      if ((_DAT_1f80017c & 7) != 0) {
        return;
      }
      func_0x00074590(0x2d,0x14,0xffffffb0);
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

