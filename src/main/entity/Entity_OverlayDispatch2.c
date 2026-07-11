/**
 * @brief Entity overlay dispatch variant 2: switch on g_GameState
 * @note Original: func_800633B0 at 0x800633B0
 */
// Entity_OverlayDispatch2



#include "tomba.h"
s32 FUN_800633b0(int param_1)

{
  int iVar1;
  s32 uVar2;
  
  switch(g_GameState) {
  case 0:
    func_0x8010c290(param_1);
    break;
  case 1:
    iVar1 = func_0x8010acb8(param_1);
    goto LAB_8006340c;
  case 4:
    iVar1 = func_0x80115ef0(param_1);
    goto LAB_8006340c;
  case 5:
    func_0x80110f78(param_1);
    break;
  case 6:
    func_0x80114730(param_1);
    break;
  case 10:
    iVar1 = func_0x8010b3dc(param_1);
    goto LAB_8006340c;
  case 0xc:
    func_0x8010ce90(param_1);
    break;
  case 0xf:
    iVar1 = func_0x8010ba04(param_1);
LAB_8006340c:
    if (iVar1 == 1) {
      return 1;
    }
  }
  if ((param_1->behavior_state == '\x04') || (uVar2 = 1, param_1->behavior_state == '\t')) {
    uVar2 = 0;
  }
  return uVar2;
}
