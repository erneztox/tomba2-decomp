// FUN_0801acd4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801acd4(int param_1)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(char *)(param_1 + 0x5e) == '\0') && (iVar2 = *(int *)(param_1 + 0x78), iVar2 != 0)) {
    func_0x000329e0(6);
    local_18 = CONCAT22(*(undefined2 *)(param_1 + 0x32),*(undefined2 *)(param_1 + 0x2e));
    local_14 = CONCAT22(local_14._2_2_,*(undefined2 *)(param_1 + 0x36));
    setCopReg(2,in_zero,local_18);
    setCopReg(2,extraout_at,local_14);
    iVar1 = func_0x000317cc(0xffffffec);
    if (iVar1 == 0) {
      _DAT_1f800088 = _DAT_1f800084;
      _DAT_1f800090 = func_0x0009a450();
      _DAT_1f800090 = _DAT_1f800090 & 0x1ff;
      iVar2 = func_0x00027a4c(iVar2,_DAT_8011c08c);
      *(int *)(param_1 + 0x78) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x78) = 0x8011c090;
      }
    }
  }
  return;
}

