// A0I_MaterialHelper - Material color helper: applies color/alpha to entity

void A0I_MaterialHelper(uint *param_1,s32 param_2)

{
  s32 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = func_0x0010bb40(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x0010bde4(uVar1,param_2,uVar2 >> 0x10);
  return;
}

