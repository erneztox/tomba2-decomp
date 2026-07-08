
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80021150(int param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar8 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar6 = FUN_80084080(iVar9 * iVar9 + iVar8 * iVar8);
  bVar4 = false;
  if (((int)(uVar6 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
     && (bVar4 = false,
        (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
              (uint)*(ushort *)(param_1 + 0x84) + (uint)*(ushort *)(param_2 + 0x84) & 0xffff) <=
        (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    _DAT_1f80009c = FUN_80085690(-iVar8,iVar9);
    bVar4 = true;
  }
  if (bVar4) {
    if (*(char *)(param_1 + 0x5f) == '\x10') {
      bVar5 = *(byte *)(param_1 + 0x46) >> 1;
      if (bVar5 < 2) {
        iVar8 = FUN_80083f50(*(short *)(param_1 + 0x68) + 0x800);
        sVar1 = *(short *)(param_1 + 0x80);
        sVar2 = *(short *)(param_2 + 0x80);
        iVar9 = FUN_80083e80(*(short *)(param_1 + 0x68) + 0x800);
        sVar3 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_3 + 0x2c) + (short)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_3 + 0x34) -
             (short)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
        *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_3 + 0x30);
      }
      else if (bVar5 < 4) {
        *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_3 + 0x2c);
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_3 + 0x34);
        *(short *)(param_1 + 0x32) =
             *(short *)(param_1 + 0x84) +
             *(short *)(param_3 + 0x30) + (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
      }
    }
    else {
      *(undefined1 *)(param_2 + 0x2b) = 1;
    }
    uVar6 = FUN_8001e860(param_1,param_2,param_3,param_4);
    uVar7 = 1;
    if ((uVar6 & 0x80) == 0) {
      DAT_1f800182 = 0;
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

