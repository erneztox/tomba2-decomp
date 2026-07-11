/**
 * @brief Entity background updater: iterates 0x800F2738 list, draws
 * @note Original: func_80022554 at 0x80022554
 */
// Entity_BGUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_BGUpdate(void)

{
  u8 bVar1;
  u8 *pbVar2;
  int iVar3;
  u8 *pbVar4;
  s32 *puVar5;
  
  if (((_DAT_800e7ffe & 0x200) == 0) && (pbVar2 = _g_BackgroundEntitiesList, _DAT_1f80015c != 0)) {
    for (; pbVar2 != (u8 *)0x0; pbVar2 = *(u8 **)(pbVar2 + 0x24)) {
      if ((((pbVar2->input_flags & 0x40) != 0) && ((*pbVar2 & 1) != 0)) && (pbVar2->move_mode == 0)) {
        puVar5 = _DAT_1f800154;
        g_State182 = DAT_1f80015c;
joined_r0x80022608:
        do {
          if (g_State182 == '\0') break;
          pbVar4 = (u8 *)*puVar5;
          g_State182 = g_State182 + -1;
          puVar5 = puVar5 + 1;
          if ((*pbVar4 & 1) != 0) {
            bVar1 = pbVar4->kind;
            if (bVar1 != 4) {
              if (bVar1 < 5) {
                if (bVar1 != 0) goto joined_r0x80022608;
              }
              else {
                if (bVar1 == 6) {
                  Entity_DrawChild4(pbVar2,pbVar4);
                  goto joined_r0x80022608;
                }
                if (bVar1 != 7) goto joined_r0x80022608;
              }
            }
            iVar3 = Entity_CalcAngle17(pbVar2,pbVar4);
            if (-1 < iVar3) {
              pbVar2->move_mode = 2;
              pbVar4->move_mode = 2;
              if (((_DAT_800e7ffe & 0x200) == 0) && (pbVar2->parent == 0)) {
                *(u8 **)(pbVar2 + 0x10) = pbVar4;
                pbVar2->move_mode = 2;
                pbVar4->pos_y = pbVar2->pos_y;
                *(s16 *)(pbVar4 + 0x32) = *(s16 *)(pbVar2 + 0x32);
                pbVar4->pos_z = pbVar2->pos_z;
              }
              pbVar4->anim_id = pbVar2->anim_id & 1;
              Audio_PlaySoundEffect(0x2f,0,0);
              Entity_SpawnSpecial(2,pbVar2 + 0x2c,pbVar2->flag_5E,pbVar2 + 0x68);
              g_State182 = '\0';
            }
          }
        } while( true );
      }
    }
  }
  return;
}
