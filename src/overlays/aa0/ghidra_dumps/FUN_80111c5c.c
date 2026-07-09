// FUN_80111c5c

uint FUN_80111c5c(int param_1)

{
  short sVar1;
  uint uVar2;
  int in_v1;
  int unaff_s0;
  undefined2 uStack00000016;
  undefined2 uStack0000001a;
  
  if (in_v1 == 0) {
    *(undefined2 *)(param_1 + 0x42) = 0x12;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    DAT_800bf818 = 9;
    uStack00000016 = *(undefined2 *)(unaff_s0 + 0x32);
  }
  else {
    uStack00000016 = 0;
    if (in_v1 == 1) {
      sVar1 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar1 + -1;
      return (uint)(sVar1 == 1);
    }
  }
  uStack0000001a = *(undefined2 *)(unaff_s0 + 0x36);
  func_0x8003116c(param_1,&stack0x00000010,0xfffffffc);
  uVar2 = FUN_80123c14();
  return uVar2;
}

