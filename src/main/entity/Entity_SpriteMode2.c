/**
 * @brief Entity sprite mode setter variant 2: switch on entity->sprite_param3
 * @note Original: func_80067EF4 at 0x80067EF4
 */
// Entity_SpriteMode2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80067ef4(int param_1)

{
  ushort uVar1;
  
  switch(param_1->sprite_param3) {
  case 0:
    uVar1 = param_1->entity_flags & 0x8000 | 0x10;
    break;
  default:
    goto switchD_80067f24_caseD_1;
  case 0xe:
    uVar1 = 0x22;
    break;
  case 0xf:
    uVar1 = 0x41;
    break;
  case 0x10:
    uVar1 = 0x83;
    break;
  case 0x11:
    uVar1 = 0x10a;
    break;
  case 0x12:
    uVar1 = 0x404;
    break;
  case 0x13:
    uVar1 = 0x805;
    break;
  case 0x14:
    uVar1 = 0x1006;
    break;
  case 0x15:
    uVar1 = param_1->entity_flags & 0x8000 | 0x2007;
    break;
  case 0x16:
    uVar1 = 0x4008;
    break;
  case 0x6c:
    uVar1 = 0x209;
  }
  param_1->entity_flags = uVar1;
switchD_80067f24_caseD_1:
  if ((param_1->game_flags & 4) != 0) {
    param_1->entity_flags = param_1->entity_flags | 0x8000;
  }
  _DAT_800bf89e = param_1->entity_flags;
  FUN_80024e00(0x800ed058);
  return;
}
