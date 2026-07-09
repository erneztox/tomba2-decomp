// FUN_8012893c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012893c(int param_1)

{
  short sVar1;
  short sVar2;
  int in_v0;
  short *psVar3;
  int iVar4;
  int iVar5;
  int unaff_s3;
  undefined2 uStack00000020;
  undefined *in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined *in_stack_0000002c;
  
  *(char *)(unaff_s3 + 6) = (char)in_v0;
  if (*(char *)(in_v0 + -0x620) == '\x11') {
    _uStack00000020 = DAT_80109e38;
    in_stack_00000024 = (undefined *)DAT_80109e3c;
    func_0x80081218(&stack0x00000020,0x8014a404);
    _uStack00000020 = CONCAT22(0xe5,uStack00000020);
    func_0x80081218(&stack0x00000020,0x8014a424);
    _uStack00000020 = CONCAT22(0xde,uStack00000020);
    func_0x80081218(&stack0x00000020,0x8014a4a4);
    _uStack00000020 = DAT_80109e40;
    in_stack_00000024 = PTR_caseD_0_80109e44;
    func_0x80081218(&stack0x00000020,0x8014a584);
    _uStack00000020 = 0xcd0330;
    func_0x80081218(&stack0x00000020,0x8014a664);
    *(undefined1 *)(unaff_s3 + 6) = 0;
    *(char *)(unaff_s3 + 5) = *(char *)(unaff_s3 + 5) + '\x01';
    return;
  }
  if (*(short *)(unaff_s3 + 0x40) == 0) {
    _uStack00000020 = DAT_80109e38;
    in_stack_00000024 = (undefined *)DAT_80109e3c;
    psVar3 = (short *)(param_1 + *(short *)(unaff_s3 + 0x42) * 4);
    sVar2 = psVar3[1];
    iVar5 = *psVar3 * 0x20;
    iVar4 = iVar5 + -0x7feb5c5c;
    func_0x80081218(&stack0x00000020,iVar4);
    _uStack00000020 = CONCAT22(0xe5,uStack00000020);
    func_0x80081218(&stack0x00000020,iVar4);
    _uStack00000020 = CONCAT22(0xde,uStack00000020);
    func_0x80081218(&stack0x00000020,iVar5 + -0x7feb5bbc);
    sVar1 = *(short *)(unaff_s3 + 0x42) + 1;
    *(short *)(unaff_s3 + 0x42) = sVar1;
    if (3 < sVar1) {
      *(undefined2 *)(unaff_s3 + 0x42) = 0;
    }
    *(short *)(unaff_s3 + 0x40) = sVar2;
  }
  *(short *)(unaff_s3 + 0x40) = *(short *)(unaff_s3 + 0x40) + -1;
  if (DAT_800bf8b8 == -1) {
    in_stack_00000028 = DAT_80109e40;
    in_stack_0000002c = PTR_caseD_0_80109e44;
    if ((uint)_DAT_1f80017c % 5 == 0) {
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5b3c);
      in_stack_00000028 = 0xcd0330;
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5a5c);
      sVar2 = *(short *)(unaff_s3 + 0x4c) + 1;
      *(short *)(unaff_s3 + 0x4c) = sVar2;
      if (5 < sVar2) {
        *(undefined2 *)(unaff_s3 + 0x4c) = 3;
        return;
      }
    }
  }
  else if (DAT_800bf9e0 < 7) {
    in_stack_00000028 = DAT_80109e40;
    in_stack_0000002c = PTR_caseD_0_80109e44;
    if ((_DAT_1f80017c & 1) == 0) {
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5b3c);
      in_stack_00000028 = 0xcd0330;
      func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5a5c);
      sVar2 = *(short *)(unaff_s3 + 0x48) + 1;
      *(short *)(unaff_s3 + 0x48) = sVar2;
      if (2 < sVar2) {
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
      sVar2 = *(short *)(unaff_s3 + 0x4a) + 1;
      *(short *)(unaff_s3 + 0x4a) = sVar2;
      if (2 < sVar2) {
        *(undefined2 *)(unaff_s3 + 0x4a) = 1;
        return;
      }
    }
  }
  return;
}

