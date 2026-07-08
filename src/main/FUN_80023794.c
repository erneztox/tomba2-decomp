
bool FUN_80023794(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 4)) * 0x10000) >>
          0x10;
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 8)) * 0x10000) >>
          0x10;
  uVar4 = FUN_80084080(iVar2 * iVar2 + iVar3 * iVar3);
  if ((int)((int)*(short *)(param_1 + 0x80) + (uint)*(byte *)(param_3 + 4)) < (int)(uVar4 & 0xffff))
  {
    bVar1 = false;
  }
  else {
    bVar1 = (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 6)) +
                  (uint)*(ushort *)(param_1 + 0x84) + (uint)*(byte *)(param_3 + 5) & 0xffff) <=
            (int)((int)*(short *)(param_1 + 0x86) + (uint)*(byte *)(param_3 + 5) * 2);
  }
  return bVar1;
}

