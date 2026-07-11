/**
 * @brief GPU tile drawer: builds 4-point tile primitive, submits to OT
 * @note Original: func_8007C3CC at 0x8007C3CC
 */
// GPU_DrawTile



#include "tomba.h"
void GPU_DrawTile(s32 param_1,s16 *param_2,u8 param_3,uint param_4)

{
  u8 uVar1;
  s16 sVar2;
  s16 *psVar3;
  uint uVar4;
  s32 local_38;
  s16 local_34;
  u8 local_30->counter1;
  
  local_38 = DAT_80016ed4;
  local_34 = DAT_80016ed8;
  local_30->type = DAT_80016edc;
  local_30->flags = DAT_80016edd;
  local_30->kind = DAT_80016ede;
  uVar4 = (uint)*(u16 *)(*(u16 *)((int)&local_38 + (param_4 & 0xffff) * 2) + 0x800bf9b4);
  uVar1 = local_30[param_4 & 0xffff];
  psVar3 = (s16 *)GPU_DrawNumber(param_1,param_2,param_3,(uVar4 / 0x708) % 10,uVar1);
  sVar2 = *param_2;
  psVar3->flags = param_3;
  *(u8 *)((int)psVar3 + 3) = uVar1;
  psVar3->sub_type = 0x28;
  *psVar3 = sVar2;
  psVar3->kind = 0x38;
  *param_2 = *param_2 + 8;
  psVar3 = (s16 *)GPU_DrawNumber(psVar3 + 4,param_2,param_3,(uVar4 / 0x1e) % 0x3c,uVar1);
  sVar2 = *param_2;
  psVar3->flags = param_3;
  *(u8 *)((int)psVar3 + 3) = uVar1;
  psVar3->kind = 0x10;
  psVar3->sub_type = 0x28;
  *psVar3 = sVar2;
  *param_2 = *param_2 + 8;
  GPU_DrawNumber(psVar3 + 4,param_2,param_3,((uVar4 % 0x1e) * 100) / 0x1e,uVar1);
  return;
}
