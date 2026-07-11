// FUN_80105128

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80105128(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && (iVar1 = func_0x80022f04(), iVar1 != 0)) {
    if (*(char *)(param_2 + 3) == '\0') {
      func_0x80058304(param_1,1);
      if (DAT_800bfad6 == '\0') {
        *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
        FUN_8010e1cc(param_1,param_2,1,0);
        return;
      }
    }
    else if (DAT_800bfad6 == '\0') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x5e)) {
      case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      default:
        func_0x80022d08(param_1,param_2,1,0);
      }
    }
  }
  return;
}

