// FUN_08023008

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08023008(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(short *)(param_1 + 0x7c) != 0) {
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x48);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x44) * (int)*(short *)(param_1 + 0x4c);
    if (*(char *)(param_1 + 0xbf) != '\0') {
      *(short *)(param_1 + 0x32) =
           *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    func_0x0004766c(param_1);
    func_0x0004954c(param_1,(int)*(short *)(param_1 + 0x80),0);
    if (*(char *)(param_1 + 0xbf) == '\x01') {
      if (((*(byte *)(param_1 + 0x29) & 0x80) != 0) ||
         (iVar1 = func_0x000493e8(param_1,0,(int)-*(short *)(param_1 + 0x84)), iVar1 != 0)) {
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(char *)(param_1 + 0xbf) = *(char *)(param_1 + 0xbf) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      iVar2 = func_0x00049250(param_1,0,(int)*(short *)(param_1 + 0x84));
      if (*(char *)(param_1 + 0x29) == '\x01') {
        iVar2 = iVar2 + 1;
      }
      else if ((iVar2 == 2) && ((_DAT_1f8001a6 >> 8 & 0xf) == 7)) {
        *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (iVar2 != 0) {
      func_0x00049674(param_1);
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00049760(param_1);
    if (*(short *)(param_1 + 0x72) == -1) {
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
  }
  return 0;
}

