// A09_EntityState_WaterCheck - Entity state: water/surface collision check

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_EntityState_WaterCheck(int param_1)

{
  u16 uVar1;
  u8 bVar2;
  int iVar3;
  uint uVar4;
  
  bVar2 = param_1->state;
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        if (param_1->behavior_state == '\0') {
          param_1->behavior_state = 1;
        }
        else if (param_1->behavior_state != '\x01') {
          halt_baddata();
        }
        iVar3 = *(int *)(param_1 + 0x50) + -0x10;
        *(int *)(param_1 + 0x50) = iVar3;
        if (iVar3 < 0) {
          *(s32 *)(param_1 + 0x50) = 0;
        }
        bVar2 = param_1->action_state + 1;
        param_1->action_state = bVar2;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x10;
        if (0x10 < bVar2) {
          param_1->state = 3;
        }
        param_1->flags = 1;
        halt_baddata();
      }
      if (bVar2 != 3) {
        halt_baddata();
      }
      Entity_Dealloc(param_1);
      return;
    }
    if (bVar2 != 0) {
      halt_baddata();
    }
    *(s32 *)(param_1 + 0x50) = 0x100;
    *(s32 *)(param_1 + 0x54) = 0x100;
    param_1->flags = 1;
    param_1->state = 1;
    param_1->normal_x = 0;
    param_1->velocity_y = 0;
    param_1->normal_z = 0;
    param_1->sprite_x = 0x78;
  }
  if ((uint)_g_InputPressed % 0x2d == 0) {
    iVar3 = Math_Random();
    Audio_PlaySoundEffect(0x38,(int)*(char *)((iVar3 >> 9 & 6U) + 0x80109070),0);
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data == 0) {
    param_1->scale_y = 0x8010e548;
  }
  iVar3 = Math_CosGTE(_g_InputPressed >> 7);
  uVar1 = _g_InputPressed >> 4;
  param_1->normal_x = param_1->normal_x + (short)(iVar3 >> 5);
  iVar3 = Math_CosGTE(uVar1);
  uVar4 = (uint)_g_InputPressed;
  param_1->velocity_y = param_1->velocity_y + (short)(iVar3 >> 7);
  iVar3 = Math_CosGTE(uVar4 << 1);
  param_1->flags = 1;
  param_1->normal_z = param_1->normal_z + (short)(iVar3 >> 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

