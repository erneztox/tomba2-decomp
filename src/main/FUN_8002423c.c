
undefined4 FUN_8002423c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  
  if (*(short *)(param_1 + 0x4a) < 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
            >> 0x10;
    uVar3 = FUN_80084080(iVar1 * iVar1 + iVar2 * iVar2);
    uVar4 = 0xffffffff;
    if ((int)(uVar3 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
    {
      sVar5 = (*(short *)(param_2 + 0x84) + *(short *)(param_1 + 0x86)) - *(short *)(param_1 + 0x84)
      ;
      uVar4 = 0xffffffff;
      if ((int)(uint)(ushort)((*(short *)(param_1 + 0x32) - *(short *)(param_2 + 0x32)) + sVar5) <=
          (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
        uVar4 = 2;
        *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x32) - sVar5;
        *(undefined1 *)(param_1 + 0x29) = 1;
      }
    }
  }
  return uVar4;
}

