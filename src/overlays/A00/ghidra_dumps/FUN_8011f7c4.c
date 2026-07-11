// FUN_8011f7c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011f7c4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  int unaff_s3;
  undefined4 uStackX_8;
  undefined *puStackX_c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  int in_stack_00000018;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_80128308(param_1);
      }
    }
    else {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        func_0x8007a624(param_1);
        return;
      }
    }
    goto LAB_801288c8;
  }
  if (*(char *)(param_1 + 3) == '\0') {
    cVar3 = *(char *)(param_1 + 5);
    cVar6 = '\x01';
    if (cVar3 != '\0') goto LAB_8011f8a0;
    if ((*(int *)(param_1 + 0x10) == 0) || (*(char *)(*(int *)(param_1 + 0x10) + 0x5e) == '\x02')) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      in_stack_00000018 = param_1;
      goto LAB_801288c8;
    }
  }
  else {
    if (*(char *)(param_1 + 3) != '\x01') goto LAB_801288c8;
    cVar6 = *(char *)(param_1 + 5);
    cVar3 = '\x01';
    if (cVar6 == '\0') {
      if ((*(int *)(param_1 + 0x10) == 0) || (*(char *)(*(int *)(param_1 + 0x10) + 0x5e) == '\x02'))
      {
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
      if (5 < DAT_1f800207) {
        return;
      }
      FUN_801281b8(param_1);
      FUN_801285ec(param_1);
      goto LAB_801288c8;
    }
LAB_8011f8a0:
    if (cVar6 != cVar3) goto LAB_801288c8;
  }
  FUN_801281b8(param_1);
LAB_801288c8:
  if (*(char *)(unaff_s3 + 6) == '\0') {
    *(undefined1 *)(unaff_s3 + 6) = 1;
  }
  else if (*(char *)(unaff_s3 + 6) == '\x01') {
    if (DAT_800bf9e0 != 0x11) {
      if (*(short *)(unaff_s3 + 0x40) == 0) {
        uStackX_8 = DAT_80109e38;
        puStackX_c = (undefined *)DAT_80109e3c;
        iVar5 = *(short *)(unaff_s3 + 0x42) * 4;
        sVar4 = *(short *)(&stack0xfffffff8 + iVar5);
        uVar2 = *(undefined2 *)(&stack0xfffffffa + iVar5);
        iVar5 = sVar4 * 0x20 + -0x7feb5c5c;
        func_0x80081218(&uStackX_8,iVar5);
        uStackX_8 = CONCAT22(0xe5,(undefined2)uStackX_8);
        func_0x80081218(&uStackX_8,iVar5);
        uStackX_8 = CONCAT22(0xde,(undefined2)uStackX_8);
        func_0x80081218(&uStackX_8,sVar4 * 0x20 + -0x7feb5bbc);
        sVar4 = *(short *)(unaff_s3 + 0x42) + 1;
        *(short *)(unaff_s3 + 0x42) = sVar4;
        if (3 < sVar4) {
          *(undefined2 *)(unaff_s3 + 0x42) = 0;
        }
        *(undefined2 *)(unaff_s3 + 0x40) = uVar2;
      }
      *(short *)(unaff_s3 + 0x40) = *(short *)(unaff_s3 + 0x40) + -1;
      if (DAT_800bf8b8 == -1) {
        in_stack_00000010 = DAT_80109e40;
        in_stack_00000014 = PTR_caseD_0_80109e44;
        if ((uint)_DAT_1f80017c % 5 == 0) {
          func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5b3c);
          in_stack_00000010 = 0xcd0330;
          func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5a5c);
          sVar4 = *(short *)(unaff_s3 + 0x4c) + 1;
          *(short *)(unaff_s3 + 0x4c) = sVar4;
          if (5 < sVar4) {
            *(undefined2 *)(unaff_s3 + 0x4c) = 3;
            return;
          }
        }
      }
      else if (DAT_800bf9e0 < 7) {
        in_stack_00000010 = DAT_80109e40;
        in_stack_00000014 = PTR_caseD_0_80109e44;
        if ((_DAT_1f80017c & 1) == 0) {
          func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5b3c);
          in_stack_00000010 = 0xcd0330;
          func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5a5c);
          sVar4 = *(short *)(unaff_s3 + 0x48) + 1;
          *(short *)(unaff_s3 + 0x48) = sVar4;
          if (2 < sVar4) {
            *(undefined2 *)(unaff_s3 + 0x48) = 0;
          }
        }
      }
      else {
        in_stack_00000010 = DAT_80109e40;
        in_stack_00000014 = PTR_caseD_0_80109e44;
        if ((_DAT_1f80017c & 1) == 0) {
          func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x4a) * 0x20 + -0x7feb5b3c);
          in_stack_00000010 = 0xcd0330;
          func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x4a) * 0x20 + -0x7feb5a5c);
          sVar4 = *(short *)(unaff_s3 + 0x4a) + 1;
          *(short *)(unaff_s3 + 0x4a) = sVar4;
          if (2 < sVar4) {
            *(undefined2 *)(unaff_s3 + 0x4a) = 1;
            return;
          }
        }
      }
      return;
    }
    uStackX_8 = DAT_80109e38;
    puStackX_c = (undefined *)DAT_80109e3c;
    func_0x80081218(&uStackX_8,0x8014a404);
    uStackX_8 = CONCAT22(0xe5,(undefined2)uStackX_8);
    func_0x80081218(&uStackX_8,0x8014a424);
    uStackX_8 = CONCAT22(0xde,(undefined2)uStackX_8);
    func_0x80081218(&uStackX_8,0x8014a4a4);
    uStackX_8 = DAT_80109e40;
    puStackX_c = PTR_caseD_0_80109e44;
    func_0x80081218(&uStackX_8,0x8014a584);
    uStackX_8 = 0xcd0330;
    func_0x80081218(&uStackX_8,0x8014a664);
    *(undefined1 *)(unaff_s3 + 6) = 0;
    *(char *)(unaff_s3 + 5) = *(char *)(unaff_s3 + 5) + '\x01';
  }
  return;
}

