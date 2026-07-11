/**
 * @brief Menu number drawer variant 2: different digit rendering path
 * @note Original: func_8007EF60 at 0x8007EF60
 */
// Menu_DrawNumber2



#include "tomba.h"
void Menu_DrawNumber2(uint param_1)

{
  void **ppuVar1;
  int iVar2;
  int iVar3;
  s16 sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void local_48->state;
  s16 local_38->counter1;
  u16 local_28->counter1;
  
  uVar6 = 0;
  iVar7 = 0x68;
  local_48->type = PTR_s_OK_to_quit_game__800a2878;
  String_TableLookup(local_48,1,local_38);
  GPU_RenderSprite_V1((int)local_38->type,0x50,0,local_48->type,0);
  local_48->type = PTR_DAT_800a287c;
  local_48->flags = PTR_DAT_800a2880;
  sVar4 = String_TableLookup(local_48,2,local_38);
  uVar5 = param_1;
  do {
    iVar2 = uVar6 * 2;
    *(int *)(local_28 + iVar2) = iVar7;
    iVar3 = uVar6 * 2;
    iVar7 = iVar7 + 0x18;
    ppuVar1 = local_48 + uVar6;
    uVar6 = uVar6 + 1;
    GPU_RenderSprite_V1((int)local_38[iVar3],(int)(s16)local_28[iVar2],(uint)(uVar5 == 0) << 1,*ppuVar1,0
                );
    uVar5 = param_1 ^ uVar6;
  } while ((int)uVar6 < 2);
  GPU_DrawSprite98((int)sVar4,(int)((local_28[param_1 * 2] + 4) * 0x10000) >> 0x10,0);
  return;
}
