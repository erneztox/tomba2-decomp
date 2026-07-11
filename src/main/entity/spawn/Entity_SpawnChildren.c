/**
 * @brief Entity children spawner: iterates table at 0x800A4BB8
 * @note Original: func_8006FC34 at 0x8006FC34
 */
// Entity_SpawnChildren



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_8006fc34(undefined4 param_1,byte param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    iVar3 = FUN_80072ddc(param_1,(&DAT_800a4bb8)[iVar5],3,4);
    iVar5 = iVar5 + 1;
    if (iVar3 != 0) {
      iVar3->callback = FUN_80070018;
      iVar3->sub_type = param_2 & 0x7f;
      iVar3->input_flags = param_2 & 0x80;
      iVar3->parent = param_1;
      iVar5 = (uint)iVar3->sub_type * 8;
      iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
      if (iVar3->input_flags == '\0') {
        iVar4 = FUN_80051b70(iVar3,(int)*(short *)(&DAT_800a29ce + iVar5),
                             (int)*(short *)(&DAT_800a29cc + iVar5));
        if (iVar4 != 0) {
          return 0;
        }
      }
      else {
        iVar3->sprite_data = _DAT_800ecf58;
        FUN_80077b38(iVar3,&PTR_DAT_80017334,(int)*(short *)(&DAT_800a29cc + iVar5));
        iVar3->sprite_flags = 0;
        iVar3->render_flags = 0x10;
        iVar3->sub_anim_id = 0;
        if (((int)*(short *)(&DAT_800a29ce + iVar5) & 0x8000U) != 0) {
          iVar3->sprite_flags = iVar3->sprite_flags | 1;
        }
        uVar1 = *(ushort *)(&DAT_800a29ce + iVar5);
        iVar3->target_rot_y = 0;
        iVar3->counter1 = 0xf0;
        iVar3->draw_y = uVar1 & 0x7fff;
      }
      iVar3->input_flags = iVar3->input_flags | 2;
      uVar2 = *(undefined2 *)(&DAT_800a29d2 + iVar5);
      iVar3->draw_x = 0xffe0;
      iVar3->angle_delta = 0;
      iVar3->rot_x = 0;
      iVar3->rot_y = 0;
      iVar3->rot_z = 0;
      iVar3->target_angle = uVar2;
      if (DAT_800bf816 == '\0') {
        iVar3->gte_flags = 0;
      }
      else {
        iVar3->gte_flags = 1;
      }
      iVar3->event_param = 0;
      return iVar3;
    }
  } while (iVar5 < 3);
  return 0;
}
