// FUN_8010ec30

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_8010ec30(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (4 < *(byte *)(param_1 + 7)) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar1 = *(short *)(param_1 + 0x32);
    iVar3 = func_0x80083f50((int)*(short *)(param_1 + 0x70));
    iVar4 = func_0x8009a450();
    *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + (short)(iVar4 >> 9);
    iVar3 = ((int)sVar1 + (iVar3 >> 5)) - (int)*(short *)(param_1 + 0x32);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + (short)(iVar3 >> 4);
    return 0;
  }
                    /* WARNING: Jumptable at 0x8010ec80 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef671c))();
  return uVar2;
}

