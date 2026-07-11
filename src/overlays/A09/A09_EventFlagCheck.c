// A09_EventFlagCheck - Event flag check: DAT_800bfa41, spawns on condition

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A09_EventFlagCheck(int param_1)

{
  int iVar1;
  
  if (param_1->action_state == '\0') {
    if (DAT_800bfa41 != '\x06') {
      return 0;
    }
    param_1->action_state = 1;
    *(u8 *)(param_1 + 0x18) = 0xff;
    *(u8 *)(param_1 + 0x19) = 0xff;
    *(u8 *)(param_1 + 0x1a) = 0xff;
    param_1->sprite_flags = param_1->sprite_flags | 2;
    _g_CameraZoom = 0x500;
    _DAT_800e8042 = param_1->pos_y;
    iVar1 = (uint)param_1->bounds_min_y << 0x10;
    _DAT_800e8046 = *(short *)(param_1 + 0x32) - (short)((iVar1 >> 0x10) - (iVar1 >> 0x1f) >> 1);
    _DAT_800e804a = param_1->pos_z;
    Audio_PlaySoundEffect(0x38,0x12,0);
  }
  else if (param_1->action_state == '\x01') {
    param_1->flags = 1;
    Sprite_Alloc1(param_1);
    Entity_UpdateMatrix(param_1);
    *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + -8;
    *(char *)(param_1 + 0x19) = *(char *)(param_1 + 0x19) + -8;
    *(char *)(param_1 + 0x1a) = *(char *)(param_1 + 0x1a) + -8;
    if (*(char *)(param_1 + 0x18) < '\0') {
      return 0;
    }
    param_1->sprite_flags = param_1->sprite_flags & 0xfd;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

