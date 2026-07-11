// A0H_MaterialHelper - Material color helper

void A0H_MaterialHelper(uint *param_1,s32 param_2)

{
  s32 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = func_0x0010b6bc(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x0010b960(uVar1,param_2,uVar2 >> 0x10);
  return;
}

