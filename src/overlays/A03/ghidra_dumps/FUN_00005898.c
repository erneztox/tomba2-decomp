// FUN_00005898

/* WARNING: Control flow encountered bad instruction data */

void FUN_00005898(int param_1)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined1 auStack_18 [8];
  
  if (DAT_800bf80d == '\0') {
    if (0x554 < (ushort)(*(short *)(param_1 + 0x6e) + 0x2aaU)) {
      *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
      if ((((int)*(short *)(*(int *)(param_1 + 0x60) + 6) & 0x8000U) != 0) &&
         (iVar1 = func_0x0010c060(*(int *)(param_1 + 0x60),*(short *)(param_1 + 0x6a) + -1000,
                                  auStack_18,auStack_38),
         ((int)*(short *)(iVar1 + 6) & 0x8000U) != 0)) {
        *(undefined1 *)(param_1 + 7) = 1;
        DAT_800bf80d = '\x01';
      }
    }
  }
  return;
}

