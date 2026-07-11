/**
 * @brief Iterates 0x28 child entity slots, calls each child's update function
 * @note Original: func_80026C88 at 0x80026C88
 */
// Entity_UpdateChildren



#include "tomba.h"
void Entity_UpdateChildren(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = &g_SpriteQueue;
  do {
    if (*pcVar1 != '\0') {
      (*(code *)(&PTR_FUN_8009d52c)[(u8)pcVar1->flags])(pcVar1);
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x40;
  } while (iVar2 < 0x28);
  return;
}
