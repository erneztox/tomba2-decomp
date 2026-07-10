// FUN_8005d530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005d530(byte *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  switch(param_1[6]) {
  case 0:
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    FUN_80054198(param_1);
    param_1[6] = param_1[6] + 1;
    FUN_80054d14(param_1,2,6);
  case 1:
  case 3:
    uVar5 = (uint)_DAT_1f800194;
    sVar2 = FUN_800776f8(uVar5 & 0xfff,(int)*(short *)(param_1 + 0x56),0x100);
    *(short *)(param_1 + 0x56) = sVar2;
    if ((int)sVar2 == (uVar5 & 0xfff)) {
      param_1[6] = param_1[6] + 1;
    }
    goto LAB_8005d5dc;
  case 2:
    FUN_80055e28(param_1,0);
    uVar5 = FUN_800559f4(param_1);
    if ((uVar5 & 1) == 0) {
      param_1[0x61] = 0;
      param_1[6] = param_1[6] + 1;
      param_1[0x147] = param_1[0x14a] & 1;
LAB_8005d630:
      FUN_80054198(param_1);
      if (param_1[0x147] == 0) {
        _DAT_1f800194 = *(ushort *)(param_1 + 0x140);
      }
      else {
        _DAT_1f800194 = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
      }
    }
    else if ((_DAT_1f80018e & 0x4000) == 0) {
      *param_1 = *param_1 | 4;
      if (_DAT_1f800196 == _DAT_1f800194) {
        param_1[0x147] = 0;
      }
      else {
        param_1[0x147] = 1;
      }
      FUN_80054198(param_1);
      FUN_8004766c(param_1);
      FUN_8004960c(param_1,(_DAT_1f80018e & 0x100) != 0);
      if (uVar5 == 1) {
        param_1[0x61] = 0x11;
        DAT_800bf840 = 0x80;
        uVar5 = (uint)(param_1[0x16c] >> 4);
      }
      else {
        param_1[0x61] = 0x21;
        DAT_800bf840 = 0x81;
        uVar5 = (*(ushort *)(param_1 + 0x16c) & 0xf00) >> 8;
      }
      if ((uVar5 & 8) == 0) {
        uVar3 = 0xc800;
        if ((uVar5 & 4) == 0) {
          uVar3 = 0xe000;
        }
        *(undefined2 *)(param_1 + 0x40) = uVar3;
        param_1[6] = 6;
      }
      else {
        param_1[6] = 9;
        param_1[0x40] = 10;
        param_1[0x41] = 0;
      }
      *(ushort *)(param_1 + 0x140) = _DAT_1f800196;
    }
    else if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
      if ((_DAT_1f80018e & 0x8000) == 0) {
        if ((_DAT_1f80018e & 0x300) == 0) {
          iVar4 = FUN_80024794(param_1);
          if (iVar4 != 0) {
            DAT_800bf809 = 1;
            param_1[0x61] = 0x80;
            param_1[6] = 5;
            *param_1 = *param_1 | 6;
          }
        }
        else {
          iVar4 = FUN_80053968(param_1,0);
          if (iVar4 != 0) {
            *param_1 = 7;
            DAT_800bf80e = 1;
            param_1[4] = 4;
            param_1[5] = 0x25;
            param_1[6] = 0;
            _DAT_1f800166 = 0;
            _DAT_1f800190 = 0;
          }
        }
      }
      else {
        DAT_1f800137 = 2;
        *param_1 = 7;
        param_1[4] = 4;
        param_1[5] = 0x29;
        param_1[6] = 0;
        DAT_800bf840 = 0x8a;
      }
    }
    goto LAB_8005d5dc;
  case 4:
    param_1[0x61] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = *param_1 & 3;
    FUN_80076d68(param_1);
    break;
  case 5:
    if ((_DAT_1f80018e >> 8 != 0x44) && (_DAT_1f80018e >> 8 != 0x48)) {
      DAT_800bf809 = 0;
      *param_1 = 3;
      param_1[0x172] = 0x14;
      param_1[0x173] = 0;
      param_1[6] = 3;
      bVar1 = FUN_80055e28(param_1,0);
      param_1[0x147] = bVar1 & 1;
      goto LAB_8005d630;
    }
