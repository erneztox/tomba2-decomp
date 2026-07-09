// FUN_80103ff4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80103ff4(int param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (DAT_800bf816 == '\0') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      return;
    }
  }
  uVar2 = FUN_8010ccc0();
  bVar1 = *(byte *)((int)((ulonglong)uVar2 >> 0x20) + 0xf);
  if ((uint)bVar1 == (uint)uVar2) {
    *(byte *)(param_1 + 3) = bVar1 + 1;
    FUN_80115cb0(param_1,3);
    *(undefined1 *)(param_1 + 5) = 3;
  }
  func_0x8004d8d8(0,0);
  FUN_80115b88(0);
  FUN_8013edd0();
  FUN_801168b4();
  return;
}

