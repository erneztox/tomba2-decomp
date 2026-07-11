// FUN_0801c140

void FUN_0801c140(int param_1)

{
  int iVar1;
  undefined2 local_10;
  short local_e;
  undefined2 local_c;
  
  local_10 = *(undefined2 *)(param_1 + 0x2e);
  iVar1 = (uint)*(ushort *)(param_1 + 0x80) << 0x10;
  local_e = (*(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x86)) - *(short *)(param_1 + 0x84);
  local_c = *(undefined2 *)(param_1 + 0x36);
  DAT_1f800094 = (undefined1)((iVar1 >> 0x10) - (iVar1 >> 0x12) >> 3);
  DAT_1f800095 = 0x10;
  DAT_1f800096 = DAT_1f800094;
  func_0x000318a0(&local_10,&DAT_1f800094,param_1 + 0x54);
  func_0x00027768(0x8009fae8,0,0xffffffec,0);
  return;
}

