// A03_EntityMain - Main entity state machine: swim, collectibles, score system

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_EntityMain(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  short sVar3;
  s32 uVar4;
  u16 uVar5;
  uint uVar6;
  int iVar7;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if ((param_1->behavior_state != '\0') && (param_1->behavior_state == '\x01')) {
      param_1->timer1 = param_1->timer1 + 1;
    }
    iVar7 = param_1->parent;
    if (iVar7->state == '\x01') {
      if (5 < iVar7->behavior_state) {
        bVar1 = param_1->action_state;
        if (bVar1 == 1) {
          uVar6 = 0xb - (int)*(short *)(iVar7 + 0x76);
          if ((uint)param_1->anim_id != (uVar6 & 0xff)) {
            param_1->anim_id = (char)uVar6;
            Entity_AnimLoad3(param_1,uVar6);
            Entity_LoadAnimData3(param_1,0x8011c0e8,uVar6);
          }
          param_1->bounds_min_y = 0x60;
          if (iVar7->velocity_y < 0) goto LAB_001093a8;
          param_1->velocity_y = 0x1400;
          param_1->action_state = param_1->action_state + '\x01';
          if (param_1->anim_id != '\x01') {
            param_1->anim_id = 1;
            Entity_AnimLoad3(param_1,1);
            Entity_LoadAnimDataEx(param_1,0x8011c0e8,1,4);
          }
        }
        else {
          if (bVar1 < 2) {
            if (bVar1 != 0) {
              param_1->bounds_min_y = 0x60;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (((*(u8 *)(iVar7 + 0x72) & 1) != 0) &&
               (((int)*(short *)(*(int *)(iVar7 + 0x60) + 6) & 0x8000U) == 0)) {
              uVar6 = 0xb - (int)*(short *)(iVar7 + 0x76);
              if ((uint)param_1->anim_id != (uVar6 & 0xff)) {
                param_1->anim_id = (char)uVar6;
                Entity_AnimLoad3(param_1,uVar6);
                Entity_LoadAnimData3(param_1,0x8011c0e8,uVar6);
              }
              param_1->bounds_min_y = 0x60;
              halt_baddata();
            }
LAB_080103a8:
            param_1->action_state = param_1->action_state + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (bVar1 != 2) {
            if (bVar1 != 3) {
              param_1->bounds_min_y = 0x60;
              halt_baddata();
            }
            param_1->bounds_min_y =
                 param_1->bounds_min_y +
                 (short)(char)((u16)param_1->velocity_y >> 8);
            param_1->velocity_y = param_1->velocity_y + -0xdb;
            if (0x5f < param_1->bounds_min_y) goto LAB_001093a8;
            if (param_1->anim_id != '\x03') {
              param_1->anim_id = 3;
              Entity_AnimLoad3(param_1,3);
              Entity_LoadAnimDataEx(param_1,0x8011c0e8,3,4);
            }
            goto LAB_080103a8;
          }
        }
        uVar2 = param_1->velocity_y;
        uVar5 = param_1->velocity_y - 0xdb;
        param_1->velocity_y = uVar5;
        param_1->bounds_min_y = param_1->bounds_min_y + (short)(char)((u16)uVar2 >> 8);
        if ((int)((uint)uVar5 << 0x10) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_001093a8:
        Entity_AnimFrame(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1->bounds_min_y = 0x60;
    }
    if ((DAT_800bf839 == '\0') && (g_GameMode < '\x02')) {
      if (g_GameMode == '\x01') {
        g_GameMode = '\x02';
        g_MenuSelection = 0;
        param_1->state = 2;
        param_1->behavior_state = 0;
        iVar7->state = 2;
        iVar7->behavior_state = 0;
        param_1->move_mode = 0;
      }
      else {
        sVar3 = func_0x0010e820(iVar7);
        if (sVar3 == 0) {
          if (param_1->behavior_state != '\x01') goto LAB_08010878;
          if ((DAT_800bf909 != -1) && (param_1->timer1 == _DAT_800bf9f6)) {
            UI_DrawElement(0x35,0x41);
          }
          DAT_800bf81e = 1;
        }
        else {
          g_SeqComplete = '\x01';
          g_MenuSelection = 0;
          param_1->state = 2;
          _DAT_800bf9b6 = param_1->timer1;
          param_1->behavior_state = 4;
          func_0x00109bc8(param_1);
          if (DAT_800bf907 == -1) {
            if (DAT_800bf909 == -1) {
              if (param_1->timer1 < _DAT_800bf9b8) {
                _DAT_800bf9b8 = param_1->timer1;
                uVar4 = Entity_ActivatePool3(0x19,3);
                param_1->script_ptr = uVar4;
              }
              DAT_800bf9fb = 3;
            }
            else {
              if (param_1->timer1 < _DAT_800bf9b8) {
                _DAT_800bf9b8 = param_1->timer1;
              }
              if (param_1->timer1 < _DAT_800bf9f6) {
                uVar4 = Entity_ActivatePool3(0x18,3);
                param_1->script_ptr = uVar4;
                DAT_800bf9fb = 4;
              }
              else {
                uVar4 = Entity_ActivatePool3(0x28,3);
                param_1->script_ptr = uVar4;
                DAT_800bf9fb = 3;
                Render_ClearQueue();
              }
            }
          }
          else {
            if (_DAT_800bf9b8 == 0) {
              _DAT_800bf9b8 = param_1->timer1;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (param_1->timer1 < _DAT_800bf9b8) {
              _DAT_800bf9b8 = param_1->timer1;
            }
            if (param_1->timer1 < _DAT_800bf9f6) {
              _DAT_800bf9f6 = 0x834;
              uVar4 = Entity_ActivatePool3(0x18,3);
              param_1->script_ptr = uVar4;
              DAT_800bf9fb = 4;
            }
            else {
              uVar4 = Entity_ActivatePool3(0x28,3);
              param_1->script_ptr = uVar4;
              DAT_800bf9fb = 3;
              Render_ClearQueue();
            }
          }
        }
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      Entity_InitType2(param_1,0);
      param_1->sprite_data = _DAT_800ecfa4;
      param_1->flags = 1;
      param_1->rot_y = 0;
      param_1->rot_z = 0;
      if (param_1->anim_id != '\v') {
        param_1->anim_id = 0xb;
        Entity_AnimLoad3(param_1,0xb);
        Entity_LoadAnimData3(param_1,0x8011c0e8,0xb);
      }
      param_1->timer2 = 0x3c;
      param_1->timer1 = 0;
      g_SeqComplete = 0;
      param_1->action_state = 0;
      param_1->move_mode = 0;
      param_1->script_ptr = 0;
      Audio_AllocVoice2(0);
      func_0x00075d24(0x11ffc);
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    if (param_1->behavior_state < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08010678 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)param_1->behavior_state * 4 + -0x7fef7060))();
      return;
    }
    if (g_SeqComplete != '\0') {
      uVar6 = 0xb - (int)*(short *)(param_1->parent + 0x76);
      if ((uint)param_1->anim_id != (uVar6 & 0xff)) {
        param_1->anim_id = (char)uVar6;
        Entity_AnimLoad3(param_1,uVar6);
        Entity_LoadAnimData3(param_1,0x8011c0e8,uVar6);
      }
      Entity_AnimFrame(param_1);
    }
  }
LAB_08010878:
  _DAT_1f800160 = param_1->pos_y;
  _DAT_1f800162 = *(s16 *)(param_1 + 0x32);
  _DAT_1f800164 = param_1->pos_z;
  _DAT_1f80016a = param_1->rot_z;
  _DAT_1f800168 = param_1->rot_y;
  return;
}

