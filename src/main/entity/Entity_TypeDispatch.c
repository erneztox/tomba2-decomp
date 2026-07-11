/**
 * @brief Entity type dispatcher: switch on entity->kind/[0xC] type
 * @note Original: func_8005B134 at 0x8005B134
 */
// Entity_TypeDispatch



undefined4 FUN_8005b134(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(param_2 + 0xc) == '\x02') {
    switch(param_2->kind) {
    case 0:
      return 3;
    default:
      uVar1 = 0xffffffff;
      break;
    case 3:
      return 0;
    case 7:
      return 1;
    case 0xd:
      return 9;
    case 0x10:
      return 0x82;
    case 0x11:
      return 5;
    case 0x19:
      return 0x84;
    case 0x1b:
      uVar1 = 0x8b;
      if ((param_2->sub_type & 3) == 0) {
        return 0x87;
      }
      break;
    case 0x1c:
    case 0x27:
      return 8;
    case 0x29:
      return 6;
    case 0x2d:
      return 10;
    case 0x45:
      return 0xc;
    case 0x5c:
      return 0x8f;
    case 0x5e:
      return 0xe;
    case 0x5f:
      return 0x8d;
    }
  }
  return uVar1;
}
