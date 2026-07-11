// OPN_CameraOffsetSetup (OPN_CameraOffsetSetup) - Camera offset setup: writes camera pos from entity, plays animation sequence

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPN_CameraOffsetSetup(int param_1)

{
  if (param_1->behavior_state == '\0') {
    param_1->behavior_state = 1;
    param_1->rot_y = 0x800;
    param_1->render_flags = 1;
    param_1->sub_anim_id = 2;
    param_1->input_flags = 0;
    param_1->bounds_min_x = 0xfec0;
    param_1->bounds_min_y = 0;
    Entity_PlaySFX_FadeOut(1,1);
    Entity_LoadAnimDataEx(param_1,0x8014e4ec,4,4);
    Entity_InitFromScript(param_1,0x8014e4ec,0x8018d378);
  }
  else if (param_1->behavior_state == '\x01') {
    Entity_AnimFrame(param_1);
    Entity_ScriptRun(param_1);
    if (0xe < param_1->action_state) {
      GTE_ProjectSprite2(param_1);
      GTE_ComposeAndProject(param_1);
      if (param_1->input_flags != '\0') {
        _g_GTE_Vector0 = 0x5c;
        _g_GTE_Vector2 = 0;
        _g_GTE_Vector1 = -0x80 - *(short *)(*(int *)(param_1 + 0xec) + 2);
        GTE_MulMatrix2(*(int *)(param_1 + 0xec) + 0x18,&g_GTE_Vector0,&DAT_1f8000c8);
        _g_CameraPosX = param_1->pos_y + _DAT_1f8000c8;
        _g_CameraPosY = *(short *)(param_1 + 0x32) + _DAT_1f8000ca;
        _g_CameraPosZ = param_1->pos_z + _DAT_1f8000cc;
      }
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x08011ff4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->action_state * 4 + -0x7fe75f6c))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

