// FUN_0000ba94

void FUN_0000ba94(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = func_0x00114458(param_1 + 4,param_2,uVar2 & 0xffff);
  func_0x001146fc(uVar1,param_2,uVar2 >> 0x10);
  return;
}

