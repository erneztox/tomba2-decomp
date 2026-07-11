// FUN_8011fa98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011fa98(void)

{
  short sVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s3;
  undefined4 in_stack_00000028;
  undefined *in_stack_0000002c;
  
  iVar2 = unaff_s0;
  func_0x80040cdc();
  *(undefined1 *)(unaff_s0 + 0x70) = 2;
  if (*(char *)(iVar2 + 0x48) == -1) {
    in_stack_00000028 = DAT_80109e40;
    in_stack_0000002c = PTR_caseD_0_80109e44;
    if ((uint)_DAT_1f80017c % 5 == 0) {
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5b3c);
      in_stack_00000028 = 0xcd0330;
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5a5c);
      sVar1 = *(short *)(unaff_s3 + 0x4c) + 1;
      *(short *)(unaff_s3 + 0x4c) = sVar1;
      if (5 < sVar1) {
        *(undefined2 *)(unaff_s3 + 0x4c) = 3;
        return;
      }
    }
  }
  else if (*(byte *)(iVar2 + 0x170) < 7) {
    in_stack_00000028 = DAT_80109e40;
    in_stack_0000002c = PTR_caseD_0_80109e44;
    if ((_DAT_1f80017c & 1) == 0) {
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5b3c);
      in_stack_00000028 = 0xcd0330;
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5a5c);
      sVar1 = *(short *)(unaff_s3 + 0x48) + 1;
      *(short *)(unaff_s3 + 0x48) = sVar1;
      if (2 < sVar1) {
        *(undefined2 *)(unaff_s3 + 0x48) = 0;
      }
    }
  }
  else {
    in_stack_00000028 = DAT_80109e40;
    in_stack_0000002c = PTR_caseD_0_80109e44;
    if ((_DAT_1f80017c & 1) == 0) {
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x4a) * 0x20 + -0x7feb5b3c);
      in_stack_00000028 = 0xcd0330;
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x4a) * 0x20 + -0x7feb5a5c);
      sVar1 = *(short *)(unaff_s3 + 0x4a) + 1;
      *(short *)(unaff_s3 + 0x4a) = sVar1;
      if (2 < sVar1) {
        *(undefined2 *)(unaff_s3 + 0x4a) = 1;
        return;
      }
    }
  }
  return;
}

