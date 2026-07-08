
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800527c8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined1 auStack_38 [2];
  undefined2 local_36;
  undefined2 local_32;
  undefined2 local_2e;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    iVar5 = FUN_800519e0(param_1,0x12,_DAT_800ecf6c,&DAT_800a43e8);
    uVar2 = _DAT_800ecf70;
    if (iVar5 != 0) {
      return;
    }
    *(undefined ***)(param_1 + 0x7c) = &PTR_DAT_8001b354;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    FUN_80041718(param_1,0,0);
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    if (*(char *)(param_1 + 3) == '\0') {
      *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
      *(short *)(param_1 + 0x32) = _DAT_800e7eb2 + _DAT_800e7ee2 + -0xa0;
      *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
      if (DAT_800e7e82 == '\0') {
        uVar3 = _DAT_800e7fc0 + 0x400U & 0xfff;
      }
      else {
        uVar3 = FUN_800782b0(param_1 + 0x2c,(int)_DAT_1f8000d2,(int)_DAT_1f8000da);
      }
      *(ushort *)(param_1 + 0x56) = uVar3;
      _DAT_800e7eb2 = *(short *)(param_1 + 0x32) + -0x3c;
      _DAT_800e7ed6 = *(undefined2 *)(param_1 + 0x56);
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      FUN_80054d14(&DAT_800e7e80,0xe4,0);
      DAT_800e7ffa = 1;
      return;
    }
    *(short *)(param_1 + 0x62) = _DAT_800e7eb2 + 1000;
    *(undefined2 *)(param_1 + 100) = _DAT_800e7eae;
    *(short *)(param_1 + 0x66) = _DAT_800e7ee2 + _DAT_800e7eb2 + 0x348;
    *(undefined2 *)(param_1 + 0x68) = _DAT_800e7eb6;
    uVar3 = _DAT_800e7ed6;
    *(undefined2 *)(param_1 + 0x40) = 0x14;
    *(ushort *)(param_1 + 0x60) = uVar3 & 0xfff;
    FUN_80041718(param_1,3,0);
    DAT_800e7e81 = 0;
    FUN_80054d14(&DAT_800e7e80,0xe4,0);
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  if (*(char *)(param_1 + 3) != '\0') {
    switch(*(undefined1 *)(param_1 + 5)) {
    case 0:
      sVar4 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar4 + -1;
      if (sVar4 == 1) {
        _DAT_1f8000c0 = 0xfc18;
        _DAT_1f8000c2 = 0;
        _DAT_1f8000c4 = 600;
        FUN_80084470(0x1f800118,&DAT_1f8000c0,&DAT_1f800014);
        *(short *)(param_1 + 0x2e) = _DAT_1f8000d2 + _DAT_1f800014;
        *(short *)(param_1 + 0x36) = _DAT_1f8000da + _DAT_1f80001c;
        sVar4 = _DAT_800e7eb2;
        *(undefined1 *)(param_1 + 1) = 1;
        *(short *)(param_1 + 0x32) = sVar4;
        DAT_800e7e81 = 1;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        *(undefined2 *)(param_1 + 0x44) = 0x1800;
        sVar4 = FUN_800782b0(param_1 + 0x2c,(int)*(short *)(param_1 + 100),
                             (int)*(short *)(param_1 + 0x68));
        *(ushort *)(param_1 + 0x56) = sVar4 - 0x200U & 0xfff;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      }
      break;
    case 1:
      FUN_80052720(param_1);
      FUN_80052694(param_1);
      *(undefined1 *)(param_1 + 1) = 1;
      if (*(short *)(param_1 + 0x32) == *(short *)(param_1 + 0x66)) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        FUN_80041768(param_1,1,4);
      }
      break;
    case 2:
      local_36 = *(undefined2 *)(param_1 + 100);
      local_32 = *(undefined2 *)(param_1 + 0x66);
      local_2e = *(undefined2 *)(param_1 + 0x68);
      iVar5 = FUN_8006cec4(param_1 + 0x2c,auStack_38,0xe0);
      if (iVar5 != 0) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        FUN_80041768(param_1,0,4);
      }
      goto LAB_80052f48;
    case 3:
      sVar4 = FUN_800776f8((int)*(short *)(param_1 + 0x60),(int)*(short *)(param_1 + 0x56),0x80);
      *(short *)(param_1 + 0x56) = sVar4;
      if (sVar4 == *(short *)(param_1 + 0x60)) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        FUN_80054d14(&DAT_800e7e80,2,0x10);
      }
