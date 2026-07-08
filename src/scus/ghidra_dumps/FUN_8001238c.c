
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_8001238c(void)

{
  bool bVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s1;
  
  do {
    while (-1 < unaff_s0) {
      if (unaff_s0 != 0) {
        if (unaff_s0 != 1) {
          while (unaff_s1 == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
            switch(DAT_80025454) {
            case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
          return 3;
        }
        DAT_80025444 = (1 < DAT_8003849c) << 1;
        FUN_80012584(2);
        DAT_80025454 = 4;
      }
      unaff_s0 = 3;
    }
    bVar1 = unaff_s0 != -2;
    unaff_s0 = 3;
  } while (bVar1);
  FUN_80012584(0);
  DAT_80025454 = 0x11;
  uVar2 = FUN_8001238c();
  return uVar2;
}

