// FUN_08013c60

void FUN_08013c60(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar3 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2);
  if ((int)(uVar3 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar1 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    iVar2 = (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84);
    if ((int)(iVar1 + iVar2 & 0xffffU) <=
        (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
      iVar4 = (uint)*(ushort *)(param_1 + 0x80) * 2 + (uint)*(ushort *)(param_2 + 0x80) * 2;
      sVar5 = (short)iVar4;
      if (iVar1 * 0x10000 >> 0x10 < -400) {
        iVar2 = iVar2 * 0x10000 >> 0x10;
        iVar1 = -((iVar4 * 0x10000 >> 0x10) * ((iVar1 + 400) * 0x10000 >> 0x10));
        if (iVar2 == 0) {
          trap(0x1c00);
        }
        if ((iVar2 == -1) && (iVar1 == -0x80000000)) {
          trap(0x1800);
        }
        sVar5 = sVar5 - (short)(iVar1 / iVar2);
      }
      if (((int)*(short *)(param_2 + 0x36) + (int)*(short *)(param_2 + 0x80) +
          (int)*(short *)(param_1 + 0x80)) - (int)sVar5 <= (int)*(short *)(param_1 + 0x36)) {
        *(short *)(param_1 + 0x36) =
             (*(short *)(param_1 + 0x80) + *(short *)(param_2 + 0x36) + *(short *)(param_2 + 0x80))
             - sVar5;
        *(undefined1 *)(param_1 + 0x60) = 1;
        *(undefined1 *)(param_1 + 0x5f) = 2;
        *(undefined1 *)(param_2 + 0x2b) = 1;
      }
    }
  }
  return;
}

