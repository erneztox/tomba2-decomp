// FUN_0802e230

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802e230(undefined1 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[0x5e];
  if (bVar1 == 1) {
    func_0x00126b34(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((DAT_800bf9cc & 0x80) == 0) {
        if (*(char *)(param_2 + 0x5f) == '\0') {
          return;
        }
        if (*(short *)(param_2 + 0x62) == 0) {
          return;
        }
        param_1[0x5e] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1[0x5e] = 2;
      param_1[5] = 0;
      param_1[6] = 0;
      *param_1 = 1;
    }
  }
  else if (bVar1 == 2) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
    func_0x0004766c(param_1);
    iVar2 = func_0x00049250(param_1,0,
                            (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                  (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
    if (iVar2 != 0) {
      func_0x0003116c(8,param_1 + 0x2c,0xfffffff6);
      param_1[3] = 1;
      *param_1 = 1;
      param_1[0x5e] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

