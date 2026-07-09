// FUN_80102f34

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80102f34(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x160) = 1;
  if (param_3 == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 7)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x158) != 0) {
    iVar2 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
    iVar1 = func_0x80083f50(iVar2);
    *(short *)(param_1 + 0x2e) =
         *(short *)(iVar3 + 0x2c) + (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
    iVar1 = func_0x80083e80(iVar2);
    *(short *)(param_1 + 0x36) =
         *(short *)(iVar3 + 0x34) - (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
  }
  *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x30) + *(short *)(param_1 + 0x156);
  return;
}

