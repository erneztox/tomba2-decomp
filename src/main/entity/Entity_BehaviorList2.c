/**
 * @brief Entity behavior list variant 2: checks timer + g_TimerFlag flag
 * @note Original: func_80022760 at 0x80022760
 */
// Entity_BehaviorList2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
void FUN_80022760(int param_1)

{
  s8 cVar1;
  u8 uVar2;
  char *pcVar3;
  s32 *puVar4;
  
  if (((param_1->timer_main == 0) || (g_TimerFlag != '\0')) ||
     (uVar2 = 0, puVar4 = _DAT_1f800154, cVar1 = DAT_1f80015c,
     (param_1->entity_flags & 0x200) != 0)) {
    return;
  }
joined_r0x800227c8:
  g_TimerFlag = uVar2;
  if (cVar1 == '\0') {
    g_State182 = cVar1;
    return;
  }
  pcVar3 = (s8*)*puVar4;
  g_State182 = cVar1 + -1;
  puVar4 = puVar4 + 1;
  if (*pcVar3 != '\x01') goto switchD_8002281c_caseD_5;
  switchpcVar3->kind {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\a':
    goto switchD_8002281c_caseD_0;
  case '\x04':
    if (pcVar3->flag_5E == '\x02') {
      Overlay_80114e74(param_1);
      uVar2 = g_TimerFlag;
      cVar1 = g_State182;
      goto joined_r0x800227c8;
    }
switchD_8002281c_caseD_0:
    FUN_80022060(param_1);
    uVar2 = g_TimerFlag;
    cVar1 = g_State182;
    goto joined_r0x800227c8;
  default:
    break;
  case '\x06':
    FUN_80022190(param_1);
  }
switchD_8002281c_caseD_5:
  uVar2 = g_TimerFlag;
  cVar1 = g_State182;
  goto joined_r0x800227c8;
}
