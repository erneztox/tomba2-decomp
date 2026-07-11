// FUN_8013bbb4

void FUN_8013bbb4(int param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 5) < 0xc) {
                    /* WARNING: Jumptable at 0x8013bbf8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_8010a2cc + (uint)*(byte *)(param_1 + 5) * 4))();
    return;
  }
  iVar1 = FUN_8014047c(param_1);
  if ((iVar1 == 0) && (iVar1 = func_0x800777fc(param_1), iVar1 != 0)) {
    func_0x800518fc(param_1);
    if (*(char *)(param_1 + 0x29) != '\0') {
      FUN_80145210();
      return;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x3f;
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}