LAB_8005d5dc:
    FUN_80076d68(param_1);
    break;
  case 6:
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x40);
    if (param_1[0x147] == 0) {
      uVar3 = 0xe00;
    }
    else {
      uVar3 = 0xf200;
    }
    *(undefined2 *)(param_1 + 0x44) = uVar3;
    FUN_80054d14(param_1,99,0);
    param_1[0x29] = 0;
    param_1[6] = param_1[6] + 1;
  case 7:
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,1);
    FUN_80054650(param_1,1);
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,0x11);
    if (param_1[0x145] == 2) {
      FUN_80054d14(param_1,100,3);
    }
    if (-0x1400 < *(short *)(param_1 + 0x4a)) {
      uVar6 = FUN_80024548(param_1,0);
      *(undefined4 *)(param_1 + 0x158) = uVar6;
    }
    uVar6 = _DAT_1f800084;
    if (*(int *)(param_1 + 0x158) != 0) {
      param_1[0x145] = 0;
      param_1[0x144] = 0;
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      param_1[0x14a] = param_1[0x147] | 2;
      FUN_80074590(5,0,0);
      if (((DAT_800bf870 == '\x01') && ((_DAT_800bfe56 & 2) != 0)) && (param_1[0x164] == 1)) {
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[0x44] = 0;
        param_1[0x45] = 0;
        param_1[5] = 4;
        FUN_80074590(5,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x158) == 1) {
        param_1[6] = 0xb;
        FUN_80054d14(param_1,0x40,2);
        param_1[0x40] = 3;
        param_1[0x41] = 0;
        return;
      }
      param_1[6] = 0xf;
      param_1[7] = 0;
      param_1[0x58] = 0;
      param_1[0x59] = 0;
      FUN_80054d14(param_1,0x29,4);
      return;
    }
    if (param_1[0x29] == 0) {
      return;
    }
    FUN_80054d14(param_1,0x65,2);
    bVar1 = param_1[6];
    param_1[0x44] = 0;
    param_1[0x45] = 0;
LAB_8005dd48:
    param_1[6] = bVar1 + 1;
    return;
  case 8:
    iVar4 = FUN_80076d68(param_1);
    if (iVar4 == 1) {
      param_1[0x40] = 3;
      param_1[0x41] = 0;
      bVar1 = param_1[6] + 1;
      goto LAB_8005de0c;
    }
    break;
  case 9:
    uVar3 = 0xf000;
    if ((param_1[0x147] & 1) == 0) {
      uVar3 = 0x1000;
    }
    *(undefined2 *)(param_1 + 0x44) = uVar3;
    param_1[6] = param_1[6] + 1;
    FUN_80054d14(param_1,4,3);
  case 10:
    FUN_80076d68(param_1);
    FUN_80056b48(param_1,0);
    FUN_80055d5c(param_1);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
    FUN_8005444c(param_1);
    uVar5 = (uint)_DAT_1f80017c;
    if ((uVar5 + (uVar5 / 7 + (uVar5 - uVar5 / 7 >> 1) >> 2) * -7 & 0xffff) == 0) {
      FUN_80074590(0,5,0);
    }
    if (*(short *)(param_1 + 0x40) == 0) {
      if (((int)*(short *)(param_1 + 0x16c) & 0xc000U) == 0xc000) {
        param_1[0x61] = 0x21;
        param_1[5] = 0xb;
        param_1[6] = 1;
        param_1[7] = 0;
        return;
      }
    }
    else {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    }
    if ((*(ushort *)(param_1 + 0x6a) & 0x10) == 0) {
      param_1[6] = 4;
      FUN_80054d14(param_1,2,4);
    }
    goto LAB_8005de28;
  case 0xb:
    FUN_80076d68(param_1);
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 != 1) {
      return;
    }
    FUN_80054198(param_1);
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    FUN_80054d14(param_1,0x41,0);
    bVar1 = param_1[6];
    goto LAB_8005dd48;
  case 0xc:
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x1000;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x1000;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x1000;
    iVar4 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + (short)((iVar4 << 1) >> 0xc);
    iVar4 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) - (short)((iVar4 << 1) >> 0xc);
    FUN_80076d68(param_1);
    uVar6 = 0x25;
    if (-1 < *(short *)(param_1 + 0x17e)) {
      uVar6 = 0x4a;
    }
    iVar4 = FUN_80046a44(param_1,uVar6,(int)-*(short *)(param_1 + 0x68),uVar6);
    if (iVar4 == 0) {
      return;
    }
    FUN_80048654(param_1);
    uVar3 = _DAT_1f8001a0;
    *(short *)(param_1 + 0x58) = _DAT_1f8001a2 + 0x400;
    *(undefined2 *)(param_1 + 0x140) = uVar3;
    if (1 < iVar4 - 2U) {
      if ((_DAT_1f80017c & 3) != 0) {
        return;
      }
      FUN_80074590(5,3,0xffffffc4);
      return;
    }
    FUN_80074590(4,0,0);
    bVar1 = param_1[6];
    param_1[7] = 0;
    goto LAB_8005dd48;
  case 0xd:
    FUN_8006483c(param_1,1);
    if (param_1[0x29] == 0) {
      return;
    }
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x144] = 0;
    param_1[0x158] = 0;
    param_1[0x159] = 0;
    param_1[0x15a] = 0;
    param_1[0x15b] = 0;
    param_1[0x164] = 0;
    param_1[7] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x145] = 0;
    param_1[6] = param_1[6] + 1;
    FUN_8005314c(param_1);
    FUN_80054d14(param_1,0x16,6);
    return;
  case 0xe:
    bVar1 = 9;
    if ((_DAT_800ecf54 & 0xa0) == 0) {
      iVar4 = FUN_80076d68(param_1);
      bVar1 = 9;
      if (iVar4 == 2) break;
    }
LAB_8005de0c:
    param_1[6] = bVar1;
    break;
  case 0xf:
    func_0x80113fa4(param_1);
  default:
    goto switchD_8005d56c_default;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
  FUN_8005444c(param_1);
LAB_8005de28:
  FUN_80056c00(param_1,1);
switchD_8005d56c_default:
  return;
}

