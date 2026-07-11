// FUN_08011b0c

void FUN_08011b0c(char *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((((param_1[3] != '\0') && (*param_1 == '\x05')) && (param_1[0xbf] == '\x01')) &&
     (((*(byte *)(param_2 + 0xbf) & 1) == 0 &&
      (iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) *
                    0x10000) >> 0x10,
      iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) *
                   0x10000) >> 0x10, uVar4 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3),
      (int)(uVar4 & 0xffff) <= *(short *)(param_1 + 0x80) + 0x50)))) {
    uVar1 = *(ushort *)(param_2 + 0x86);
    if ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32)) +
              ((uint)uVar1 - (*(ushort *)(param_2 + 0x84) - 0x32)) & 0xffff) <= (short)uVar1 + 100)
    {
      *(ushort *)(param_2 + 0x32) =
           (*(ushort *)(param_1 + 0x32) - (uVar1 - *(ushort *)(param_2 + 0x84))) + -0x32;
      *(undefined1 *)(param_2 + 0x5f) = 1;
      param_1[0xbf] = '\x02';
      func_0x00042354(1,3);
      DAT_800bf81e = 0;
    }
  }
  return;
}

