// FUN_8004a9a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004a9a4(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = (uint)*(byte *)(param_1 + 3) * 8;
  FUN_80051b70(param_1,(int)*(short *)(&DAT_800a29ce + iVar4),(int)*(short *)(&DAT_800a29cc + iVar4)
              );
  *(undefined2 *)(param_1 + 0xb8) = 0x1300;
  *(undefined2 *)(param_1 + 0xba) = 0x1300;
  *(undefined2 *)(param_1 + 0xbc) = 0x1300;
  *(ushort *)(param_1 + 0x84) = (ushort)(byte)(&DAT_800a29d1)[iVar4];
  *(ushort *)(param_1 + 0x86) = (ushort)(byte)(&DAT_800a29d1)[iVar4] << 1;
  *(ushort *)(param_1 + 0x80) = (ushort)(byte)(&DAT_800a29d0)[iVar4];
  *(ushort *)(param_1 + 0x82) = (ushort)(byte)(&DAT_800a29d0)[iVar4] << 1;
  uVar1 = *(undefined2 *)(&DAT_800a29d2 + iVar4);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)(param_1 + 0x68) = uVar1;
  FUN_8004766c(param_1);
  FUN_80048750(param_1);
  uVar1 = _DAT_1f8001a0;
  sVar2 = *(short *)(param_1 + 0x68);
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x56) = uVar1;
  if (sVar2 == 8) {
    psVar3 = *(short **)(param_1 + 0xc0);
    *(undefined2 *)(param_1 + 0x54) = 0x400;
    sVar2 = *psVar3 + -0x50;
  }
  else {
    if (sVar2 == 1) {
      psVar3 = *(short **)(param_1 + 0xc0);
      *(undefined2 *)(param_1 + 0x58) = 0xff00;
    }
    else {
      if (sVar2 != 2) {
        return;
      }
      psVar3 = *(short **)(param_1 + 0xc0);
    }
    sVar2 = *psVar3 + -0x3c;
  }
  *psVar3 = sVar2;
  return;
}

