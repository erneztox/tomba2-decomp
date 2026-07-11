// FUN_8010d9f8

void FUN_8010d9f8(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 5) < 0xc) {
                    /* WARNING: Jumptable at 0x8010da3c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&LAB_80109854 + (uint)*(byte *)(param_1 + 5) * 4))();
    return;
  }
  iVar1 = func_0x800777fc(param_1);
  if (iVar1 != 0) {
    func_0x800518fc(param_1);
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}

