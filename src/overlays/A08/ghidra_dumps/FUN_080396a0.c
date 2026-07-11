// FUN_080396a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_080396a0(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    DAT_800bf81e = 0;
    _DAT_800e7e84 = 0x2104;
    _DAT_1f80023c = 0x2104;
    if (DAT_800e7eef == '\0') {
      func_0x0004ed0c(0x11,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0004eddc(DAT_800e7eef,0x11);
    uVar2 = _DAT_800e7e84;
    DAT_800e7eef = 0x11;
    DAT_800e7e87 = SUB41(uVar2,3);
    _DAT_800e7e84 = (uint3)CONCAT11(0x3a,DAT_800e7e84);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = DAT_800e7e85 == '!';
  return bVar1;
}

