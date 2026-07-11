/**
 * @brief Entity config initializer: switch on entity[2] type
 * @note Original: func_8006ACAC at 0x8006ACAC
 */
// Entity_InitConfig



void FUN_8006acac(int param_1)

{
  undefined2 uVar1;
  
  switch(*(undefined1 *)(param_1 + 2)) {
  case 1:
    FUN_8006abf4(param_1);
    *(undefined2 *)(param_1 + 0x82) = 100;
    *(undefined2 *)(param_1 + 0x86) = 100;
    *(undefined2 *)(param_1 + 0x80) = 0x32;
    *(undefined2 *)(param_1 + 0x84) = 0x32;
    *(undefined1 *)(param_1 + 8) = 0xf6;
    goto switchD_8006acf0_caseD_a;
  case 2:
  case 3:
    FUN_8006ac7c(param_1,*(undefined1 *)(param_1 + 2));
    *(undefined1 *)(param_1 + 0xb) = 1;
    break;
  case 4:
  case 5:
  case 6:
    FUN_8006ac7c(param_1,*(undefined1 *)(param_1 + 2));
    *(undefined1 *)(param_1 + 0xb) = 0;
    break;
  case 7:
  case 8:
  case 9:
    FUN_8006ac7c(param_1,*(undefined1 *)(param_1 + 2));
    *(undefined2 *)(param_1 + 0x80) = 100;
    *(undefined2 *)(param_1 + 0x82) = 200;
    *(undefined2 *)(param_1 + 0x84) = 0x5a;
    uVar1 = 0x82;
    *(undefined1 *)(param_1 + 0xb) = 0;
    goto LAB_8006ada8;
  default:
    goto switchD_8006acf0_caseD_a;
  case 0xb:
    FUN_8006ac38(param_1);
  }
  uVar1 = 100;
  *(undefined2 *)(param_1 + 0x80) = 0x32;
  *(undefined2 *)(param_1 + 0x82) = 100;
  *(undefined2 *)(param_1 + 0x84) = 0x32;
LAB_8006ada8:
  *(undefined2 *)(param_1 + 0x86) = uVar1;
switchD_8006acf0_caseD_a:
  *(undefined2 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_1 + 2) == '\x06') {
    uVar1 = 0x1800;
  }
  else {
    uVar1 = 0x1000;
  }
  *(undefined2 *)(param_1 + 0xb8) = uVar1;
  *(undefined2 *)(param_1 + 0xba) = uVar1;
  *(undefined2 *)(param_1 + 0xbc) = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  if (DAT_800e7e82 == '\0') {
    FUN_80069858(param_1,0,1);
  }
  return;
}
