// FUN_0802d470

/* WARNING: Control flow encountered bad instruction data */

undefined1 FUN_0802d470(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  func_0x0004766c();
  func_0x00049760(param_1);
  iVar2 = func_0x0010be54(param_1,param_2);
  uVar1 = 1;
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x46) == '\b') {
      iVar2 = func_0x00049250(param_1,0,
                              (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                    (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
      if (iVar2 != 0) {
        *(undefined1 *)(param_1 + 0x2b) = 1;
      }
      func_0x0004954c(param_1,(int)((*(ushort *)(param_1 + 0x80) + 0x20) * 0x10000) >> 0x10,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x000495ac(param_1,0,0);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x2b) = 1;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x2b);
  }
  return uVar1;
}

