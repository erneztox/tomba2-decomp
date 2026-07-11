/**
 * @brief Entity multiple spawner: iterates table at 0x800A4BB8, spawns children
 * @note Original: func_8006FF10 at 0x8006FF10
 */
// Entity_SpawnMultiple



#include "tomba.h"
int FUN_8006ff10(s32 param_1,s16 param_2)

{
  u8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = &DAT_800a4bb8;
  iVar3 = 0;
  do {
    iVar2 = FUN_80072ddc(param_1,*puVar1,3,4);
    iVar4 = iVar3 + 1;
    if (iVar2 != 0) {
      iVar2->callback = FUN_80070018;
      iVar2->parent = param_1;
      iVar2->target_angle = param_2;
      iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
      if (g_ActionFlag == '\0') {
        iVar2->gte_flags = 0;
      }
      else {
        iVar2->gte_flags = 1;
      }
      iVar2->input_flags = 1;
      iVar2->event_param = 0;
      iVar2->state = STATE_FINISH;
      return iVar2;
    }
    puVar1 = &DAT_800a4bb9 + iVar3;
    iVar3 = iVar4;
  } while (iVar4 < 3);
  return 0;
}
