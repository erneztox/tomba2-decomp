// FUN_80040fa0

undefined4 FUN_80040fa0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_80040e54();
  switch(uVar2) {
  case 0:
    if (*(char *)(param_1 + 0x70) == '\x02') {
      *(undefined1 *)(param_1 + 0x71) = 2;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0x71) = 0;
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
    break;
  case 1:
    uVar2 = 0;
    if (*(char *)(param_1 + 0x70) == '\x02') {
      *(undefined1 *)(param_1 + 0x71) = 6;
      uVar2 = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x71) = 4;
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x70) = 0xff;
    *(undefined1 *)(param_1 + 0x71) = 0xff;
    return 0;
  default:
    return 0xffffffff;
  case 4:
    uVar1 = 2;
    goto LAB_80041064;
  case 5:
    uVar1 = 6;
LAB_80041064:
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0x71) = uVar1;
    break;
  case 6:
    uVar2 = 0;
    *(undefined1 *)(param_1 + 0x71) = 0;
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return uVar2;
}

