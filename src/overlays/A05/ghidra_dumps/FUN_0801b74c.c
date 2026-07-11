// FUN_0801b74c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0801b74c(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  func_0x0007778c();
  if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) == 0) {
    iVar4 = func_0x0012b118(param_1);
    if (iVar4 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    func_0x0010e5c4(param_1);
  }
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x0004766c(param_1);
    func_0x00048750(param_1);
    uVar2 = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x800;
    *(undefined2 *)(param_1 + 0x56) = uVar2;
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x4a);
  iVar4 = (uint)*(ushort *)(param_1 + 0x4a) + (uint)*(ushort *)(param_1 + 0x50);
  *(short *)(param_1 + 0x4a) = (short)iVar4;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar1 * 0x100;
  if (0x3000 < iVar4 * 0x10000 >> 0x10) {
    *(undefined2 *)(param_1 + 0x4a) = 0x3000;
  }
  func_0x000517f8(param_1);
  func_0x0004766c(param_1);
  iVar4 = func_0x00049250(param_1,0,
                          (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
  if (iVar4 != 0) {
    func_0x00048750(param_1);
    uVar3 = _DAT_1f8001a2;
    uVar2 = _DAT_1f8001a0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 0x56) = uVar2;
    *(undefined2 *)(param_1 + 0x58) = uVar3;
  }
  return iVar4 != 0;
}

