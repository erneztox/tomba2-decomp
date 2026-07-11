/**
 * @brief MDEC decode controller: reads macroblock header, dispatches
 * @note Original: func_800892A4 at 0x800892A4
 */
// MDEC_DecodeControl



#include "tomba.h"
void FUN_800892a4(int param_1)

{
  u8 bVar1;
  s8 cVar2;
  int iVar3;
  
  bVar1 = **(u8 **)(param_1 + 0x3c) >> 4;
  if ((**(u8 **)(param_1 + 0x3c) & 0xf0) == 0) {
    **(u8 **)(param_1 + 0x30) = 0xff;
    *(u8 *)(param_1->pos_y_fixed + 1) = 0;
    *(u8 *)(param_1 + 0xe8) = 0;
    *(u8 *)(param_1 + 0x35) = 0;
    (*DAT_800abe3c)();
    return;
  }
  cVar2 = *(s8*)(param_1 + 0xe8);
  *(u8 *)(param_1 + 0xe8) = bVar1;
  if (bVar1 == 0xf) {
    *(s8*)(param_1 + 0xe8) = cVar2;
  }
  else {
    **(u8 **)(param_1 + 0x30) = 0;
    iVar3 = 2;
    *(u8 *)(param_1->pos_y_fixed + 1) = **(u8 **)(param_1 + 0x3c);
    *(u8 *)(param_1 + 0x35) = *(u8 *)(param_1 + 0x44);
    if (2 < *(u8 *)(param_1 + 0x44)) {
      do {
        *(u8 *)(param_1->pos_y_fixed + iVar3) =
             *(u8 *)(param_1->sprite_data + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(u8 *)(param_1 + 0x44));
    }
  }
  if (((*(s8*)(param_1->sprite_data + 1) == '\0') &&
      (((param_1->anim_id != '\x01' || (param_1->script_ptr != 0)) &&
       (*(s8*)(param_1 + 0x50) == '\0')))) || (*(s8*)(param_1 + 0xe8) != cVar2)) {
    (*DAT_800abe3c)(param_1);
  }
  cVar2 = param_1->anim_id;
  *(u8 *)(param_1 + 0x4a) = 0;
  if (cVar2 == -1) {
    return;
  }
  if ((cVar2 != '\0') && (*(s8*)(param_1 + 0x37) == '\0')) {
    return;
  }
  if (((u8)(cVar2 - 2U) < 0xfc) && (**(char **)(param_1 + 0x3c) != -0xd)) {
    (*DAT_800abe3c)(param_1);
    return;
  }
  bVar1 = param_1->anim_id;
  if (bVar1 == 1) {
    cVar2 = param_1->anim_id;
    param_1->sub_anim_id = 0;
LAB_800894ac:
    param_1->anim_id = cVar2 + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        cVar2 = param_1->anim_id;
        *(u8 *)(param_1 + 0x49) = 1;
        goto LAB_800894ac;
      }
    }
    else if (bVar1 == 0xfe) {
      param_1->anim_id = 0xff;
      return;
    }
    if (param_1->script_data == (code *)0x0) {
      cVar2 = FUN_80087fa0(param_1);
    }
    else {
      cVar2 = (*param_1->script_data)(param_1);
    }
    param_1->anim_id = param_1->anim_id + cVar2;
  }
  return;
}
