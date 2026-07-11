// FUN_80126618

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80126d44) */
/* WARNING: Removing unreachable block (ram,0x80126d7c) */
/* WARNING: Removing unreachable block (ram,0x80126d8c) */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80126618(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if ((((DAT_800e7ee1 != '1') && (DAT_800e7ee1 != 'A')) && (DAT_800bf841 == '\0')) &&
     ((DAT_800bf809 == '\0' && ((*(ushort *)(param_1 + 0x7a) & 2) == 0)))) {
    uVar2 = (uint)*(short *)(*(int *)(param_1 + 0xc4) + 8);
    if (0x800 < (int)uVar2) {
      uVar2 = uVar2 | 0xf000;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 6)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(*(int *)(param_1 + 0xc4) + 8) = (ushort)uVar2 & 0xfff;
    FUN_801314b4(param_1);
    if (*(short *)(param_1 + 0x78) != 0) {
      uVar1 = FUN_801308e0(param_1);
      *(undefined1 *)(uVar2 + 6) = uVar1;
      func_0x80072efc();
      *(undefined2 *)(uVar2 + 0x40) = 0xf;
      FUN_80138e70();
      return;
    }
    FUN_80131578(param_1);
  }
  return;
}

