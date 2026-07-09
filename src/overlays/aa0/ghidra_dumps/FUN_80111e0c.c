// FUN_80111e0c

void FUN_80111e0c(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 6) < 8) {
                    /* WARNING: Jumptable at 0x80111e48 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_80109838 + (uint)*(byte *)(param_1 + 6) * 4))();
    return;
  }
  iVar1 = func_0x8007778c(param_1);
  if (iVar1 != 0) {
    func_0x80077b5c(param_1);
  }
  return;
}

