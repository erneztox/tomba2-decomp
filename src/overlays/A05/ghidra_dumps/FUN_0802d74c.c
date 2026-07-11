// FUN_0802d74c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802d74c(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  short sVar2;
  
  if (param_3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = func_0x00085690(-((int)(((uint)*(ushort *)(param_1 + 0x36) -
                                  (uint)*(ushort *)(param_2 + 0x36)) * 0x10000) >> 0x10),
                          (int)(((uint)*(ushort *)(param_1 + 0x2e) -
                                (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000) >> 0x10);
  uVar1 = func_0x00077768((int)sVar2,(int)*(short *)(param_1 + 0x60),0);
  *(undefined1 *)(param_1 + 0xbe) = uVar1;
  func_0x0004130c(param_1,0);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_1 + 0xbe);
  return;
}

