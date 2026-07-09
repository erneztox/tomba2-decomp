// FUN_8011279c

void FUN_8011279c(int param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (*(byte *)(param_1 + 5) < 10) {
                    /* WARNING: Jumptable at 0x801127e4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_80109878 + (uint)*(byte *)(param_1 + 5) * 4))();
    return;
  }
  func_0x80077b5c(param_1);
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x80077e7c(param_1);
  }
  return;
}

