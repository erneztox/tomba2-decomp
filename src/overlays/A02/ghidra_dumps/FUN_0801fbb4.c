// FUN_0801fbb4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801fbb4(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 0x40) == 0) {
    if ((DAT_800bf9fe & 0x80) == 0) {
      sVar1 = func_0x00119694(param_1,(int)((*(ushort *)(param_1 + 0x2e) - 0x118) * 0x10000) >> 0x10
                              ,(int)((*(ushort *)(param_1 + 0x36) - 0x10e) * 0x10000) >> 0x10);
      if (sVar1 != 0) {
        DAT_800bf9fe = 3;
        *(undefined1 *)(param_1 + 5) = 0;
      }
    }
    else {
      sVar1 = func_0x00119694(param_1,(int)((*(ushort *)(param_1 + 0x2e) - 0x14a) * 0x10000) >> 0x10
                              ,(int)((*(ushort *)(param_1 + 0x36) - 0x10e) * 0x10000) >> 0x10);
      if (sVar1 != 0) {
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 0x5e) = 4;
        halt_baddata();
      }
    }
  }
  else {
    sVar1 = func_0x00119694(param_1,(int)*(short *)(param_1 + 0x2e),(int)*(short *)(param_1 + 0x36))
    ;
    if (sVar1 != 0) {
      *(undefined1 *)(param_1 + 5) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  func_0x001255a4((int)((uint)*(ushort *)(param_1 + 0x44) << 0x10) >> 0x18);
  return;
}

