// FUN_80116cdc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80116cdc(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  sVar1 = func_0x80076d68();
  if (*(char *)(param_1 + 6) == '\0') {
    uVar2 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 0) {
      if (*(char *)(param_1 + 1) == '\0') {
        func_0x8009a450(0x95);
        return;
      }
      func_0x80074590(0x95,0,0);
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(*(undefined1 *)(param_1 + 6)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        func_0x80041098(param_1);
        func_0x80070e60(param_1);
        func_0x8004190c(param_1);
        return;
      }
    }
    if ((sVar1 == 1) &&
       (uVar2 = *(short *)(param_1 + 0x42) - 1, *(ushort *)(param_1 + 0x42) = uVar2,
       (int)((uint)uVar2 << 0x10) < 1)) {
      func_0x80077c40(param_1,0x8014e1a4,5);
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  return;
}

