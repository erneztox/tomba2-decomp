// FUN_8010e60c

void FUN_8010e60c(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 5) == '\0') && (iVar1 = func_0x80040c00(6), -1 < iVar1)) {
    func_0x80040b48(7);
    func_0x8004d4c4(0x29,1);
    func_0x8004b0d8(param_1);
    *(undefined1 *)(param_1 + 0x5e) = 2;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    DAT_800bf9e5 = 6;
  }
  return;
}

