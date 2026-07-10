// FUN_8004a828

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004a828(int param_1)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined **ppuVar5;
  
  *(undefined1 *)(param_1 + 0xb) = 0x11;
  *(undefined2 *)(param_1 + 0x7a) = 0x1300;
  *(undefined2 *)(param_1 + 0x7c) = 0x1300;
  *(undefined2 *)(param_1 + 0x7e) = 0x1300;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_1 + 3) == '\x18') {
    if (DAT_800bf9cf == '\0') {
      *(undefined1 *)(param_1 + 3) = 0x18;
    }
    else if (DAT_800bf9cf == '\x01') {
      *(undefined1 *)(param_1 + 3) = 0x19;
    }
  }
  iVar4 = (uint)*(byte *)(param_1 + 3) * 8;
  uVar2 = *(ushort *)(&DAT_800a29ce + iVar4);
  if (((int)*(short *)(&DAT_800a29ce + iVar4) & 0x8000U) != 0) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 1;
  }
  if ((uVar2 & 0x7fff) == 1) {
    *(undefined2 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
    sVar1 = *(short *)(&DAT_800a29cc + iVar4);
    ppuVar5 = *(undefined ***)(&DAT_800a58fc + (uint)DAT_800bf870 * 4);
  }
  else {
    *(ushort *)(param_1 + 0x5c) = uVar2 & 0x7fff;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf58;
    sVar1 = *(short *)(&DAT_800a29cc + iVar4);
    ppuVar5 = &PTR_DAT_80017334;
  }
  FUN_80077b38(param_1,ppuVar5,(int)sVar1);
  *(ushort *)(param_1 + 0x80) = (ushort)(byte)(&DAT_800a29d0)[iVar4];
  *(ushort *)(param_1 + 0x82) = (ushort)(byte)(&DAT_800a29d0)[iVar4] << 1;
  *(ushort *)(param_1 + 0x84) = (ushort)(byte)(&DAT_800a29d1)[iVar4];
  *(ushort *)(param_1 + 0x86) = (ushort)(byte)(&DAT_800a29d1)[iVar4] << 1;
  uVar3 = *(undefined2 *)(&DAT_800a29d2 + iVar4);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)(param_1 + 0x68) = uVar3;
  return;
}

