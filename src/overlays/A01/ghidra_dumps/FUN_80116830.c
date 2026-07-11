// FUN_80116830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80116830(undefined1 *param_1,undefined1 param_2,int param_3,undefined1 param_4)

{
  byte bVar1;
  int iVar2;
  undefined1 in_t0;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      bVar1 = param_1[0xbf];
      if (bVar1 == 1) {
        FUN_8011eec4(param_1);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          FUN_8011ecfc(param_1);
        }
      }
      else if (bVar1 == 2) {
        FUN_8011f0ac(param_1);
      }
    }
    else if (param_1[3] == '\x03') {
      if (param_1[0xbf] == '\0') {
        FUN_8011f2a4(param_1);
      }
      else if (param_1[0xbf] == '\x01') {
        FUN_8011f4b8(param_1);
        if (param_1[1] != '\0') {
          func_0x800518fc(param_1);
        }
        param_1[0x2b] = 0;
        FUN_8011fb10();
        return;
      }
    }
    *(undefined1 *)(param_3 + 0x28) = in_t0;
    *(undefined1 *)(param_3 + 0x29) = param_2;
    *(undefined1 *)(param_3 + 0x2a) = param_4;
    FUN_80128ac8();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8011fb10();
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
    iVar2 = func_0x800519e0(param_1,0xf,_DAT_800ecfb0,0x801357a4);
    if (iVar2 == 0) {
      param_1[0xb] = 0x40;
      *(undefined2 *)(param_1 + 0x80) = 0xa0;
      *(undefined2 *)(param_1 + 0x82) = 0x140;
      *(undefined2 *)(param_1 + 0x84) = 0xe0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x180;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      func_0x80040cdc(param_1,0x801393c0,0x800a3cd0);
      if (param_1[3] == '\0') {
        *param_1 = 9;
        param_1[0x2a] = 0x10;
        *(undefined2 *)(param_1 + 0x2e) = 0x35e8;
        *(undefined2 *)(param_1 + 0x32) = 0xe7fd;
        *(undefined2 *)(param_1 + 0x36) = 0x3b60;
        param_1[0x7b] = 2;
        func_0x80077c40(param_1,0x801393c0);
        if (DAT_800bf8bf != -1) {
          param_1[0xbf] = 0;
          FUN_8011fa14();
          return;
        }
        if (DAT_800bf8c1 != '\0') {
          if ((DAT_800bfa01 & 2) != 0) {
            param_1[4] = 3;
            FUN_8011fa14();
            return;
          }
          param_1[0xbf] = 2;
          FUN_8011fa14();
          return;
        }
        param_1[0xbf] = 1;
        FUN_8011fa14();
        return;
      }
      if (param_1[3] != '\x03') {
        FUN_8011fa14();
        return;
      }
      iVar2 = func_0x8006fb0c(param_1,0x2c);
      *(int *)(param_1 + 0x14) = iVar2;
      if (iVar2 != 0) {
        *(undefined1 *)(iVar2 + 0xbe) = 0;
        *(undefined2 *)(iVar2 + 0x60) = 0xff80;
        *(undefined1 *)(iVar2 + 0x5e) = 3;
        *(byte *)(iVar2 + 0x5f) = *(byte *)(iVar2 + 0x5f) | 1;
      }
      if (DAT_800bf9fa == '\x18') {
        FUN_80115d84(param_1);
        FUN_8012c2b4(param_1);
        *(undefined2 *)(param_1 + 0x2e) = 0x526c;
        param_1[0xbf] = 1;
        *param_1 = 2;
        param_1[0x2a] = 10;
        *(undefined2 *)(param_1 + 0x32) = 0xe4f4;
        *(undefined2 *)(param_1 + 0x36) = 0x2340;
        *(undefined2 *)(param_1 + 0x56) = 0x800;
        param_1[0x7b] = 0;
        func_0x80077c40(param_1,0x801393c0,0);
        param_1[5] = 0;
        param_1[4] = param_1[4] + '\x01';
        FUN_8011fb10();
        return;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x4f59;
      param_1[0xbf] = 0;
      FUN_8011f9d4();
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      FUN_8011fb10();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

