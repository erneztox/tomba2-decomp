
void FUN_80012ecc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 in_stack_00000030;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d4;
  undefined4 in_stack_000000d8;
  short in_stack_000000e0;
  short sStack000000e2;
  ushort in_stack_000000e4;
  undefined2 uStack000000e6;
  
  FUN_8001774c();
  in_stack_00000030 = 1;
  FUN_80014094(&stack0x00000090,&stack0x00000018);
  FUN_800137e0(&stack0x00000090);
  FUN_80013a78();
  in_stack_000000d0 = 0x2000000;
  in_stack_000000d4 = 0xe6000002;
  in_stack_000000d8 = 0;
  FUN_800137e0(&stack0x000000d0);
  uVar2 = 0xffff;
  iVar3 = 0;
  uStack000000e6 = 1;
  in_stack_000000e4 = (ushort)(byte)(&DAT_8002545e)[DAT_800384a4 * 0xc];
  do {
    iVar1 = DAT_800384a4 * 0xc;
    in_stack_000000e0 = *(short *)(&DAT_80025460 + iVar1) + (short)iVar3;
    sStack000000e2 = *(short *)(&DAT_80025462 + iVar1) + (short)iVar3;
    iVar3 = iVar3 + 1;
    FUN_800127e0(*(undefined4 *)(&DAT_80025464 + iVar1),&stack0x000000e0,uVar2);
    uVar2 = 0x8000;
  } while (iVar3 < 2);
  FUN_80012b9c();
  FUN_800131b0(1);
  FUN_8001f0dc();
  return;
}

