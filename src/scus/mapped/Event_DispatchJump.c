/**
 * @brief Event dispatch jump table handler
 * @note Original: func_80013040 at 0x80013040
 */
// Event_DispatchJump



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 Event_DispatchJump(void)

{
  short in_v0;
  int unaff_s0;
  undefined2 *unaff_s1;
  undefined2 unaff_s5;
  
  *unaff_s1 = unaff_s5;
  unaff_s1[1] = in_v0 + 0x12;
  if (unaff_s0 != 1) {
    while (unaff_s1 == (undefined2 *)0x0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(DAT_80025454) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    return 0xd;
  }
                    /* WARNING: Subroutine does not return */
  Event_DispatchJump(0xffffffff);
}
