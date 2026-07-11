// FUN_8010e634

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_8010e634(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(param_1 + 0x50);
  iVar2 = func_0x80083e80((int)*(short *)(param_1 + 0x52));
  iVar3 = func_0x80083f50((int)*(short *)(param_1 + 0x52));
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar2 * sVar1;
  *(short *)(param_1 + 0x58) = (short)(-(int)*(short *)(param_1 + 0x58) >> 4);
  *(short *)(param_1 + 0x4e) = (short)(iVar3 * sVar1 >> 0xc);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    sVar1 = *(short *)(param_1 + 0x32);
    iVar2 = func_0x80083f50((int)*(short *)(param_1 + 0x70));
    iVar3 = func_0x8009a450();
    *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + (short)(iVar3 >> 9);
    iVar2 = ((int)sVar1 + (iVar2 >> 5)) - (int)*(short *)(param_1 + 0x32);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar2 >> 4);
    return 0;
  }
}

