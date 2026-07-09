// FUN_80139d58

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_80139d58(int param_1)

{
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
    return 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

