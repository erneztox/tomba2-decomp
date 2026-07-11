/**
 * @brief Entity sprite config: switch on DAT_800e7eef, loads animation
 * @note Original: func_80024E00 at 0x80024E00
 */
// Entity_SpriteConfig



#include "tomba.h"
void FUN_80024e00(int param_1)

{
  u8 bVar1;
  
  switch(DAT_800e7eef) {
  case 0x12:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x28);
    bVar1 = param_1->sprite_flags | 0x80;
    break;
  case 0x13:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x27);
    bVar1 = param_1->sprite_flags | 0x80;
    break;
  case 0x14:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x25);
    bVar1 = param_1->sprite_flags | 0x80;
    break;
  case 0x15:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x179);
    bVar1 = param_1->sprite_flags | 0x80;
    break;
  case 0x16:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x26);
    bVar1 = param_1->sprite_flags | 0x80;
    break;
  default:
    FUN_80077b38(param_1,&PTR_DAT_80017334,0x24);
    bVar1 = param_1->sprite_flags & 0x7f;
  }
  param_1->sprite_flags = bVar1;
  return;
}
