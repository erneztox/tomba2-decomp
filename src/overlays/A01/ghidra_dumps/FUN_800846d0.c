// FUN_800846d0

void FUN_800846d0(int param_1,int param_2)

{
  setCopControlWord(2,0xc000,param_1 << 0x10);
  setCopControlWord(2,0xc800,param_2 << 0x10);
  return;
}

