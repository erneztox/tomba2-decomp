/**
 * @brief Menu number drawer: converts value to digits, renders sprites
 * @note Original: func_8007ED5C at 0x8007ED5C
 */
// Menu_DrawNumber



#include "tomba.h"
void FUN_8007ed5c(uint param_1)

{
  void **ppuVar1;
  int iVar2;
  int iVar3;
  s16 sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void local_38->state;
  s16 local_28->state;
  u16 local_20->state;
  
  uVar6 = 0;
  iVar7 = 0x68;
  local_38->type = PTR_s_Save__800a2860;
  FUN_800793c4(local_38,1,local_28);
  FUN_80079374((int)local_28->type,0x50,0,local_38->type,0);
  local_38->type = PTR_DAT_800a2864;
  local_38->flags = PTR_DAT_800a2868;
  sVar4 = FUN_800793c4(local_38,2,local_28);
  uVar5 = param_1;
  do {
    iVar2 = uVar6 * 2;
    *(int *)(local_20 + iVar2) = iVar7;
    iVar3 = uVar6 * 2;
    iVar7 = iVar7 + 0x18;
    ppuVar1 = local_38 + uVar6;
    uVar6 = uVar6 + 1;
    FUN_80079374((int)local_28[iVar3],(int)(s16)local_20[iVar2],(uint)(uVar5 == 0) << 1,*ppuVar1,0
                );
    uVar5 = param_1 ^ uVar6;
  } while ((int)uVar6 < 2);
  FUN_8007e998((int)sVar4,(int)((local_20[param_1 * 2] + 4) * 0x10000) >> 0x10,0);
  return;
}
