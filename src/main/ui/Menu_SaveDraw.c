/**
 * @brief Menu save drawer: entity->state=1, draws save UI
 * @note Original: func_8003AD48 at 0x8003AD48
 */
// Menu_SaveDraw



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8003ad48(int param_1)

{
  s16 sVar1;
  u8 bVar2;
  s8 cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  s32 uVar7;
  
  bVar2 = param_1->state;
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        param_1->state = STATE_DEAD;
        DAT_800bf849 = DAT_800bf849 + -1;
        DAT_800ed06c = DAT_800ed06c + -1;
        return;
      }
      if (bVar2 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar2 != 0) {
      return;
    }
    if (param_1->sub_type == '\x02') {
      uVar7 = 0x16;
      cVar3 = FUN_80073750(PTR_s_Clear_800a3a8c);
      param_1->counter1 = cVar3 + '\x01';
    }
    else {
      uVar7 = 0xf;
      bVar2 = FUN_80073750((&PTR_DAT_800a33cc)[param_1->draw_x * 3]);
      param_1->counter1 = bVar2;
      if (0x20 < bVar2) {
        FUN_8009a730(s_cube_moji_over_flow_80014a54);
        FUN_8009a730(&DAT_80014a6c,(&PTR_DAT_800a33cc)[param_1->draw_x * 3]);
        param_1->state = STATE_FINISH;
        return;
      }
    }
    if (_g_EntityPoolCount < (s16)(u16)param_1->counter1) {
      param_1->state = STATE_FINISH;
      return;
    }
    param_1->counter2 = param_1->counter1;
    param_1->render_flags = 4;
    param_1->sprite_flags = 0;
    param_1->state = param_1->state + '\x01';
    iVar6 = 0;
    param_1->sprite_data = _g_OT_Data;
    iVar5 = param_1;
    if (param_1->counter1 != '\0') {
      do {
        iVar4 = FUN_8007aae8();
        iVar5->sprite_ptr1 = iVar4;
        *(s16 *)(iVar4 + 6) = 0xffff;
        **(s16 **)(iVar5 + 0xc0) = 0;
        *(s16 *)(iVar5->sprite_ptr1 + 2) = 0;
        *(s16 *)(iVar5->sprite_ptr1 + 4) = 0;
        *(s16 *)(iVar5->sprite_ptr1 + 8) = 0;
        *(s16 *)(iVar5->sprite_ptr1 + 10) = 0;
        *(s16 *)(iVar5->sprite_ptr1 + 0xc) = 0;
        FUN_80051b04(iVar5->sprite_ptr1,1,uVar7);
        *(u8 *)(iVar5->sprite_ptr1 + 0x3e) = 0;
        *(s8*)(iVar5->sprite_ptr1 + 0x3f) = (char)iVar6;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < (int)(uint)param_1->counter1);
    }
    sVar1 = _DAT_801003f8;
    param_1->pos_y = 0;
    *(s16 *)(param_1 + 0x32) = 0xffc0;
    param_1->rot_x = 0;
    param_1->rot_y = 0;
    param_1->rot_z = 0;
    param_1->pos_z = sVar1 + 8;
    if (param_1->sub_type != '\x02') {
      param_1->flag_5E = 0;
      param_1->pos_z = sVar1 + param_1->pos_z + 8;
      return;
    }
    param_1->flag_5E = 1;
    return;
  }
  bVar2 = param_1->sub_type;
  if (bVar2 == 1) {
    FUN_8003a9a0(param_1);
  }
  else if (bVar2 < 2) {
    if (bVar2 != 0) {
      param_1->flags = 1;
      goto LAB_8003aff0;
    }
    FUN_8003a790(param_1);
  }
  else {
    if (bVar2 != 2) {
      param_1->flags = 1;
      goto LAB_8003aff0;
    }
    FUN_8003abe4(param_1);
  }
  param_1->flags = 1;
LAB_8003aff0:
  FUN_800517f8(param_1);
  return;
}
