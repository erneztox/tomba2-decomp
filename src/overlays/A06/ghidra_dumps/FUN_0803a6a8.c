// FUN_0803a6a8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803a6a8(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar7;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      goto LAB_0803a758;
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00132ed0(param_1);
    *(undefined2 *)(param_1 + 0x4a) = 0x1600;
    *(undefined2 *)(param_1 + 0x50) = 0x580;
    func_0x00041718(param_1,8,0);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  if (*(char *)(param_1 + 0x79) == '\x01') {
    func_0x00041718(param_1,9,4);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
LAB_0803a758:
  sVar3 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x4a) = sVar3;
  if (0x47ff < sVar3) {
    *(undefined2 *)(param_1 + 0x4a) = 0x4800;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  func_0x00048894(param_1);
  iVar6 = (uint)_DAT_1f8001a4 - (uint)*(ushort *)(param_1 + 0x32);
  uVar4 = (undefined2)iVar6;
  iVar7 = iVar6 * 0x10000 >> 0x10;
  if (0x280 < iVar7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar6 = iVar6 * 0x10000;
  if (iVar7 < 0x80) {
    uVar4 = 0x80;
    iVar6 = 0x800000;
  }
  if ((iVar6 >> 0x10 != 0x280) || (*(short *)(param_1 + 0x66) != 0x280)) {
    *(undefined2 *)(param_1 + 0x66) = uVar4;
    *(short *)(*(int *)(param_1 + 0x104) + 0x3a) = (short)((iVar6 >> 0x10) * 0x333 >> 7);
  }
  func_0x0004766c(param_1);
  if (*(char *)(param_1 + 0x29) == '\0') {
    cVar2 = func_0x00049250(param_1,0,0x80);
    *(char *)(param_1 + 0x29) = cVar2 << 1;
    if ((char)(cVar2 << 1) == '\0') {
      func_0x00049760(param_1);
      uVar4 = _DAT_1f8001a2;
      *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x62) = uVar4;
      if (*(char *)(param_1 + 0x29) != '\0') {
        if (DAT_800e7e80 != '\x01') {
          func_0x00041768(param_1,0xd,4);
          func_0x0009a450();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00041768(param_1,0xe,4);
        uVar5 = func_0x0009a450();
        *(ushort *)(param_1 + 0x40) = (uVar5 & 0x1f) + 0x1e;
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 6) = 2;
      }
      return;
    }
  }
  func_0x00049674(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

