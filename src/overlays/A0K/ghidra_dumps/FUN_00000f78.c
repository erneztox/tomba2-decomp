// FUN_00000f78

undefined4 FUN_00000f78(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 4)) * 0x10000) >>
          0x10;
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 8)) * 0x10000) >>
          0x10;
  bVar1 = *(byte *)(param_2 + 3);
  uVar4 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3);
  iVar2 = (uint)bVar1 * 4;
  uVar5 = 0;
  if ((((int)(uVar4 & 0xffff) <=
        (int)*(short *)(param_1 + 0x80) + (int)*(short *)(iVar2 + -0x7fee7940)) &&
      (uVar4 = (uint)*(ushort *)(iVar2 + -0x7fee793e), uVar5 = 0,
      (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 6)) +
            *(ushort *)(param_1 + 0x84) + uVar4 & 0xffff) <=
      (int)*(short *)(param_1 + 0x86) + ((int)(uVar4 << 0x10) >> 0xf))) && (uVar5 = 1, bVar1 != 0))
  {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      func_0x0004ed94(0x67,0x41);
    }
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x5a;
    uVar5 = 1;
  }
  return uVar5;
}

