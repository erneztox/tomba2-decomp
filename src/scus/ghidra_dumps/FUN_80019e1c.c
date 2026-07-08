
undefined4 FUN_80019e1c(void)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *DAT_80026b94 = 1;
  if ((*DAT_80026ba0 & 7) != 0) {
                    /* WARNING: Could not recover jumptable at 0x80019680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}

