// FUN_8013cfd0

void FUN_8013cfd0(int param_1)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  cVar2 = DAT_8014bf5e - 1;
  uVar1 = (uint)DAT_8014bf5e;
  DAT_8014bf5e = cVar2;
  if ((int)(uVar1 << 0x18) < 0) {
    uVar3 = *(ushort *)(param_1 + 0x68) >> 8 & 0xf;
    if ((uVar3 == 1) || ((uVar3 == 2 && (0x500 < *(short *)(param_1 + 0x4e))))) {
      local_1e = *(undefined2 *)(param_1 + 0x2e);
      local_1a = *(undefined2 *)(param_1 + 0x6a);
      local_16 = *(undefined2 *)(param_1 + 0x36);
      func_0x8003116c(8,auStack_20,0xffffffb0);
      DAT_8014bf5e = '\n';
    }
    *(undefined2 *)(param_1 + 0x68) = 0;
  }
  return;
}

