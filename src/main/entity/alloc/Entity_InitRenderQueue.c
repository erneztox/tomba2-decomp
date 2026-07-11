/**
 * @brief Initializes render queue: clears 0xA00 bytes at 0x800EC188, sets 0x28 entries
 * @note Original: func_8007AD40 at 0x8007AD40
 */
// Entity_InitRenderQueue



#include "tomba.h"
void Entity_InitRenderQueue(void)

{
  int iVar1;
  u8 *puVar2;
  
  puVar2 = &g_SpriteQueue;
  Mem_Set(&g_SpriteQueue,0,0xa00);
  iVar1 = 0;
  do {
    puVar2->sub_action = (u8)iVar1 & 7;
    *(s16 *)(puVar2 + 0xc) = 0x1000;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x40;
  } while (iVar1 < 0x28);
  return;
}
