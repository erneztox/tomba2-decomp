// FUN_0803c5d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803c5d4(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  func_0x0004766c();
  func_0x0004954c(param_1,(int)*(short *)(param_1 + 0x80),0);
  cVar1 = *(char *)(param_1 + 0x29);
  iVar2 = func_0x00049250(param_1,0,
                          (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
  if (cVar1 != '\0' || iVar2 != 0) {
    func_0x00049674(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00049760(param_1);
  if (*(short *)(param_1 + 0x6e) < 0) {
    if (param_2 == 0) {
      *(short *)(param_1 + 0x58) = _DAT_1f8001a2 >> 2;
    }
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(short *)(param_1 + 0x56) = _DAT_1f8001a0;
    }
    else {
      *(ushort *)(param_1 + 0x56) = _DAT_1f8001a0 + 0x800U & 0xfff;
      if (param_2 == 0) {
        *(short *)(param_1 + 0x58) = 0x1000 - *(short *)(param_1 + 0x58);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *(short *)(param_1 + 0x60) = _DAT_1f8001a0;
    *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_1 + 0x56);
  }
  return;
}

