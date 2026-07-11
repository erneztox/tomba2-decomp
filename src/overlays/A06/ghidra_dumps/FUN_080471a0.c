// FUN_080471a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080471a0(int param_1)

{
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  
  local_10 = DAT_8010a464;
  local_e = DAT_8010a466;
  setCopControlWord(2,0xa800,0);
  setCopControlWord(2,0xb000,0);
  setCopControlWord(2,0xb800,0);
  _DAT_1f800090 = (int)*(short *)(param_1 + 0x50);
  local_f = (undefined1)(*(ushort *)(param_1 + 0x54) >> 3);
  func_0x00031d24(param_1 + 0x2c,&local_10,param_1 + 0x48);
  func_0x00027768(0x8014c42c,0,0xffffffe2,(int)*(short *)(param_1 + 0x52));
  return;
}

