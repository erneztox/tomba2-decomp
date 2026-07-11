// FUN_80114514

void FUN_80114514(void)

{
  char cVar1;
  int in_v0;
  undefined4 uVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  
  if (in_v0 != 0) {
    if (*(char *)(unaff_s1 + 0x47) != '\0') {
      *(undefined1 *)(unaff_s1 + 1) = 1;
      func_0x80077e7c();
    }
    func_0x80041098();
    func_0x8004190c();
    return;
  }
  iVar3 = unaff_s1;
  uVar2 = FUN_8011c610();
  *(undefined4 *)(unaff_s1 + 0x14) = uVar2;
  cVar1 = *(char *)(unaff_s1 + 7);
  *(undefined4 *)(unaff_s0 + 0x3c) = 2;
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x8011d52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 * 4 + -0x7fef645c))();
    return;
  }
  func_0x8004766c();
  func_0x80049760();
  return;
}

