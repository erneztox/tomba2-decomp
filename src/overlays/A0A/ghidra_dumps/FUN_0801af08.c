// FUN_0801af08

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801af08(int param_1)

{
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = (int)*(short *)(param_1 + 0x50);
  local_18 = *(undefined2 *)(param_1 + 0x48);
  local_16 = *(undefined2 *)(param_1 + 0x4a);
  local_14 = *(undefined2 *)(param_1 + 0x32);
  func_0x000318a0(param_1 + 0x2c,0x8011eb28,&local_18);
  func_0x00027768(0x8011d700,0,0xffffffec,0);
  local_18 = *(undefined2 *)(param_1 + 0x48);
  local_16 = *(undefined2 *)(param_1 + 0x4a);
  local_14 = *(undefined2 *)(param_1 + 0x4c);
  func_0x000318a0(param_1 + 0x2c,0x8011eb28,&local_18);
  func_0x00027768(0x8011d6dc,0,0xffffffec,0);
  return;
}