LAB_80052f48:
      *(undefined1 *)(param_1 + 1) = 1;
      break;
    case 4:
      uVar3 = *(short *)(param_1 + 0xb8) - 0x100;
      *(ushort *)(param_1 + 0xb8) = uVar3;
      if (uVar3 < 0x101) {
        *(undefined2 *)(param_1 + 0xb8) = 0x100;
        DAT_1f800137 = 0;
        DAT_1f800236 = 0;
        DAT_800e806c = 0;
        *(undefined1 *)(param_1 + 4) = 3;
      }
      _DAT_800e7eb2 = _DAT_800e7eb2 + 10;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
      if (*(short *)(param_1 + 0x62) < _DAT_800e7eb2) {
        _DAT_800e7eb2 = *(short *)(param_1 + 0x62);
      }
      *(undefined1 *)(param_1 + 1) = 1;
      *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0xb8);
      *(undefined2 *)(param_1 + 0xba) = *(undefined2 *)(param_1 + 0xb8);
    }
    if (*(char *)(param_1 + 1) != '\0') {
      _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
      if (*(byte *)(param_1 + 5) < 4) {
        _DAT_800e7eb2 = *(short *)(param_1 + 0x32) + -100;
      }
      _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
      _DAT_800e7ed6 = *(ushort *)(param_1 + 0x56);
    }
    goto LAB_80053040;
  }
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
    _DAT_800e7eb2 = *(short *)(param_1 + 0x32) + -0x3c;
    if (*(short *)(param_1 + 0x40) == 0) {
      iVar5 = FUN_80042728();
      if (iVar5 != 0) {
        *(undefined2 *)(param_1 + 0x44) = 0x100;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        FUN_80041768(param_1,2,4);
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        *(undefined2 *)(param_1 + 0x42) = 0xc;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        _DAT_1f8000c0 = 400;
        _DAT_1f8000c2 = 0;
        _DAT_1f8000c4 = 0;
        FUN_80084470(0x1f800118,&DAT_1f8000c0,&DAT_1f800014);
        *(short *)(param_1 + 100) = _DAT_1f8000d2 + _DAT_1f800014;
        *(short *)(param_1 + 0x66) = _DAT_1f8000d6 + _DAT_1f800018;
        *(short *)(param_1 + 0x68) = _DAT_1f8000da + _DAT_1f80001c;
        _DAT_1f8000c0 = 0xfc18;
        _DAT_1f8000c2 = 0;
        _DAT_1f8000c4 = 600;
        FUN_80084470(0x1f800118,&DAT_1f8000c0,&DAT_1f800014);
        *(short *)(param_1 + 0x60) = _DAT_1f8000d2 + _DAT_1f800014;
        *(short *)(param_1 + 0x62) = _DAT_1f8000da + _DAT_1f80001c;
      }
    }
    else {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    }
    goto switchD_800529e4_default;
  case 1:
    sVar4 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar4 + -1;
    if (sVar4 == 1) {
      DAT_800bf80f = 4;
      DAT_800bf839 = 1;
      *(undefined2 *)(param_1 + 0x40) = 0x14;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x60);
      *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x62);
    }
    break;
  case 2:
    if ((_DAT_1f80017c & 7) == 0) {
      FUN_80074590(0x38,(int)*(char *)(param_1 + 0x42),0);
      sVar4 = *(short *)(param_1 + 0x42) + 2;
      *(short *)(param_1 + 0x42) = sVar4;
      if (0x1a < sVar4) {
        *(undefined2 *)(param_1 + 0x42) = 0x1a;
      }
    }
    sVar4 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar4 + -1;
    if (sVar4 == 1) {
      DAT_800bf80f = DAT_800bf80f | 0x80;
      *(undefined2 *)(param_1 + 0x40) = 0x14;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      DAT_800e806c = 0xf;
    }
    break;
  case 3:
    if ((_DAT_1f80017c & 7) == 0) {
      FUN_80074590(0x38,(int)*(char *)(param_1 + 0x42),0);
      sVar4 = *(short *)(param_1 + 0x42) + 2;
      *(short *)(param_1 + 0x42) = sVar4;
      if (0x1a < sVar4) {
        *(undefined2 *)(param_1 + 0x42) = 0x1a;
      }
    }
    if (*(short *)(param_1 + 0x40) == 0) {
      if (DAT_1f80027a == '\x02') goto switchD_800529e4_default;
      DAT_1f800236 = 6;
      DAT_800bf80f = DAT_800bf80f & 0x7f;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    else {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    }
    break;
  case 4:
    if ((_DAT_1f80017c & 7) == 0) {
      FUN_80074590(0x38,(int)*(char *)(param_1 + 0x42),0);
      sVar4 = *(short *)(param_1 + 0x42) + 2;
      *(short *)(param_1 + 0x42) = sVar4;
      if (0x1a < sVar4) {
        *(undefined2 *)(param_1 + 0x42) = 0x1a;
      }
    }
    break;
  default:
    goto switchD_800529e4_default;
  }
  FUN_80052720(param_1);
  FUN_8005262c(param_1);
switchD_800529e4_default:
  DAT_800e7ffa = 1;
  _DAT_800e7eae = *(undefined2 *)(param_1 + 0x2e);
  if (*(char *)(param_1 + 5) != '\0') {
    _DAT_800e7eb2 = *(short *)(param_1 + 0x32) + -100;
  }
  _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
  _DAT_800e7ed6 = *(ushort *)(param_1 + 0x56);
  *(undefined1 *)(param_1 + 1) = 1;
LAB_80053040:
  FUN_8004190c(param_1);
  FUN_800518fc(param_1);
  return;
}

