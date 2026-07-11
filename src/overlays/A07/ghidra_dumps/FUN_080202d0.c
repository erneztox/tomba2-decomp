// FUN_080202d0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080202d0(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined2 *)(param_1 + 0x40) = 0xf;
    if (*(short *)(param_1 + 0x42) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00077b38(param_1,0x8013ff68,9);
    *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) ^ 1;
  }
  return;
}

