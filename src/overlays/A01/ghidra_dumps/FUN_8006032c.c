// FUN_8006032c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006032c(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar2 = *(byte *)(param_1 + 0x169);
  if (bVar2 == 1) {
    uVar4 = (uint)_DAT_1f800238 % 6;
    uVar3 = (int)(uVar4 * 0x10000) >> 0x10;
    if (uVar3 == 0) {
      cVar1 = *(char *)(param_1 + 0x168) + '\x01';
    }
    else {
      if (4 < uVar3) {
        uVar4 = 4;
      }
      cVar1 = (char)uVar4 + *(char *)(param_1 + 0x168);
    }
    *(char *)(param_1 + 0x168) = cVar1;
    if (0xf < *(byte *)(param_1 + 0x168)) {
      *(undefined1 *)(param_1 + 0x168) = 0xf;
    }
  }
  else if (((1 < bVar2) && (bVar2 < 4)) &&
          (bVar2 = *(char *)(param_1 + 0x168) - 2, *(byte *)(param_1 + 0x168) = bVar2,
          (int)((uint)bVar2 << 0x18) < 0)) {
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x169) = 0;
  }
  _DAT_1f800238 = 0;
  *(ushort *)(param_1 + 0x44) = (ushort)(byte)(&DAT_800a46f0)[*(byte *)(param_1 + 0x168)];
  return;
}

