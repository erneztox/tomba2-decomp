
undefined4 FUN_80012064(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_s6;
  undefined2 in_stack_00000054;
  undefined2 uStack00000056;
  undefined2 in_stack_00000058;
  undefined2 uStack0000005a;
  undefined1 in_stack_0000005c;
  undefined2 in_stack_00000114;
  undefined2 uStack00000116;
  undefined2 in_stack_00000118;
  undefined2 uStack0000011a;
  undefined1 in_stack_0000011c;
  undefined4 local_18;
  int local_14;
  
  iVar4 = 2000;
  do {
    iVar3 = FUN_8001c4bc(&local_18,&local_14);
    iVar4 = iVar4 + -1;
    if (iVar3 == 0) {
      if (0xf9 < *(uint *)(local_14 + 8)) {
        DAT_800253ec = 1;
      }
      uVar1 = *(undefined2 *)(local_14 + 0x10);
      *(undefined2 *)(param_1 + 0x24) = uVar1;
      *(undefined2 *)(param_1 + 0x1c) = uVar1;
      uVar1 = *(undefined2 *)(local_14 + 0x12);
      *(undefined2 *)(param_1 + 0x26) = uVar1;
      *(undefined2 *)(param_1 + 0x1e) = uVar1;
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(local_14 + 0x12);
      return local_18;
    }
  } while (iVar4 != 0);
  local_18 = 0xf0;
  FUN_8001768c();
  local_18 = 0xf0;
  FUN_8001768c(&stack0x000000b0,0,0x100,0x140);
  local_18 = 0xf0;
  FUN_8001774c(&stack0x0000004c,0,0x100,0x140);
  local_18 = 0xf0;
  FUN_8001774c(&stack0x0000010c,0,0,0x140);
  in_stack_00000054 = 0;
  uStack00000056 = 8;
  in_stack_00000058 = 0x100;
  uStack0000005a = 0xf0;
  in_stack_00000114 = 0;
  uStack00000116 = 8;
  in_stack_00000118 = 0x100;
  uStack0000011a = 0xf0;
  in_stack_0000011c = 0;
  in_stack_0000005c = 0;
  FUN_80013a78(unaff_s6 + 0x5c);
  uVar2 = FUN_800138ac();
  return uVar2;
}

