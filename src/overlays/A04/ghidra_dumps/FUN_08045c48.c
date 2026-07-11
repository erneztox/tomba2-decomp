// FUN_08045c48

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08045c48(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 2) {
    if (_DAT_800bf858 != 0) {
      return 0;
    }
    if ((10 < (uint)DAT_800bfa0d + (uint)DAT_800bfa0e) || (9 < DAT_800bfa0d)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_800bf858 = 1;
  }
  iVar1 = func_0x00072ddc(0,0,2,0x47);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8013e910;
    *(char *)(iVar1 + 0x5e) = (char)param_2;
    *(char *)(iVar1 + 3) = (char)param_3;
    if (param_2 == 3) {
      *(undefined4 *)(iVar1 + 0x10) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 != 1) {
      *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 2);
      *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 6);
      *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 10);
      *(undefined1 *)(iVar1 + 0x2a) = DAT_800e7eaa;
    }
  }
  return iVar1;
}

