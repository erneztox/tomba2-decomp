// FUN_801169fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801169fc(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int extraout_v1;
  undefined1 *puVar6;
  int unaff_s3;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    sVar3 = FUN_80121518(param_1);
    if (sVar3 != 0) {
      uVar2 = *(ushort *)(param_1 + 0x66);
      *(ushort *)(param_1 + 0x66) = uVar2 & 0xfff;
      *(ushort *)(param_1 + 0x56) = uVar2 & 0xfff;
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_8011fc68();
        return;
      }
      *(ushort *)(param_1 + 0x56) = *(ushort *)(param_1 + 0x56) & 0xfff;
      if (param_1[7] == '\0') {
        sVar3 = FUN_8011fd94(param_1,3);
        iVar5 = func_0x80077768((int)sVar3,(int)*(short *)(param_1 + 0x66),0);
        if (iVar5 != 0) {
          *(ushort *)(param_1 + 0x66) = *(short *)(param_1 + 0x66) + 0x800U & 0xfff;
        }
        *(undefined2 *)(param_1 + 0x40) = 0x1e;
        FUN_8011fa98();
        return;
      }
      if (param_1[7] != '\x01') {
        puVar6 = param_1;
        func_0x80040cdc(param_1,0x8001b860,*(undefined4 *)((uint)DAT_800bf830 * 4 + -0x7feb61b0));
        param_1[0x70] = 2;
        if (puVar6[0x48] == -1) {
          in_stack_00000010 = DAT_80109e40;
          in_stack_00000014 = PTR_caseD_0_80109e44;
          if ((uint)_DAT_1f80017c % 5 == 0) {
            func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5b3c);
            in_stack_00000010 = 0xcd0330;
            func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x4c) * 0x20 + -0x7feb5a5c);
            sVar3 = *(short *)(unaff_s3 + 0x4c) + 1;
            *(short *)(unaff_s3 + 0x4c) = sVar3;
            if (5 < sVar3) {
              *(undefined2 *)(unaff_s3 + 0x4c) = 3;
              return;
            }
          }
        }
        else if ((byte)puVar6[0x170] < 7) {
          in_stack_00000010 = DAT_80109e40;
          in_stack_00000014 = PTR_caseD_0_80109e44;
          if ((_DAT_1f80017c & 1) == 0) {
            func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5b3c);
            in_stack_00000010 = 0xcd0330;
            func_0x80081218(&stack0x00000010,*(short *)(unaff_s3 + 0x48) * 0x20 + -0x7feb5a5c);
            sVar3 = *(short *)(unaff_s3 + 0x48) + 1;
            *(short *)(unaff_s3 + 0x48) = sVar3;
            if (2 < sVar3) {
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
      if (param_1[3] == '\x03') {
        func_0x80077cfc(param_1,0x8014e1a4,2,8);
                    /* WARNING: Could not recover jumptable at 0x8011fa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(extraout_v1 + 0x100))();
        return;
      }
      uVar4 = FUN_8011fd94(param_1,3);
      *(undefined2 *)(param_1 + 0x66) = uVar4;
      *(undefined2 *)(param_1 + 0x40) = 0x3c;
      *(undefined2 *)(param_1 + 0x44) = 0x2000;
      uVar4 = FUN_801214ac(param_1,2);
      *(undefined2 *)(param_1 + 0x50) = uVar4;
      iVar5 = func_0x80083f50((int)*(short *)(param_1 + 0x66));
      *(short *)(param_1 + 0x48) = (short)(iVar5 >> 4);
      iVar5 = func_0x80083e80((int)*(short *)(param_1 + 0x66));
      *(short *)(param_1 + 0x4c) = (short)(-iVar5 >> 4);
      *(undefined2 *)(param_1 + 0x4a) = 0xff00;
      *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
      param_1[6] = param_1[6] + '\x01';
      if (*(short *)(param_1 + 0x58) != 0) {
        if (0x7ff < *(short *)(param_1 + 0x58)) {
          *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0x1000;
          *(undefined2 *)(param_1 + 0x52) = 0xff00;
          *(undefined2 *)(param_1 + 0x42) = 0;
          FUN_8011fc68();
          return;
        }
        *(undefined2 *)(param_1 + 0x52) = 0x100;
        FUN_8011fb28();
        return;
      }
      *(undefined2 *)(param_1 + 0x42) = 1;
      FUN_8011fc68();
      return;
    }
    if (bVar1 != 2) {
      FUN_8011fc68();
      return;
    }
  }
  if (*(short *)(param_1 + 0x42) == 0) {
    if (param_1[7] != '\0') {
      *param_1 = 2;
    }
    if ((int)*(short *)(param_1 + 0x58) *
        ((int)(((uint)*(ushort *)(param_1 + 0x58) - (uint)*(ushort *)(param_1 + 0x52)) * 0x10000) >>
        0x10) < 1) {
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x42) = 1;
      FUN_8011fbbc();
      return;
    }
    *(short *)(param_1 + 0x58) =
         (short)((uint)*(ushort *)(param_1 + 0x58) - (uint)*(ushort *)(param_1 + 0x52));
  }
  FUN_80120498(param_1,2);
  sVar3 = *(short *)(param_1 + 0x40);
  *(ushort *)(param_1 + 0x40) = sVar3 - 1U;
  if ((int)((uint)(ushort)(sVar3 - 1U) << 0x10) < 0) {
    if (param_1[7] != '\0') {
      param_1[4] = 3;
      FUN_8011fc68();
      return;
    }
    param_1[5] = 2;
    param_1[6] = 4;
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    sVar3 = FUN_8011fd94(param_1);
    if (*(short *)(param_1 + 0x56) == sVar3) {
      param_1[7] = 3;
      FUN_801215b4(param_1,3,0);
      *(undefined2 *)(param_1 + 0x44) = 0x800;
      FUN_8011fc68();
      return;
    }
    param_1[7] = 1;
    *(undefined2 *)(param_1 + 0x58) = 1;
    *(undefined2 *)(param_1 + 0x52) = 0;
  }
  return;
}

