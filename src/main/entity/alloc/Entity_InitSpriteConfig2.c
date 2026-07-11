/**
 * @brief Initializes sprite config variant: same structure, uses table index 0x13C
 * @note Original: func_8006AC38 at 0x8006AC38
 */
// Entity_InitSpriteConfig2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006ac38(int param_1)

{
  param_1->render_flags = 0x10;
  param_1->sprite_flags = 0;
  param_1->draw_y = 0;
  param_1->sprite_data = _DAT_800ecf58;
  FUN_80077b38(param_1,&PTR_DAT_80017334,0x13c);
  return;
}
