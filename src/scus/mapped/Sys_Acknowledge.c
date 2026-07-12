/**
 * @brief Acknowledge operation
 * @note Original: func_80012278 at 0x80012278
 */
// Sys_Acknowledge



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 Sys_Acknowledge(void)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(DAT_80025454) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return 0;
  }
}
