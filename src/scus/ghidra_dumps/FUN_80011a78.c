
void FUN_80011a78(void)

{
  int iVar1;
  undefined4 in_stack_00000018;
  undefined2 in_stack_0000001c;
  undefined2 uStack0000001e;
  undefined2 in_stack_00000028;
  undefined2 uStack0000002a;
  undefined4 in_stack_00000030;
  
  FUN_80011a78(0);
  FUN_80018d2c();
  in_stack_00000018 = 0x2c3;
  in_stack_0000001c = 0x1fff;
  uStack0000001e = 0x1fff;
  in_stack_00000028 = 0x7fff;
  uStack0000002a = 0x7fff;
  in_stack_00000030 = 1;
  FUN_8001e0cc(&stack0x00000018);
  do {
    iVar1 = FUN_8001138c();
  } while (iVar1 == 0);
  in_stack_00000030 = 0;
  FUN_8001e0cc(&stack0x00000018);
  FUN_80019024(0);
  FUN_80012e60(0xf2000000);
  FUN_80012e60(0xf2000001);
  FUN_80012e60(0xf2000002);
  FUN_80012e60(0xf2000003);
  FUN_8001dd9c();
  FUN_80017960();
  FUN_8001f2ec(0);
  FUN_8001f388(0);
  FUN_8001c1cc();
  FUN_8001c16c();
  FUN_800192a8(9,0,0);
  FUN_80012ecc(3);
  FUN_80018f34();
  FUN_80018160();
  FUN_80012d3c();
  FUN_80012d2c(&DAT_800253a4,0x80200000,0);
  return;
}

