
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8001f58c(byte param_1,byte *param_2)

{
  uint uVar1;
  
  if (param_1 == 9) {
    FUN_8001ed8c(0x20);
    if ((DAT_800272b8 & 7) != 0) {
      FUN_8001edcc();
      return;
    }
  }
  else {
    if (param_1 == 10) {
      FUN_8001ed8c(0xd);
      DAT_800272b8 = 0;
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
    if (((int)(char)(&DAT_80027229)[param_1] & 0x97U) != 0) {
      DAT_800272b8 = DAT_800272b8 + 1;
    }
    if (0x1f < DAT_800272bc) {
      FUN_8001efec(1,0x8003c328);
      DAT_800272bc = 0;
    }
    *(byte *)(DAT_800272bc + -0x7ffc3cd8) = param_1;
    DAT_800272bc = DAT_800272bc + 1;
  }
  return;
}

