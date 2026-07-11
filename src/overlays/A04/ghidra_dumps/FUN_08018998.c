// FUN_08018998

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08018998(int param_1,byte *param_2)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && (iVar1 = func_0x00022f04(), iVar1 != 0)) {
    *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
    if ((*param_2 & 8) == 0) {
      if (DAT_800bfad5 == '\0') {
        func_0x00022d08(param_1,param_2,1,0);
      }
      *param_2 = 2;
      param_2[4] = 2;
      param_2[5] = 2;
      param_2[6] = 0;
    }
    else if (DAT_800bfad5 == '\0') {
      func_0x00022d08(param_1,param_2,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

