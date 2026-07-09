// FUN_8011fc68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011fc68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int unaff_s3;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  
  iVar2 = *(int *)((uint)DAT_800bf830 * 4 + -0x7feb61b0);
  func_0x80040cdc(param_1,0x8001b860);
  in_stack_0000002c = *(undefined4 *)(iVar2 + 4);
  if ((_DAT_1f80017c & 1) == 0) {
    in_stack_00000028 = param_4;
    func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5b3c);
    in_stack_00000028 = 0xcd0330;
    func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5a5c);
    sVar1 = *(short *)(unaff_s3 + 0x48) + 1;
    *(short *)(unaff_s3 + 0x48) = sVar1;
    if (2 < sVar1) {
      *(undefined2 *)(unaff_s3 + 0x48) = 0;
    }
  }
  return;
}

