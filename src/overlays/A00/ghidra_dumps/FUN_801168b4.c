// FUN_801168b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801168b4(void)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int in_v0;
  int iVar4;
  int in_v1;
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
  undefined4 in_stack_00000030;
  
  *(int *)(unaff_s1 + 0x30) = in_v1;
  if (-1 < in_v0) {
    iVar4 = FUN_801215b4();
    if (iVar4 != 0) {
      iVar4 = unaff_s1;
      FUN_801215b4();
      bVar1 = *(byte *)(unaff_s1 + 7);
      *(byte *)(unaff_s1 + 7) = bVar1 + 1;
      if (*(char *)(bVar1 + 0x5f) == '\x02') {
        *(undefined1 *)(iVar4 + 0xb) = 0;
        *(undefined4 *)(iVar4 + 0x10) = 0;
        *(char *)(iVar4 + 5) = *(char *)(iVar4 + 5) + '\x01';
      }
      FUN_801281b8();
      return;
    }
    func_0x80076d68();
    return;
  }
  *(undefined2 *)(unaff_s1 + 0x40) = 0x1e;
  if (in_v1 == 2) {
    DAT_0000000e = 0;
    _DAT_00000013 = 0;
    DAT_00000008 = DAT_00000008 + '\x01';
    iVar4 = -0x7fef0000;
    in_stack_00000030 = 3;
  }
  else {
    iVar4 = FUN_801281b8(3);
  }
  in_stack_00000010 = *(undefined4 *)(iVar4 + -0x61b8);
  in_stack_00000014 = *(undefined4 *)(iVar4 + -0x61b4);
  in_stack_00000018 = *(undefined4 *)(iVar4 + -0x61b0);
  in_stack_0000001c = *(undefined4 *)(iVar4 + -0x61ac);
  if (*(char *)(unaff_s3 + 6) == '\0') {
    *(undefined1 *)(unaff_s3 + 6) = 1;
  }
  else if (*(char *)(unaff_s3 + 6) == '\x01') {
    if (DAT_800bf9e0 != 0x11) {
      if (*(short *)(unaff_s3 + 0x40) == 0) {
        _uStack00000020 = DAT_80109e38;
        in_stack_00000024 = (undefined *)DAT_80109e3c;
        sVar3 = *(short *)(&stack0x00000010 + *(short *)(unaff_s3 + 0x42));
        uVar2 = *(undefined2 *)((int)&stack0x00000010 + *(short *)(unaff_s3 + 0x42) * 4 + 2);
        iVar4 = sVar3 * 0x20 + -0x7feb5c5c;
        func_0x80081218(&stack0x00000020,iVar4);
        _uStack00000020 = CONCAT22(0xe5,uStack00000020);
        func_0x80081218(&stack0x00000020,iVar4);
        _uStack00000020 = CONCAT22(0xde,uStack00000020);
        func_0x80081218(&stack0x00000020,sVar3 * 0x20 + -0x7feb5bbc);
        sVar3 = *(short *)(unaff_s3 + 0x42) + 1;
        *(short *)(unaff_s3 + 0x42) = sVar3;
        if (3 < sVar3) {
          *(undefined2 *)(unaff_s3 + 0x42) = 0;
        }
        *(undefined2 *)(unaff_s3 + 0x40) = uVar2;
      }
      *(short *)(unaff_s3 + 0x40) = *(short *)(unaff_s3 + 0x40) + -1;
      if (DAT_800bf8b8 == -1) {
        in_stack_00000028 = DAT_80109e40;
        in_stack_0000002c = PTR_caseD_0_80109e44;
        if ((uint)_DAT_1f80017c % 5 == 0) {
          func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5b3c);
          in_stack_00000028 = 0xcd0330;
          func_0x80081218(&stack0x00000028,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5a5c);
          sVar3 = *(short *)(unaff_s3 + 0x4c) + 1;
          *(short *)(unaff_s3 + 0x4c) = sVar3;
          if (5 < sVar3) {
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
          sVar3 = *(short *)(unaff_s3 + 0x48) + 1;
          *(short *)(unaff_s3 + 0x48) = sVar3;
          if (2 < sVar3) {
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
          sVar3 = *(short *)(unaff_s3 + 0x4a) + 1;
          *(short *)(unaff_s3 + 0x4a) = sVar3;
          if (2 < sVar3) {
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

