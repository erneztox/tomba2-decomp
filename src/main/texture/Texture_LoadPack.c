/**
 * @brief Loads a texture pack: iterates textures, decompresses, uploads to VRAM
 * @note Original: func_80044E84 at 0x80044E84
 */
// Texture_LoadPack



#include "tomba.h"
void Texture_LoadPack(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  s16 *psVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *param_1;
  if (0 < iVar5) {
    psVar4 = (s16 *)((int)param_1 + -2);
    piVar6 = param_1 + 0x200;
    do {
      iVar5 = iVar5 + -1;
      piVar3 = param_1 + 1;
      param_1 = param_1 + 3;
      iVar1 = *param_1;
      iVar2 = param_2 + (int)psVar4->behavior_state * (int)psVar4->action_state * -2;
      Texture_Decompress(piVar3,iVar2,piVar6);
      GPU_LoadImage(piVar3,iVar2);
      GPU_DrawSync(0);
      psVar4 = psVar4 + 6;
      piVar6 = (int *)((int)piVar6 + iVar1);
    } while (0 < iVar5);
  }
  return;
}
