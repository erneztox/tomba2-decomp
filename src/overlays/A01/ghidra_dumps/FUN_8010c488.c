// FUN_8010c488

/* WARNING: Removing unreachable block (ram,0x8010c6cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010c488(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (sVar2 == -1) {
      *(undefined2 *)(param_1 + 0x4a) = 0x400;
      *(undefined2 *)(param_1 + 0x50) = 0xff80;
      *(undefined2 *)(param_1 + 0x52) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_800e7e84 = 4;
      DAT_800e7e85 = 0x21;
      DAT_800e7e86 = 0;
      _DAT_800e7eca = 0xd000;
      func_0x80054d14(&DAT_800e7e80,0x12);
      *(undefined2 *)(param_1 + 0x40) = 10;
      func_0x80074590(0x25,0,0);
      FUN_80115608();
      return;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_80115608();
      return;
    }
    if (*(char *)(param_1 + 0xbf) != '\0') {
      if (*(char *)(param_1 + 0x29) == '\0') {
        *(undefined1 *)(param_1 + 0xbf) = 0;
        FUN_80115608();
        return;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined2 *)(param_1 + 0x40) = 4;
      DAT_1f800137 = 2;
      FUN_80115608();
      return;
    }
  }
  else {
    if (bVar1 == 2) {
      sVar2 = *(short *)(param_1 + 0x40) + -1;
      *(short *)(param_1 + 0x40) = sVar2;
      if (sVar2 == -1) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        DAT_800bf839 = 3;
        _DAT_800bf83a = 0x10e;
        DAT_800bf80f = 2;
      }
    }
    else if (bVar1 != 3) {
      FUN_80115608();
      return;
    }
    _DAT_800e7eb0 = _DAT_800e7eb0 + _DAT_800e7eca * 0x100;
    _DAT_800e7eca = _DAT_800e7eca + 0x100;
    if (*(short *)(param_1 + 0x4a) != 0) {
      sVar2 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x4a) = sVar2;
      *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) =
           *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + sVar2;
      FUN_80115608();
      return;
    }
    sVar2 = *(short *)(param_1 + 0x52) + 0x200;
    *(short *)(param_1 + 0x52) = sVar2;
    iVar3 = func_0x80083e80((int)sVar2);
    *(short *)(param_1 + 0x58) = (short)(iVar3 >> 4);
  }
  iVar3 = (int)*(short *)(param_1 + 0x60) * (uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xfff;
  }
  *(short *)(*(int *)(param_1 + 0xc4) + 2) = (short)(iVar3 >> 0xc);
  sVar2 = (short)((int)((uint)*(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) * 0x9d) >> 0xc) + 0x44;
  *(short *)(param_1 + 0x86) = sVar2;
  *(short *)(param_1 + 0x84) = sVar2;
  func_0x80051844(param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x80077ebc(param_1);
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}

