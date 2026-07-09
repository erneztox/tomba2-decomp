// FUN_801168c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801168c4(void)

{
  undefined2 uVar1;
  undefined2 in_v0;
  short sVar2;
  int iVar3;
  int in_v1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s3;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined2 uStack00000020;
  undefined *in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined *in_stack_0000002c;
  
  *(undefined2 *)(unaff_s1 + 0x40) = in_v0;
  if (in_v1 == 2) {
    *(undefined1 *)(unaff_s0 + 0xb) = 0;
    *(undefined4 *)(unaff_s0 + 0x10) = 0;
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
    iVar3 = -0x7fef0000;
  }
  else {
    iVar3 = FUN_801281b8();
  }
  in_stack_00000010 = *(undefined4 *)(iVar3 + -0x61b8);
  in_stack_00000014 = *(undefined4 *)(iVar3 + -0x61b4);
  in_stack_00000018 = *(undefined4 *)(iVar3 + -0x61b0);
  in_stack_0000001c = *(undefined4 *)(iVar3 + -0x61ac);
  if (*(char *)(unaff_s3 + 6) == '\0') {
    *(undefined1 *)(unaff_s3 + 6) = 1;
  }
  else if (*(char *)(unaff_s3 + 6) == '\x01') {
    if (DAT_800bf9e0 != 0x11) {
      if (*(short *)(unaff_s3 + 0x40) == 0) {
        _uStack00000020 = DAT_80109e38;
        in_stack_00000024 = (undefined *)DAT_80109e3c;
        sVar2 = *(short *)(&stack0x00000010 + *(short *)(unaff_s3 + 0x42));
        uVar1 = *(undefined2 *)((int)&stack0x00000010 + *(short *)(unaff_s3 + 0x42) * 4 + 2);
        iVar3 = sVar2 * 0x20 + -0x7feb5c5c;
        func_0x80081218(&stack0x00000020,iVar3);
        _uStack00000020 = CONCAT22(0xe5,uStack00000020);
        func_0x80081218(&stack0x00000020,iVar3);
        _uStack00000020 = CONCAT22(0xde,uStack00000020);
        func_0x80081218(&stack0x00000020,sVar2 * 0x20 + -0x7feb5bbc);
        sVar2 = *(short *)(unaff_s3 + 0x42) + 1;
        *(short *)(unaff_s3 + 0x42) = sVar2;
        if (3 < sVar2) {
          *(undefined2 *)(unaff_s3 + 0x42) = 0;
        }
        *(undefined2 *)(unaff_s3 + 0x40) = uVar1;
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
  }
  return;
}

