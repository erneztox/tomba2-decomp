
void FUN_8004e414(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 0xb) = 0x10;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      return;
    }
    if (bVar1 == 2) {
      *(undefined1 *)(param_1 + 4) = 3;
      DAT_1f800137 = 0;
      FUN_80074f24(DAT_800bf870);
      return;
    }
    if (bVar1 != 3) {
      return;
    }
    FUN_8007a624(param_1);
    return;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if ((DAT_800bf822 & 1) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 2;
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800bf80a != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
  if (bVar1 != 2) {
    return;
  }
  switch(*(undefined1 *)(param_1 + 6)) {
  case 0:
    switch((int)((*(ushort *)(param_1 + 0x60) - 0x6f) * 0x10000) >> 0x10) {
    case 0:
      *(undefined2 *)(param_1 + 100) = 1;
      uVar2 = 0x62;
      *(undefined2 *)(param_1 + 0x62) = 0;
      break;
    case 1:
      *(undefined2 *)(param_1 + 100) = 0xffff;
      uVar2 = 0x62;
      *(undefined2 *)(param_1 + 0x62) = 0;
      break;
    case 2:
      *(undefined2 *)(param_1 + 0x62) = 2;
      *(undefined2 *)(param_1 + 100) = 3;
      uVar2 = 99;
      break;
    case 3:
      *(undefined2 *)(param_1 + 0x62) = 2;
      *(undefined2 *)(param_1 + 100) = 0xffff;
      uVar2 = 99;
      break;
    case 4:
      *(undefined2 *)(param_1 + 0x62) = 4;
      uVar2 = 5;
      goto LAB_8004e5d4;
    case 5:
      *(undefined2 *)(param_1 + 0x62) = 4;
      uVar2 = 0xffff;
LAB_8004e5d4:
      *(undefined2 *)(param_1 + 100) = uVar2;
      uVar2 = 100;
      break;
    default:
      goto switchD_8004e558_default;
    }
    *(undefined2 *)(param_1 + 0x66) = uVar2;
switchD_8004e558_default:
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
switchD_8004e51c_caseD_1:
    sVar3 = *(short *)(param_1 + 0x62);
LAB_8004e778:
    iVar4 = FUN_8007def8(0,(int)sVar3,0);
    *(int *)(param_1 + 0x10) = iVar4;
    if (iVar4 == 0) {
      return;
    }
    break;
  case 1:
    goto switchD_8004e51c_caseD_1;
  case 2:
    if (*(char *)(*(int *)(param_1 + 0x10) + 4) != '\x02') {
      return;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
    break;
  case 3:
    iVar4 = FUN_8004e29c(param_1);
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        if (*(short *)(param_1 + 100) != -1) {
          *(undefined1 *)(param_1 + 6) = 5;
          return;
        }
        *(undefined1 *)(param_1 + 4) = 2;
        uVar5 = 99;
      }
      else {
        if (*(short *)(param_1 + 100) != -1) {
          *(undefined1 *)(param_1 + 6) = 8;
          return;
        }
        *(undefined1 *)(param_1 + 4) = 2;
        uVar5 = 0x54;
      }
      goto LAB_8004e728;
    }
    FUN_8004ed94(0x58,0x41);
    break;
  case 4:
    iVar4 = FUN_80042728();
    if (iVar4 == 0) {
      return;
    }
    if (*(short *)(param_1 + 100) == -1) {
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    break;
  case 5:
  case 8:
    sVar3 = *(short *)(param_1 + 100);
    goto LAB_8004e778;
  case 6:
    if (*(char *)(*(int *)(param_1 + 0x10) + 4) != '\x02') {
      return;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
    if (*(byte *)(*(short *)(param_1 + 0x66) + -0x7ff4074c) < 3) {
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      *(undefined1 *)(*(short *)(param_1 + 0x66) + -0x7ff4074c) = 3;
      return;
    }
    *(undefined1 *)(param_1 + 4) = 2;
    uVar5 = 0x66;
LAB_8004e728:
    FUN_8004ed94(uVar5,0x41);
    return;
  case 7:
    sVar3 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar3;
    if (sVar3 != -1) {
      return;
    }
    FUN_8004ed94(0x65,0x41);
    *(undefined1 *)(param_1 + 4) = 3;
    return;
  case 9:
    if (*(char *)(*(int *)(param_1 + 0x10) + 4) != '\x02') {
      return;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
    *(undefined1 *)(param_1 + 4) = 2;
    FUN_8004ed94(0x54,0x41);
    return;
  default:
    goto switchD_8004e51c_default;
  }
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
switchD_8004e51c_default:
  return;
}

