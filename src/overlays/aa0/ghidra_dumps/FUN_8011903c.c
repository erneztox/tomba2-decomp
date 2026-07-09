// FUN_8011903c

/* WARNING: Removing unreachable block (ram,0x801220f0) */
/* WARNING: Removing unreachable block (ram,0x8012210c) */
/* WARNING: Removing unreachable block (ram,0x80122164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8011903c(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int unaff_s1;
  int unaff_s2;
  short unaff_s3;
  undefined2 in_stack_00000020;
  short sStack00000022;
  undefined2 in_stack_00000024;
  undefined2 in_stack_00000028;
  short sStack0000002a;
  undefined2 in_stack_0000002c;
  undefined2 in_stack_00000030;
  short sStack00000032;
  undefined2 in_stack_00000034;
  undefined2 in_stack_00000038;
  short sStack0000003a;
  undefined2 in_stack_0000003c;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        uVar3 = FUN_801220ec();
        return uVar3;
      }
      if (*(char *)(param_1 + 0x2b) == '\x03') {
        *(undefined1 *)(param_1 + 6) = 1;
        func_0x80042354(1,1);
        uVar3 = FUN_801220ec();
        return uVar3;
      }
    }
    else {
      if (bVar1 != 2) {
        uVar3 = FUN_801220ec();
        return uVar3;
      }
      func_0x80041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        func_0x80042310();
        uVar3 = FUN_801220ec();
        return uVar3;
      }
    }
    return 0;
  }
  *(undefined1 *)(param_1 + 6) = 2;
  if (DAT_800bfaf9 != '\0') {
    uVar3 = FUN_801220ac(param_1,&DAT_8014e4ec,0x80149754);
    return uVar3;
  }
  if (DAT_800bf8f7 == -1) {
    func_0x80040cdc(param_1);
    *(undefined1 *)(param_1 + 0x70) = 1;
    if (*(short *)(*(int *)(unaff_s2 + 0xc0) + 2) < -899) {
      *(short *)(unaff_s1 + 0x3e) =
           *(short *)(unaff_s2 + 0x32) + *(short *)(*(int *)(unaff_s2 + 0xc0) + 2);
    }
    else if (_DAT_8014a1e8 < *(short *)(unaff_s1 + 0x3e)) {
      *(short *)(unaff_s1 + 0x3e) = _DAT_8014a1e8;
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      sStack00000022 = 0;
      sStack0000002a = 0;
      sStack00000032 = -0x78;
      sStack0000003a = -0x78;
      in_stack_00000024 = 0;
      in_stack_0000002c = 0;
      in_stack_00000034 = 0;
      in_stack_0000003c = 0;
      in_stack_00000030 = in_stack_00000020;
      in_stack_00000038 = in_stack_00000028;
      if (0 < unaff_s2) {
        do {
          func_0x8003b320(&stack0xfffffff8,&stack0x00000020,0xfffffff8);
          param_1 = param_1 + 1;
          sVar2 = (short)unaff_s1;
          sStack00000022 = sStack00000022 - sVar2;
          sStack0000002a = sStack0000002a - sVar2;
          sStack00000032 = sStack00000032 - sVar2;
          sStack0000003a = sStack0000003a - sVar2;
        } while (param_1 < unaff_s2);
      }
      sStack00000032 = sStack00000022 - unaff_s3;
      sStack0000003a = sStack0000002a - unaff_s3;
      uVar3 = func_0x8003b320(&stack0xfffffff8,&stack0x00000020,0xfffffff8);
      return uVar3;
    }
    if (*(short *)(*(int *)(unaff_s2 + 0xc0) + 2) < -0x13f) {
      if ((_DAT_1f80017c & 7) != 0) {
        return _DAT_1f80017c & 7;
      }
      uVar3 = func_0x80074590(0x9a,0,0);
      return uVar3;
    }
    *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 2) = 0xfec0;
    *(undefined2 *)(*(int *)(unaff_s2 + (*(byte *)(unaff_s2 + 8) - 1) * 4 + 0xc0) + 0x3a) = 0x140;
    *(char *)(unaff_s2 + 5) = *(char *)(unaff_s2 + 5) + '\x01';
    *(undefined1 *)(unaff_s1 + 0x76) = 1;
    *(undefined2 *)(unaff_s2 + 0x40) = 0x14;
    DAT_800bf9de = 9;
    uVar3 = func_0x80074590(0x8e,0,0x18);
    return uVar3;
  }
  uVar3 = FUN_801220ac(param_1,&DAT_8014e4ec,0x80149774);
  return uVar3;
}

