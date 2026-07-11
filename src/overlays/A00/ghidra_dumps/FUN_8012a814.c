// FUN_8012a814

void FUN_8012a814(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_v1;
  
  *(short *)(param_1 + 0x80) = (short)(param_3 >> 0xc);
  *(short *)(param_1 + 0x82) = (short)((param_3 >> 0xc) << 1);
  iVar1 = (int)(param_2 * (uint)*(ushort *)(in_v1 + 0x3a)) >> 0xc;
  *(short *)(param_1 + 0x84) = (short)iVar1;
  *(short *)(param_1 + 0x86) = (short)(iVar1 << 1);
  return;
}

