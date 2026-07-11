// FUN_08019018

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019018(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  puVar5 = _DAT_1f800158;
  DAT_1f800182 = DAT_1f80015e;
  while( true ) {
    do {
      if (DAT_1f800182 == '\0') {
        return;
      }
      pbVar4 = (byte *)*puVar5;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar5 = puVar5 + 1;
    } while (((*pbVar4 & 1) == 0) || (pbVar4[2] != 5));
    iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(pbVar4 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(pbVar4 + 0x36)) * 0x10000)
            >> 0x10;
    uVar3 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2);
    if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(pbVar4 + 0x80) < (int)(uVar3 & 0xffff))
    break;
    if ((int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(pbVar4 + 0x86) <
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(pbVar4 + 0x32)) +
              (uint)*(ushort *)(pbVar4 + 0x84) +
              ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) & 0xffff)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x29) = 1;
    if (pbVar4[0x2b] == 0) {
      pbVar4[0x2b] = 1;
      pbVar4[8] = 2;
      func_0x000517f8();
      func_0x0004ed94(0x2f,0x41);
    }
  }
  return;
}

