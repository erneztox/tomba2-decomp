// FUN_0802ba6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_0802ba6c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  
  uVar5 = 0;
  puVar4 = (undefined2 *)(param_1 + 0x60);
  iVar2 = func_0x0004766c();
  if (iVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = func_0x00045cac(param_1,0x50,0xffffffe2,(int)*(short *)(param_1 + 0x56));
  if (iVar2 == 1) {
    uVar5 = 2;
    if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x5f) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x5f) = 3;
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    func_0x00049760(param_1);
    *puVar4 = _DAT_1f8001a0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = func_0x00049250(param_1,0,0x50);
  uVar1 = _DAT_1f8001a4;
  if ((uVar3 & 1) == 0) {
    if (uVar3 == 0) {
      func_0x00049760(param_1);
      *puVar4 = _DAT_1f8001a0;
      if (((int)_DAT_1f8001a6 & 0x8000U) != 0) {
        *(undefined4 *)(param_1 + 4) = 0x202;
      }
      if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
      return uVar5;
    }
    *(short *)(param_1 + 0x68) = _DAT_1f8001a6;
    *(undefined2 *)(param_1 + 0x6a) = uVar1;
  }
  else {
    *(short *)(param_1 + 0x68) = _DAT_1f8001a6;
    *(undefined2 *)(param_1 + 0x6a) = uVar1;
    *(undefined1 *)(param_1 + 0x29) = 1;
    func_0x00049674(param_1);
    *puVar4 = _DAT_1f8001a0;
    if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
      *(short *)(param_1 + 0x58) = _DAT_1f8001a2;
    }
    else {
      *(ushort *)(param_1 + 0x58) = 0x1000U - _DAT_1f8001a2 & 0xfff;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

