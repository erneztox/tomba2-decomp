/**
 * @brief Entity action main: action state dispatcher (251L)
 * @note Original: func_80058F5C at 0x80058F5C
 */
// Entity_ActionMain



void FUN_80058f5c(int param_1)

{
  char cVar1;
  
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
    FUN_8005a910(param_1);
    goto LAB_800594a0;
  case 1:
    FUN_8005acc8(param_1);
    break;
  case 2:
    FUN_8005aee4(param_1);
    goto LAB_8005919c;
  case 3:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_8005b63c(param_1);
    cVar1 = *(char *)(param_1 + 0x29);
    goto code_r0x800590f8;
  case 4:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_800645e0(param_1);
    goto LAB_80059194;
  case 5:
  case 0x32:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_8005c8a0(param_1);
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_8005d16c(param_1);
    break;
  case 7:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_80064ba0(param_1);
    goto LAB_80059220;
  case 8:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_80064e48(param_1);
    goto LAB_80059220;
  case 9:
    FUN_8005cdf8(param_1);
    break;
  case 10:
    FUN_8005d530(param_1);
    break;
  case 0xb:
    FUN_8005de54(param_1);
    break;
  case 0xc:
    FUN_8005e580(param_1);
    break;
  case 0xd:
    FUN_8005e8fc(param_1);
    break;
  case 0xe:
    FUN_8005ec70(param_1);
    break;
  case 0xf:
    FUN_8005ef48(param_1);
    break;
  case 0x10:
    FUN_8005c26c(param_1);
    if (*(char *)(param_1 + 0x78) == '\a') {
      return;
    }
    *(undefined1 *)(param_1 + 0x17b) = 1;
    cVar1 = DAT_1f800137;
code_r0x800590f8:
    if (cVar1 != '\0') {
      FUN_80053d90(param_1);
      *(undefined1 *)(param_1 + 0x144) = 0;
      FUN_80054198(param_1);
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
    }
    break;
  case 0x11:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_8005f2f0(param_1);
    break;
  case 0x12:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_8005fb54(param_1);
    goto LAB_800594a0;
  case 0x13:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_8005f1b0(param_1);
    break;
  case 0x14:
    FUN_8006506c(param_1);
    goto LAB_80059194;
  case 0x15:
    FUN_80065374(param_1);
    goto LAB_80059194;
  case 0x16:
    FUN_800653f4(param_1);
LAB_80059194:
    FUN_80058f24(param_1);
LAB_8005919c:
    FUN_800531dc(param_1);
    break;
  case 0x17:
    FUN_80060064(param_1);
    break;
  case 0x18:
    if (DAT_800bf870 == '\x04') {
      func_0x801139f4(param_1);
    }
    else if (DAT_800bf870 == '\x06') {
      func_0x801144f4(param_1);
    }
    else if (DAT_800bf870 == '\x0e') {
      func_0x8010af4c(param_1);
    }
    break;
  case 0x19:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_80060c60(param_1);
LAB_80059220:
    FUN_80058f24(param_1);
    break;
  case 0x1a:
    if (DAT_800bf870 == '\x05') {
      func_0x80110380(param_1);
    }
    else {
      func_0x8010b73c(param_1);
    }
    break;
  case 0x1b:
    FUN_80061a7c(param_1);
    break;
  case 0x1c:
    FUN_80061c64(param_1);
    break;
  case 0x1d:
    if (DAT_800bf870 == '\0') {
      func_0x8010c87c(param_1);
      return;
    }
    if (DAT_800bf870 == '\x06') {
      func_0x801145ec(param_1);
      return;
    }
    if (DAT_800bf870 != '\b') {
      if (DAT_800bf870 != '\x0e') {
        return;
      }
      func_0x8010b3e8(param_1);
      return;
    }
    func_0x801135c8(param_1);
    if (DAT_1f800137 != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 0x2d;
    goto LAB_800594b4;
  case 0x1e:
    FUN_800654d4(param_1);
    goto LAB_800594a0;
  case 0x1f:
    FUN_800655dc(param_1);
    break;
  case 0x20:
    FUN_800656fc(param_1);
    break;
  case 0x21:
    FUN_8006585c(param_1);
    goto LAB_800594a0;
  case 0x22:
    FUN_800658e4(param_1);
    goto LAB_800594a0;
  case 0x23:
    FUN_800655a0(param_1);
    break;
  case 0x24:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_80065a54(param_1);
    break;
  case 0x25:
    FUN_800660ac(param_1);
    goto LAB_800594a0;
  case 0x26:
    FUN_80065990(param_1);
    goto LAB_800594a0;
  case 0x28:
    FUN_800661e0(param_1);
LAB_800594a0:
    if (DAT_1f800137 == '\0') {
      *(undefined1 *)(param_1 + 5) = 0x20;
LAB_800594b4:
      *(undefined1 *)(param_1 + 6) = 0;
    }
    break;
  case 0x29:
    func_0x8010f304(param_1);
    break;
  case 0x2a:
    func_0x801135e8(param_1);
    break;
  case 0x2b:
    func_0x80113608(param_1);
    break;
  case 0x2c:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    func_0x801125e4(param_1);
    break;
  case 0x2d:
    func_0x80112418(param_1);
    break;
  case 0x33:
    if (DAT_800bf870 == '\x05') {
      func_0x8010f948(param_1);
    }
    else if (DAT_800bf870 == '\x12') {
      func_0x80109f7c(param_1);
    }
    break;
  case 0x34:
    func_0x8011411c(param_1);
    break;
  case 0x35:
    func_0x801144fc(param_1);
    break;
  case 0x36:
    if (DAT_800bf870 == '\x06') {
      func_0x80112e24(param_1);
    }
    else {
      func_0x801149b8(param_1);
    }
    break;
  case 0x37:
    func_0x801150c4(param_1);
    break;
  case 0x38:
    FUN_800620d0(param_1);
    break;
  case 0x39:
    FUN_8006228c(param_1);
    break;
  case 0x3a:
    *(undefined1 *)(param_1 + 0x17b) = 1;
    FUN_800624b4(param_1);
    break;
  case 0x3b:
    func_0x801097c8(param_1);
  }
  return;
}
