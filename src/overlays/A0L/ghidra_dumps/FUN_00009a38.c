// FUN_00009a38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00009a38(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = _DAT_1f80002c;
  local_c = _DAT_1f800030;
  iVar3 = 1 - _DAT_1f800014;
  sVar2 = _DAT_1f80002c + 0x10;
  _DAT_1f80002c = CONCAT22(_DAT_1f80002e,sVar2);
  if ((int)sVar2 <
      (int)*(short *)(&DAT_1f800018 + _DAT_1f800028 * 8) +
      (int)*(short *)(&DAT_1f80001c + _DAT_1f800028 * 8)) {
    _DAT_1f800014 = iVar3;
    func_0x0009c800(*(undefined4 *)(&DAT_1f80000c + iVar3 * 4),
                    ((int)_DAT_1f800030 * (int)_DAT_1f800032) / 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f800028 = (uint)DAT_1f800135;
  _DAT_1f800034 = 1;
  _DAT_1f80002c = *(undefined4 *)(&DAT_1f800018 + _DAT_1f800028 * 8);
  iVar1 = _DAT_1f800014 * 4;
  _DAT_1f800014 = iVar3;
  func_0x00081218(&local_10,*(undefined4 *)(&DAT_1f80000c + iVar1));
  return;
}

