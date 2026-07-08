
void FUN_800538e0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  if ((param_3 == 0) &&
     ((uVar1 = *(ushort *)(param_1 + 0x6a) >> 8, (uVar1 & 0xf) == 0 || ((uVar1 & 0xf) == 3)))) {
    local_16 = *(undefined2 *)(param_2 + 2);
    local_12 = *(short *)(param_2 + 6) + *(short *)(param_1 + 0x84);
    local_e = *(undefined2 *)(param_2 + 10);
    iVar2 = FUN_8003116c(0x35,auStack_18,0xffffffa6);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    }
  }
  return;
}

