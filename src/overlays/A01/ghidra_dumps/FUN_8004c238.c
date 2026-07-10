// FUN_8004c238

void FUN_8004c238(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      switch(*(undefined1 *)(param_1 + 0x5e)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        if ((*(byte *)(param_1 + 0x28) & 0x7f) != 0) goto switchD_8004c2b8_caseD_a;
switchD_8004c2b8_caseD_6:
        FUN_8004a828(param_1);
        return;
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        goto switchD_8004c2b8_caseD_6;
      case 10:
      case 0xb:
switchD_8004c2b8_caseD_a:
        FUN_8004a9a4(param_1);
        return;
      default:
        return;
      }
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (*(char *)(param_1 + 5) != '\0') {
      if (*(char *)(param_1 + 5) != '\x01') {
        return;
      }
      if (*(short *)(param_1 + 0x60) != 0) {
        if ((*(ushort *)(param_1 + 100) & 4) == 0) {
          FUN_8004d714((int)*(short *)(param_1 + 0x62),1);
        }
        else {
          FUN_8004d79c((int)*(short *)(param_1 + 0x62),1);
        }
      }
      *(undefined1 *)(param_1 + 4) = 3;
      return;
    }
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
      iVar2 = FUN_80049e54(param_1,1);
      goto LAB_8004c8ac;
    case 1:
      iVar2 = FUN_80049e54(param_1,2);
      goto LAB_8004c8ac;
    default:
      iVar2 = FUN_8004a3d4(param_1);
      goto LAB_8004c8ac;
    case 4:
      FUN_8004b3f4(param_1,100);
      break;
    case 5:
      FUN_8004b3f4(param_1,200);
      break;
    case 6:
      FUN_8004b3f4(param_1,500);
      break;
    case 7:
      FUN_8004b3f4(param_1,1000);
      break;
    case 8:
      FUN_8004b3f4(param_1,5000);
      break;
    case 9:
      FUN_8004b3f4(param_1,10000);
      break;
    case 10:
      FUN_8004b3f4(param_1,20000);
      break;
    case 0xb:
      FUN_8004b3f4(param_1,100000);
      break;
    case 0xf:
      iVar2 = FUN_8004a118(param_1);
      goto LAB_8004c8ac;
    case 0x10:
      iVar2 = FUN_8004a2a0(param_1);
      goto LAB_8004c8ac;
    case 0x11:
      iVar2 = FUN_8004b428(param_1);
LAB_8004c8ac:
      if (iVar2 == 0) {
        return;
      }
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x5e)) {
  case 0:
    if ((*(byte *)(param_1 + 0x28) & 0x80) == 0) {
      iVar2 = FUN_8007778c(param_1);
      if (iVar2 == 0) goto LAB_8004c378;
    }
    else if ((DAT_800bf816 != '\0') && ((ushort)DAT_800bf817 == *(ushort *)(param_1 + 0x6a))) {
      *(undefined1 *)(param_1 + 1) = 1;
LAB_8004c378:
      FUN_80077efc(param_1);
    }
    if (*(char *)(param_1 + 1) == '\0') goto switchD_8004c31c_default;
    FUN_8004b150(param_1,0);
    goto LAB_8004c48c;
  case 1:
    if ((*(byte *)(param_1 + 0x28) & 0x80) == 0) {
      iVar2 = FUN_8007778c(param_1);
      if (iVar2 == 0) goto LAB_8004c3f8;
    }
    else if ((DAT_800bf816 != '\0') && ((ushort)DAT_800bf817 == *(ushort *)(param_1 + 0x6a))) {
      *(undefined1 *)(param_1 + 1) = 1;
LAB_8004c3f8:
      FUN_80077efc(param_1);
    }
    FUN_80049a60(param_1,0);
    goto LAB_8004c48c;
  case 2:
    if ((*(byte *)(param_1 + 0x28) & 0x80) == 0) {
      iVar2 = FUN_8007778c(param_1);
      if (iVar2 == 0) goto LAB_8004c468;
    }
    else if ((DAT_800bf816 != '\0') && ((ushort)DAT_800bf817 == *(ushort *)(param_1 + 0x6a))) {
      *(undefined1 *)(param_1 + 1) = 1;
LAB_8004c468:
      FUN_80077efc(param_1);
    }
    if (*(char *)(param_1 + 1) == '\0') goto switchD_8004c31c_default;
    FUN_8004b208(param_1,0);
LAB_8004c48c:
    FUN_80077b5c(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 3:
    if ((*(byte *)(param_1 + 0x28) & 0x80) == 0) {
      iVar2 = FUN_8007778c(param_1);
      if (iVar2 == 0) goto LAB_8004c4f0;
    }
    else if ((DAT_800bf816 != '\0') && ((ushort)DAT_800bf817 == *(ushort *)(param_1 + 0x6a))) {
      *(undefined1 *)(param_1 + 1) = 1;
LAB_8004c4f0:
      FUN_80077efc(param_1);
    }
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_8004b150(param_1,1);
      goto LAB_8004c604;
    }
  default:
switchD_8004c31c_default:
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 4:
    if ((*(byte *)(param_1 + 0x28) & 0x80) == 0) {
      iVar2 = FUN_8007778c(param_1);
      if (iVar2 == 0) goto LAB_8004c570;
    }
    else if ((DAT_800bf816 != '\0') && ((ushort)DAT_800bf817 == *(ushort *)(param_1 + 0x6a))) {
      *(undefined1 *)(param_1 + 1) = 1;
LAB_8004c570:
      FUN_80077efc(param_1);
    }
    FUN_80049a60(param_1,1);
LAB_8004c604:
    FUN_80051844(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 5:
    if ((*(byte *)(param_1 + 0x28) & 0x80) == 0) {
      iVar2 = FUN_8007778c(param_1);
      if (iVar2 == 0) goto LAB_8004c5e0;
    }
    else if ((DAT_800bf816 != '\0') && ((ushort)DAT_800bf817 == *(ushort *)(param_1 + 0x6a))) {
      *(undefined1 *)(param_1 + 1) = 1;
LAB_8004c5e0:
      FUN_80077efc(param_1);
    }
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_8004b208(param_1,1);
      goto LAB_8004c604;
    }
    goto switchD_8004c31c_default;
  case 6:
    if (DAT_800bf870 == '\0') {
      func_0x80118b10(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      break;
    }
    if (DAT_800bf870 == '\x06') {
      func_0x80116288(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      break;
    }
    goto switchD_8004c31c_default;
  case 7:
    func_0x80118db0(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 8:
    func_0x80119350(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 9:
    if (DAT_800bf870 == '\0') {
      func_0x80118f50(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      break;
    }
    if (DAT_800bf870 == '\x04') {
      func_0x801193d4(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      break;
    }
    if (DAT_800bf870 == '\x05') {
      func_0x80112f88(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      break;
    }
    if (DAT_800bf870 == '\x06') {
      func_0x801160d4(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      break;
    }
    if (DAT_800bf870 == '\b') {
      func_0x80116750(param_1);
      *(undefined1 *)(param_1 + 0x29) = 0;
      break;
    }
    goto switchD_8004c31c_default;
  case 10:
    func_0x80119454(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 0xb:
    func_0x801132b8(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 0xc:
    func_0x801132f0(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 0xd:
    func_0x801133f4(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 0xe:
    func_0x80113490(param_1);
    *(undefined1 *)(param_1 + 0x29) = 0;
    break;
  case 0xf:
    func_0x80119170(param_1);
    goto switchD_8004c31c_default;
  }
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return;
}

