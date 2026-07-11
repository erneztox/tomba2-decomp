// FUN_80111e18

void FUN_80111e18(void)

{
  int iVar1;
  int unaff_s1;
  
  if (*(byte *)(unaff_s1 + 6) < 8) {
                    /* WARNING: Jumptable at 0x80111e48 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_80109838 + (uint)*(byte *)(unaff_s1 + 6) * 4))();
    return;
  }
  iVar1 = func_0x8007778c();
  if (iVar1 != 0) {
    func_0x80077b5c();
  }
  return;
}

