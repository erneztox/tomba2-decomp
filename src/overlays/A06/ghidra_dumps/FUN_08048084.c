// FUN_08048084

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_08048084(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 2) {
    if ((((0xc < DAT_800e7eaa) || (_DAT_800bf85c != 0)) ||
        (10 < (uint)DAT_800bfa0d + (uint)DAT_800bfa0e)) || (9 < DAT_800bfa0e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_800bf85c = 1;
  }
  iVar1 = func_0x00072ddc(0,1,2,0x47);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80140e4c;
    *(char *)(iVar1 + 0x5e) = (char)param_2;
    *(char *)(iVar1 + 3) = (char)param_3;
    if (param_2 == 0) {
      *(undefined4 *)(iVar1 + 0x10) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 10);
    *(byte *)(iVar1 + 0x2a) = DAT_800e7eaa;
  }
  return iVar1;
}

