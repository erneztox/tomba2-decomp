// FUN_80108ff8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80108ff8(undefined1 *param_1)

{
  byte bVar1;
  int extraout_v1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  *(undefined2 *)(param_1 + 0x5c) = 0;
  bVar1 = param_1[3] & 0x7f;
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
  if (bVar1 == 4) {
    func_0x80077b38(param_1,0x80139294,7);
    *(undefined2 *)(param_1 + 0x68) = 0x7d;
    param_1[0xd] = 0;
    FUN_80112054();
    return;
  }
  if (bVar1 < 5) {
    if (bVar1 != 3) {
      FUN_80112054();
      return;
    }
    func_0x80077b38(param_1,0x80139294,6);
    FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0));
    return;
  }
  if (bVar1 != 5) {
    FUN_80112054();
    return;
  }
  func_0x80077b38(param_1,0x80139294,8);
  *(undefined2 *)(param_1 + 0x68) = 0x7e;
  param_1[0xd] = 1;
  param_1[0xb] = 0x11;
  *(undefined2 *)(param_1 + 0x80) = 0x19;
  *(undefined2 *)(param_1 + 0x82) = 0x32;
  *(undefined2 *)(param_1 + 0x84) = 0x32;
  param_1[0x47] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x86) = 100;
  param_1[0x2b] = 0;
  if ((param_1[3] & 0x80) != 0) {
    uVar3 = 0x40;
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x68);
    func_0x80040cdc(param_1,0);
    iVar2 = 1;
    param_1[0x70] = 1;
    uVar4 = func_0x80042354(1,1);
    param_1[5] = 1;
    if ((int)uVar4 == (int)((ulonglong)uVar4 >> 0x20)) {
      thunk_FUN_80123f10(1);
      return;
    }
    DAT_00000008 = DAT_00000008 + '\x01';
    _DAT_00000097 = _DAT_00000057 + 0x800U & 0xfff;
    if (DAT_00000047 == '\0') {
      _DAT_00000093 = 0x80;
    }
    else {
      _DAT_00000093 = 0xff80;
    }
    if (*(char *)(iVar2 + 5) == '\0') {
      _DAT_00000043 = 8;
      DAT_1f800137 = 2;
      DAT_00000006 = uVar3;
      func_0x8004ed94(0x34,0x41);
      func_0x80074590(0x19,0,0);
      if (extraout_v1 != 2) {
        FUN_8012d2a8();
        return;
      }
      param_1[5] = 3;
      DAT_1f800236 = 7;
      DAT_800bf839 = 1;
      _DAT_800bf83a = (ushort)(byte)param_1[0xbf] << 4;
      return;
    }
    func_0x800735f4(1,0x48);
    return;
  }
  *param_1 = 1;
  *(undefined2 *)(param_1 + 0x7a) = 0x1600;
  *(undefined2 *)(param_1 + 0x7c) = 0x1600;
  *(undefined2 *)(param_1 + 0x7e) = 0x1600;
  return;
}

