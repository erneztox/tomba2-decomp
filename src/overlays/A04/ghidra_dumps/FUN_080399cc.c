// FUN_080399cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080399cc(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined2 *)(param_1 + 0x62) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    if (*(char *)(param_1 + 0xbe) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x60);
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff;
    func_0x00041768(param_1,2,8);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    sVar2 = func_0x000776f8((int)*(short *)(param_1 + 100),(int)*(short *)(param_1 + 0x56),0x60);
    *(short *)(param_1 + 0x56) = sVar2;
    if (*(short *)(param_1 + 100) == sVar2) {
      *(undefined2 *)(param_1 + 100) = 0xffff;
      *(char *)(param_1 + 0xbe) = '\x01' - *(char *)(param_1 + 0xbe);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
      iVar3 = func_0x0004766c(param_1);
      if (iVar3 != 0) {
        if (*(char *)(param_1 + 0x29) == '\0') {
          bVar1 = func_0x00049250(param_1,0,
                                  (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                        (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
          *(byte *)(param_1 + 0x29) = bVar1;
          if ((bVar1 != 0) && ((bVar1 & 1) != 0)) {
            *(byte *)(param_1 + 0x29) = bVar1 | 0x80;
          }
        }
        if ((*(byte *)(param_1 + 0x29) & 0x80) != 0) {
          func_0x00049674(param_1);
          *(undefined2 *)(param_1 + 0x62) = _DAT_1f8001a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        func_0x00049760(param_1);
        *(undefined2 *)(param_1 + 0x62) = 0;
        *(undefined2 *)(param_1 + 0x60) = _DAT_1f8001a0;
      }
      func_0x0004130c(param_1,1);
      func_0x00041768(param_1,0,8);
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

