// FUN_801220fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801220fc(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  ushort uVar1;
  short sVar2;
  int in_v0;
  int iVar3;
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
  
  iVar3 = unaff_s1;
  param_3 = param_3;
  if (-1000 < in_v0) {
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
  *(ushort *)(unaff_s1 + 0x3e) = *(short *)(unaff_s2 + 0x32) + uVar1;
  in_stack_00000040 = (short)((int)(uint)uVar1 >> 1);
  in_stack_00000038 = -in_stack_00000040;
  sStack0000003a = 0;
  sStack00000042 = 0;
  sStack0000004a = -0x78;
  sStack00000052 = -0x78;
  in_stack_0000003c = 0;
  in_stack_00000044 = 0;
  in_stack_0000004c = 0;
  in_stack_00000054 = 0;
  in_stack_00000034 = (undefined2)iVar3;
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

