/**
 * @brief Game state loader: reads save state from g_GameState, dispatches
 * @note Original: func_80036A14 at 0x80036A14
 */
// Game_StateLoad



#include "tomba.h"
void Game_StateLoad(int param_1,uint param_2)

{
  u8 *pbVar1;
  int iVar2;
  s8 cVar3;
  u8 *pbVar4;
  int iVar5;
  u8 *puVar6;
  
  iVar5 = 0;
  puVar6 = &g_GameState;
  pbVar4 = &DAT_800a2be8;
  do {
    if ((puVar6[0x244] != '\0') && (cVar3 = '\0', *pbVar4 == param_2)) {
      iVar2 = 0;
      pbVar1 = &DAT_800a2be8;
      do {
        if ((((&DAT_800bfab4)[iVar2] != '\0') && (*pbVar1 == param_2)) && (pbVar1->kind < pbVar4->kind)) {
          cVar3 = cVar3 + '\x01';
        }
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 0xc;
      } while (iVar2 < 0x100);
      if (param_2 == 2) {
        puVar6[0x344] = *(s8*)(param_1 + 0x25) + cVar3;
      }
      else {
        puVar6[0x344] = cVar3;
      }
    }
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + 1;
    pbVar4 = pbVar4 + 0xc;
  } while (iVar5 < 0x100);
  return;
}
