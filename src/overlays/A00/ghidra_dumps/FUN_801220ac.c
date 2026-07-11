// FUN_801220ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801220ac(short param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  ushort uVar1;
  short sVar2;
  short in_v0;
  uint uVar3;
  int in_v1;
  int iVar4;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  short unaff_s3;
  undefined2 in_stack_0000001c;
  undefined2 in_stack_00000024;
  undefined2 in_stack_0000002c;
  undefined2 in_stack_00000034;
  short in_stack_00000038;
  short sStack0000003a;
  undefined2 in_stack_0000003c;
  short in_stack_00000040;
  short sStack00000042;
  undefined2 in_stack_00000044;
  short in_stack_00000048;
  short sStack0000004a;
  undefined2 in_stack_0000004c;
  short in_stack_00000050;
  short sStack00000052;
  undefined2 in_stack_00000054;
  
  *(short *)(in_v1 + 2) = in_v0 + param_1;
  iVar4 = *(int *)(unaff_s2 + (*(byte *)(unaff_s2 + 8) - 1) * 4 + 0xc0);
  *(short *)(iVar4 + 0x3a) = *(short *)(iVar4 + 0x3a) - *(short *)(*(int *)(unaff_s2 + 0xc0) + 0xe);
  if (*(short *)(unaff_s2 + 0x42) == 0) {
    iVar4 = unaff_s1;
    param_3 = param_3;
    if (-1000 < *(short *)(*(int *)(unaff_s2 + 0xc0) + 2)) {
      param_2 = 0xa1e0;
      func_0x8006cbd0();
      *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 2) = _DAT_8014a134;
      *(short *)(*(int *)(unaff_s2 + (*(byte *)(unaff_s2 + 8) - 1) * 4 + 0xc0) + 0x3a) =
           -*(short *)(*(int *)(unaff_s2 + 0xc0) + 2);
      *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 0xe) = 8;
      *(undefined2 *)(unaff_s2 + 0x42) = 1;
    }
    in_stack_00000024 = param_3;
    uVar1 = *(ushort *)(*(int *)(unaff_s2 + 0xc0) + 2);
    uVar3 = (uint)uVar1;
    *(ushort *)(unaff_s1 + 0x3e) = *(short *)(unaff_s2 + 0x32) + uVar1;
    in_stack_00000034 = (short)iVar4;
LAB_8012b16c:
    in_stack_00000040 = (short)((int)uVar3 >> 1);
    in_stack_00000038 = -in_stack_00000040;
    sStack0000003a = 0;
    sStack00000042 = 0;
    sStack0000004a = -0x78;
    sStack00000052 = -0x78;
    in_stack_0000003c = 0;
    in_stack_00000044 = 0;
    in_stack_0000004c = 0;
    in_stack_00000054 = 0;
    in_stack_0000001c = param_2;
    in_stack_0000002c = param_4;
    in_stack_00000048 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000040;
    if (0 < unaff_s2) {
      do {
        func_0x8003b320(&stack0x00000010,&stack0x00000038,0xfffffff8);
        unaff_s0 = unaff_s0 + 1;
        sVar2 = (short)unaff_s1;
        sStack0000003a = sStack0000003a - sVar2;
        sStack00000042 = sStack00000042 - sVar2;
        sStack0000004a = sStack0000004a - sVar2;
        sStack00000052 = sStack00000052 - sVar2;
      } while (unaff_s0 < unaff_s2);
    }
    sStack0000004a = sStack0000003a - unaff_s3;
    sStack00000052 = sStack00000042 - unaff_s3;
    func_0x8003b320(&stack0x00000010,&stack0x00000038,0xfffffff8);
    return;
  }
  if (*(short *)(*(int *)(unaff_s2 + 0xc0) + 2) < -899) {
    *(short *)(unaff_s1 + 0x3e) =
         *(short *)(unaff_s2 + 0x32) + *(short *)(*(int *)(unaff_s2 + 0xc0) + 2);
  }
  else {
    uVar3 = (uint)(_DAT_8014a1e8 < *(short *)(unaff_s1 + 0x3e));
    if (uVar3 != 0) {
      *(short *)(unaff_s1 + 0x3e) = _DAT_8014a1e8;
      in_stack_00000024 = param_3;
      in_stack_00000034 = 0;
      goto LAB_8012b16c;
    }
  }
  if (-0x140 < *(short *)(*(int *)(unaff_s2 + 0xc0) + 2)) {
    *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 2) = 0xfec0;
    *(undefined2 *)(*(int *)(unaff_s2 + (*(byte *)(unaff_s2 + 8) - 1) * 4 + 0xc0) + 0x3a) = 0x140;
    *(char *)(unaff_s2 + 5) = *(char *)(unaff_s2 + 5) + '\x01';
    *(undefined1 *)(unaff_s1 + 0x76) = 1;
    *(undefined2 *)(unaff_s2 + 0x40) = 0x14;
    DAT_800bf9de = 9;
    func_0x80074590(0x8e,0,0x18);
    return;
  }
  if ((_DAT_1f80017c & 7) == 0) {
    func_0x80074590(0x9a,0,0);
    return;
  }
  return;
}

