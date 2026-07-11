// FUN_8012a848

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8012a848(int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(param_1 + 0x62) != 0) {
    *(undefined2 *)(param_1 + 0x62) = 0;
    uVar1 = *(undefined2 *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7feb591c);
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 0x32) = uVar1;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return;
  }
}

