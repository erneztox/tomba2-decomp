/**
 * @brief Entity sprite lifecycle: entity->state=1 state, processes draw/spawn
 * @note Original: func_8007DC38 at 0x8007DC38
 */
// Entity_SpriteLifecycle



#include "tomba.h"
void Entity_SpriteLifecycle(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if ((param_1->sub_type == '\0') && ((g_EventInput & 0xfb) != 0)) {
      param_1->state = STATE_FINISH;
    }
    GPU_SpriteBuild(param_1);
    GPU_SpriteProcess(param_1);
    if (param_1->sub_type != '\x01') {
      UI_DrawPanel(param_1 + 0x54,*(u8 *)(param_1 + 0x18),1,2);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar2 = *(int *)(param_1 + 0x50) +
              (uint)*(u16 *)(*(s16 *)(param_1 + 0x5e) * 4 + *(int *)(param_1 + 0x4c));
      param_1->parent = iVar2;
      param_1->script_ptr = iVar2;
      Entity_ScriptRun_2(param_1,0);
      bVar1 = param_1->sub_type;
      param_1->anim_id = 1;
      param_1->state = param_1->state + '\x01';
      if (bVar1 == 2) {
        *(u8 *)(param_1 + 0x18) = 5;
      }
      else if (bVar1 < 3) {
        if (bVar1 == 0) {
          *(u8 *)(param_1 + 0x18) = 4;
          g_EventInput = g_EventInput | 4;
        }
      }
      else if (bVar1 == 3) {
        *(u8 *)(param_1 + 0x18) = 1;
      }
    }
  }
  else if (bVar1 == 2) {
    param_1->state = STATE_DEAD;
  }
  else if (bVar1 == 3) {
    if (param_1->sub_type == '\0') {
      g_EventInput = g_EventInput & 0xfb;
    }
    Entity_Dealloc(param_1);
  }
  return;
}
