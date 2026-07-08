
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80058648(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_800519e0(param_1,0x11,_DAT_800ed014,&DAT_800a3fa8);
  if (iVar2 != 0) {
    return;
  }
  param_1[0xc] = 0;
  uVar1 = _DAT_800ecf68;
  _DAT_1f800212 = 0xffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x178] = 0;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x14e) = 0;
  param_1[4] = param_1[4] + '\x01';
  _DAT_1f800166 = 0;
  _DAT_1f800190 = 0;
  DAT_1f800252 = 0;
  param_1[0xb] = 0xf;
  param_1[0x46] = 0xff;
  param_1[0x47] = 0xff;
  param_1[0x161] = 1;
  param_1[0x162] = 7;
  param_1[0x163] = 4;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  _DAT_1f8000dc = *(undefined4 *)(param_1 + 0x2c);
  param_1[0x180] = 0;
  param_1[0x175] = 0;
  param_1[0x148] = 0;
  param_1[0x29] = 0;
  param_1[0x145] = 0;
  param_1[0x16b] = 0;
  _DAT_1f8000e0 = *(undefined4 *)(param_1 + 0x30);
  _DAT_1f8000e4 = *(undefined4 *)(param_1 + 0x34);
  FUN_800682c4(param_1,param_2);
  FUN_80057dc0(param_1,(uint)(int)*(short *)(param_1 + 0x17e) >> 0xf & 1);
  _DAT_1f80018e = 0;
  FUN_80057fd4(param_1);
  if (param_2 != 0) goto LAB_8005889c;
  if (DAT_800bf870 == 3) {
    param_1[2] = 0;
  }
  else {
    if (DAT_800bf870 < 4) {
      if (DAT_800bf870 != 2) goto LAB_800587d4;
LAB_800587c4:
      param_1[2] = 1;
    }
    else {
      if ((DAT_800bf870 == 7) || (DAT_800bf870 == 0x14)) goto LAB_800587c4;
LAB_800587d4:
      param_1[2] = 0;
    }
    (**(code **)(&DAT_800a45b8 + (uint)DAT_800bf870 * 4))(param_1);
  }
  if (DAT_1f800236 - 5 < 2) {
    if (param_1[2] == '\0') {
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x140) + 0x400;
    }
    *param_1 = 6;
    DAT_1f800137 = 2;
    param_1[4] = 4;
    param_1[5] = 0x28;
    FUN_80068214(param_1);
  }
  else if (param_1[0x15c] != '\0') {
    param_1[4] = 4;
    param_1[5] = 0x24;
    if (param_1[2] == '\0') {
      param_1[6] = 4;
    }
    else {
      param_1[6] = 0;
    }
    param_1[7] = 0;
    param_1[0x15c] = 0;
  }
LAB_8005889c:
  FUN_800597ac(param_1);
  return;
}

