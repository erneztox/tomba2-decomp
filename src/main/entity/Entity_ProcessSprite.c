/**
 * @brief Entity sprite processor: entity->state=1, calls draw + UI, dealloc at 3
 * @note Original: func_8007DDE0 at 0x8007DDE0
 */
// Entity_ProcessSprite



#include "tomba.h"
void Entity_ProcessSprite(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    GPU_SpriteBuild(param_1);
    GPU_SpriteProcess(param_1);
    UI_DrawPanel(param_1 + 0x54,*(u8 *)(param_1 + 0x18),1,2);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(u8 *)(param_1 + 0x18) = 7;
      iVar2 = *(int *)(param_1 + 0x50) +
              (uint)*(u16 *)(*(s16 *)(param_1 + 0x5e) * 4 + *(int *)(param_1 + 0x4c));
      param_1->parent = iVar2;
      param_1->script_ptr = iVar2;
      Entity_ScriptRun_2(param_1,0);
      param_1->anim_id = 1;
      param_1->state = param_1->state + '\x01';
      g_EventInput = g_EventInput | 8;
    }
  }
  else if (bVar1 == 2) {
    param_1->state = STATE_DEAD;
  }
  else if (bVar1 == 3) {
    g_EventInput = g_EventInput & 0xf7;
    Entity_Dealloc(param_1);
  }
  return;
}
