// FUN_8006ea7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006ea7c(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x77) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  uVar1 = _DAT_1f8000e0;
  *(undefined2 *)(param_1 + 0x52) = 0x400;
  *(undefined2 *)(param_1 + 0x22) = 0xf0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  switch(DAT_800bf870) {
  case 0:
    if (DAT_800bf89c == '\x02') {
      *(undefined1 *)(param_1 + 100) = 7;
      *(undefined2 *)(param_1 + 0x3a) = 0xaba;
      *(undefined2 *)(param_1 + 0x3e) = 0xfce0;
      *(undefined2 *)(param_1 + 0x42) = 0xee0;
      _DAT_1f8000d2 = 0xd3b;
      _DAT_1f8000d6 = 0xf57d;
      _DAT_1f8000da = 0xdb2;
      break;
    }
    if (DAT_800bf816 != '\0') break;
    *(undefined1 *)(param_1 + 100) = 0;
    goto LAB_8006eb94;
  default:
    *(undefined1 *)(param_1 + 100) = 0;
LAB_8006eb94:
    FUN_8006e0f0(param_1);
    FUN_8006e918(param_1);
    break;
  case 2:
  case 7:
  case 0x14:
    *(undefined1 *)(param_1 + 100) = 0;
    break;
  case 3:
    *(undefined1 *)(param_1 + 100) = 0xe;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    *(undefined1 *)(param_1 + 100) = 0x80;
  }
  if (DAT_1f800236 - 5 < 2) {
    FUN_8006cba8(&DAT_800e7eac);
    sVar2 = *(short *)(param_1 + 0x3e);
    *(short *)(param_1 + 0x3e) = sVar2 + 1000;
    if (DAT_800e7e82 == '\0') {
      sVar2 = sVar2 + 0x35c;
      *(short *)(param_1 + 0x3e) = sVar2;
      *(short *)(param_1 + 0xe) = sVar2;
      *(undefined1 *)(param_1 + 100) = 0xf;
      *(undefined2 *)(param_1 + 0x6c) = 0x578;
      *(undefined2 *)(param_1 + 0x6e) = 0x40;
      *(short *)(param_1 + 0x70) = _DAT_800e7fc0 + 0x400;
      FUN_8006e294(param_1,param_1 + 0x38);
      FUN_8006e3b0(param_1,&DAT_800e7eac);
    }
  }
  return;
}

