// FUN_80073cd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80073cd8(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    iVar5 = FUN_80051b70(param_1,0xc,(int)*(short *)(&DAT_800a4c94 + (uint)DAT_800bf870 * 2));
    if (iVar5 != 0) {
      return;
    }
    param_1[0x2b] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[4] = param_1[4] + '\x01';
    if (((DAT_800bf870 == 2) || (DAT_800bf870 == 7)) || (DAT_800bf870 == 0x14)) {
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x80) = 0xa0;
      *(undefined2 *)(param_1 + 0x82) = 0x140;
      uVar3 = 0xed;
    }
    else {
      if (DAT_800bf873 == '\0') {
        *param_1 = 1;
      }
      *(undefined2 *)(param_1 + 0x80) = 300;
      *(undefined2 *)(param_1 + 0x82) = 600;
      uVar3 = 0xcb;
    }
    *(undefined2 *)(param_1 + 0x84) = uVar3;
    *(undefined2 *)(param_1 + 0x86) = uVar3;
    switch(param_1[3]) {
    case 2:
      param_1[8] = 0;
      *(undefined2 *)(param_1 + 0x56) = 0xc00;
      return;
    default:
      return;
    case 5:
    case 6:
    case 7:
    case 0x1d:
    case 0x1e:
      *(undefined2 *)(param_1 + 0x56) = 0;
      return;
    case 8:
      param_1[0xb] = 0xf;
      return;
    case 0xc:
    case 0xd:
    case 0xe:
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 0x3e;
      param_1[8] = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x7c;
      return;
    case 0x11:
      goto switchD_80073e20_caseD_11;
    case 0x14:
      param_1[8] = 0;
      return;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      *param_1 = 1;
      return;
    case 0x20:
      *(undefined2 *)(param_1 + 0x56) = 0x4d0;
      return;
    }
  }
  FUN_8007778c(param_1);
  cVar2 = param_1[5];
  switch(cVar2) {
  case '\x01':
  case '\x05':
    if ((param_1[3] != '\x02') ||
       ((sVar4 = 0x16, DAT_800bf907 != -1 && (sVar4 = 0x15, DAT_800bf8c3 == '\0')))) {
      sVar4 = *(short *)(&DAT_800a4ca8 + (uint)(byte)param_1[3] * 2);
    }
    iVar5 = FUN_8007e110((int)sVar4,0);
    *(int *)(param_1 + 0x14) = iVar5;
    if (iVar5 != 0) {
      cVar2 = param_1[5] + '\x01';
      goto LAB_8007409c;
    }
    break;
  case '\x02':
    if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
      cVar2 = param_1[5] + '\x01';
      goto LAB_8007409c;
    }
    break;
  case '\x03':
    if (*(byte *)(*(int *)(param_1 + 0x14) + 4) < 2) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *param_1 = 2;
    cVar2 = param_1[5] + '\x01';
LAB_8007409c:
    param_1[5] = cVar2;
    break;
  case '\x04':
    *param_1 = 1;
    param_1[5] = 0;
  case '\0':
    if (param_1[0x2b] == '\x03') {
      bVar1 = param_1[3];
      param_1[5] = param_1[5] + '\x01';
      if (bVar1 == 0xd) {
        iVar5 = FUN_80040b48(0x50);
        if (iVar5 != 0) {
          param_1[5] = 5;
        }
      }
      else if (bVar1 < 0xe) {
        if ((bVar1 == 0xc) && (iVar5 = FUN_80040b48(0x4e), iVar5 != 0)) {
          param_1[5] = 5;
        }
      }
      else if ((bVar1 == 0xe) && (iVar5 = FUN_80040b48(0x4f), iVar5 != 0)) {
        param_1[5] = 5;
      }
    }
    break;
  case '\x06':
    iVar5 = FUN_80042728();
    if (iVar5 != 0) {
      param_1[5] = 2;
    }
    break;
  default:
    goto switchD_80073ef8_default;
  }
  cVar2 = param_1[5];
switchD_80073ef8_default:
  if ((cVar2 != '\x04') &&
     ((((DAT_800bf870 == 2 || (DAT_800bf870 == 7)) || (DAT_800bf870 == 0x14)) &&
      ((*(int *)(param_1 + 0x14) != 0 && (DAT_800e7e85 != '\x1f')))))) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *param_1 = 1;
    param_1[5] = 0;
  }
  param_1[0x2b] = 0;
  FUN_800517f8(param_1);
  return;
switchD_80073e20_caseD_11:
  if ((_DAT_800bfe56 & 0x10) == 0) {
    return;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 100;
  return;
}

