// FUN_0802e8c4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802e8c4(int param_1)

{
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  
  local_10 = *(undefined1 *)(param_1 + 0x56);
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = 0;
  local_f = local_10;
  local_e = local_10;
  func_0x000318a0(param_1 + 0x2c,&local_10,param_1 + 0x48);
  func_0x00027768(0x8013886c,0,0xffffffce,(int)*(short *)(param_1 + 0x50));
  return;
}

