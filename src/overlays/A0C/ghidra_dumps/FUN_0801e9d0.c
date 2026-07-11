// FUN_0801e9d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e9d0(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x52));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar2 * 0x40;
  iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x4e));
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (iVar2 >> 3);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (iVar2 >> 3);
  func_0x0004766c(param_1);
  DAT_1f800258 = '\0';
  func_0x0004954c(param_1,0x6c,0);
  if ((DAT_1f800258 == '\0') && (func_0x0004954c(param_1,0x6c,100), DAT_1f800258 == '\0')) {
    func_0x0004954c(param_1,0x6c,0xffffff88);
  }
  iVar2 = func_0x000493e8(param_1,100,0xffffff74);
  if (iVar2 == 0) {
    func_0x000493e8(param_1,0xffffff9c,0xffffff74);
  }
  iVar2 = func_0x00049250(param_1,100,0x78);
  if (iVar2 == 0) {
    func_0x00049250(param_1,0xffffff9c,0x78);
  }
  func_0x00049760(param_1);
  sVar1 = _DAT_1f8001a0;
  *(short *)(param_1 + 0x60) = _DAT_1f8001a0;
  if (*(short *)(param_1 + 0x6e) == -1) {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(short *)(param_1 + 0x56) = sVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x56) = sVar1 + 0x800;
  }
  return;
}

