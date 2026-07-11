// FUN_08012cf8

void FUN_08012cf8(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = func_0x0010b6bc(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x0010b960(uVar1,param_2,uVar2 >> 0x10);
  return;
}

