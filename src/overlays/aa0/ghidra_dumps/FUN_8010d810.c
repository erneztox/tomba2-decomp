// FUN_8010d810

void FUN_8010d810(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar2 = func_0x80026ad0(param_1);
    if (iVar2 != 0) {
      FUN_80115cb0(param_1,*(undefined1 *)(param_1 + 3));
    }
    FUN_80116094(param_1);
    func_0x80026a68(param_1);
    FUN_80115b88(1);
    FUN_801168b4();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_801168b4();
      return;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    FUN_80115cb0(param_1,0);
    if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\x02')) {
      *(undefined1 *)(param_1 + 3) = 3;
      FUN_80115cb0(param_1,3);
      *(undefined1 *)(param_1 + 5) = 3;
    }
    func_0x8004d8d8(0,0);
    FUN_80115b88(0);
    FUN_8013edd0();
    FUN_801168b4();
    return;
  }
  if (bVar1 != 2) {
    if (bVar1 != 3) {
      FUN_801168b4();
      return;
    }
    func_0x8007add0(param_1);
  }
  return;
}

