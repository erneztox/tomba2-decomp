/**
 * @brief Iterates 0x28 child entity slots, calls each child's update function
 * @note Original: func_80026C88 at 0x80026C88
 */
// Entity_UpdateChildren



#include "tomba.h"
void FUN_80026c88(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = &DAT_800ec188;
  do {
    if (*pcVar1 != '\0') {
      (*(code *)(&PTR_FUN_8009d52c)[(byte)pcVar1->flags])(pcVar1);
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x40;
  } while (iVar2 < 0x28);
  return;
}
