// FUN_0803e638

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803e638(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = (int)-*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar3;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar3;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar3;
  func_0x0004766c(param_1);
  if (*(char *)(param_1 + 3) == '\x03') {
    iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x7c) - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x7e) - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000)
            >> 0x10;
    if (iVar1 * iVar1 + iVar3 * iVar3 < 0x40001) {
      func_0x00049250(param_1,0,0x212);
      func_0x00049674(param_1);
      sVar2 = _DAT_1f8001a0;
      *(short *)(param_1 + 0x60) = _DAT_1f8001a0;
      if (*(char *)(param_1 + 0xbe) != '\0') {
        *(ushort *)(param_1 + 0x56) = sVar2 + 0x800U & 0xfff;
        return 0;
      }
      *(short *)(param_1 + 0x56) = sVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    sVar2 = -300;
    if (0 < *(short *)(param_1 + 0x44)) {
      sVar2 = 300;
    }
    func_0x0004954c(param_1,(int)sVar2,300);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

