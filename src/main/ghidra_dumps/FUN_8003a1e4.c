
int FUN_8003a1e4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(*(byte *)(param_1 + 8) >> 1);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    uVar2 = (uint)*(byte *)(param_2 + 0x3f);
    if (uVar2 < uVar1) {
      return (uVar1 - uVar2) * -0xc + 6;
    }
    return (uVar2 - uVar1) * 0xc + 6;
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x3f);
  if (uVar2 == uVar1) {
    return 0;
  }
  if (uVar2 < uVar1) {
    return (uVar1 - uVar2) * -0xc;
  }
  return (uVar2 - uVar1) * 0xc;
}

