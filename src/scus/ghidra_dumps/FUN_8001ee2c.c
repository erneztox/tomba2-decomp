
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8001ee2c(undefined4 param_1,byte *param_2)

{
  uint uVar1;
  
  if (param_2 == (byte *)0x0) {
    FUN_8001ec90();
    return;
  }
  uVar1 = (uint)*param_2;
  if (uVar1 == 0) {
    FUN_8001ee88();
    FUN_8001ec90();
    return;
  }
  if (uVar1 == 0x25) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(param_2[1]) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      uVar1 = (uint)(char)param_2[1];
    }
  }
  FUN_8001ed8c(uVar1);
  FUN_8001e67c();
  return;
}

