// FUN_0802cc10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802cc10(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = 1;
    if ((_DAT_800e7ffe & 0x180) == 0) {
      DAT_800bf81e = 0;
      _DAT_800e7e84 = 0x2104;
      _DAT_1f80023c = 0x2104;
      if (DAT_800e7eef == '\0') {
        func_0x0004ed0c(0x10,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x0004eddc(DAT_800e7eef,0x10);
      uVar1 = _DAT_800e7e84;
      DAT_800e7eef = 0x10;
      DAT_800e7e87 = SUB41(uVar1,3);
      _DAT_800e7e84 = (uint3)CONCAT11(0x3a,DAT_800e7e84);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 1;
    if (DAT_800e7e85 != '!') {
      uVar1 = 0;
    }
  }
  return uVar1;
}

