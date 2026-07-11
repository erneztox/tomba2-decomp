// FUN_08012d90

void FUN_08012d90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar3 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2);
  if (((int)(uVar3 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
     && ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
               (((uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x86)) -
               (uint)*(ushort *)(param_1 + 0x84)) & 0xffff) <=
         (int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  return;
}

