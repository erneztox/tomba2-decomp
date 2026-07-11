// FUN_8010fff4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8010fff4(int param_1,uint param_2,short param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 7) == '\0') {
    if (*(byte *)(param_1 + 0x46) != param_2) {
      *(char *)(param_1 + 0x46) = (char)param_2;
      if (param_2 != 0xd) {
        if ((int)param_2 < 0xe) {
          if (param_2 != 5) {
            uVar4 = FUN_80119048(param_1);
            return uVar4;
          }
          *(undefined1 *)(param_1 + 0xbe) = 0x13;
          func_0x8004130c();
          *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
          func_0x80074590(0x93,0,0);
          func_0x80051b04(*(undefined4 *)(param_1 + 0x120),0xc,0x2d);
          *(undefined2 *)(param_1 + 0x6e) = 0;
          if ((*(char *)(param_1 + 99) != '\0') && (*(char *)(param_1 + 99) != '\x03')) {
            return 3;
          }
          *(undefined2 *)(param_1 + 0x6e) = 0;
          *(undefined1 *)(param_1 + 99) = 0;
          uVar4 = FUN_80122114();
          return uVar4;
        }
        if ((param_2 != 0xf) && (param_2 != 0x11)) {
          uVar4 = FUN_80119048(param_1);
          return uVar4;
        }
      }
      *(int *)(*(int *)(param_1 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 0x4c);
      func_0x80077cfc(param_1,0x80139b24,param_2,6);
    }
    *(short *)(param_1 + 0x42) = param_3;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
    *(undefined1 *)(param_1 + 0x66) = 0;
    *(short *)(param_1 + 0xd2) = (short)((0x40 - param_3) / 2);
    *(short *)(param_1 + 0xca) = param_3;
    *(int *)(param_2 + 0x34) = param_3 * 0x10000 + 0x100;
    FUN_801208b4();
    uVar4 = FUN_80122114();
    return uVar4;
  }
  iVar3 = func_0x8009a450();
  iVar3 = (uint)*(ushort *)(param_1 + 0x70) + (iVar3 >> 9);
  *(short *)(param_1 + 0x70) = (short)iVar3;
  sVar1 = *(short *)(param_1 + 0x32);
  iVar3 = func_0x80083f50(iVar3 * 0x10000 >> 0x10);
  uVar2 = *(ushort *)(param_1 + 0x42);
  *(short *)(param_1 + 0x32) =
       *(short *)(param_1 + 0x32) +
       (short)(((int)sVar1 + (iVar3 >> 6)) - (int)*(short *)(param_1 + 0x32) >> 5);
  *(ushort *)(param_1 + 0x42) = uVar2 - 1;
  return (uint)((int)((uint)uVar2 << 0x10) < 1);
}

