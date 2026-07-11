/**
 * @brief Processes entity animation and updates GTE matrix
 * @note Original address: 0x8003F174
 */
// Entity_ProcessAnimation

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "gte_inline.h"
void Entity_ProcessAnimation(int param_1,s32 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1->counter1 != '\0') &&
     (iVar2 = 0, iVar3 = param_1, param_1->counter2 != '\0')) {
    do {
      if ((int)(uint)param_1->counter1 <= iVar2) {
        return;
      }
      iVar1 = iVar3->sprite_ptr1;
      setCopControlWord(2,0,iVar1->script_data);
      setCopControlWord(2,0x800,iVar1->callback);
      setCopControlWord(2,0x1000,iVar1->prev);
      setCopControlWord(2,0x1800,iVar1->next);
      setCopControlWord(2,0x2000,*(s32 *)(iVar1 + 0x28));
      setCopControlWord(2,0x2800,*(s32 *)(iVar1 + 0x2c));
      setCopControlWord(2,0x3000,iVar1->pos_y_fixed);
      setCopControlWord(2,0x3800,iVar1->scale_y);
      Entity_SubmitSpriteToOT(*(s32 *)(iVar1 + 0x40),_g_EntityBuffer,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(uint)param_1->counter2);
  }
  return;
}

