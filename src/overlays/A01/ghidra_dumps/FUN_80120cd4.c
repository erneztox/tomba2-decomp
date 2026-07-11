// FUN_80120cd4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80120cd4(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x5e) == '\x02') {
    if (0xf7f < *(short *)(param_1 + 0x4a)) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    if (*(short *)(param_1 + 0x50) < *(short *)(param_1 + 0x4a)) {
      func_0x80074590(0x8b,0,0);
    }
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    if (((*(char *)(param_1 + 3) == '\a') && (bVar1 = DAT_800bf9fd | 1, (DAT_800bf9fd & 1) == 0)) ||
       ((*(char *)(param_1 + 3) == '\b' && (bVar1 = DAT_800bf9fd | 2, (DAT_800bf9fd & 2) == 0)))) {
      DAT_800bf9fd = bVar1;
      return;
    }
  }
  else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 6)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x4a) != 0) {
      FUN_8012997c(param_1);
    }
  }
  return;
}

