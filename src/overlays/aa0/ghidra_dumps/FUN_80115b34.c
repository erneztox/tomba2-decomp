// FUN_80115b34

void FUN_80115b34(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x80076d68();
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Jumptable at 0x80115b74 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_80109a28 + (uint)*(byte *)(param_1 + 6) * 4))(uVar1);
    return;
  }
  return;
}

