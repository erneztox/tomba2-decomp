// SOP_InitEntityPosition (SOP_InitEntityPosition) - Initializes entity position (16000, 0xF0D0, 0x4EB5) and sprite attributes

s32 SOP_InitEntityPosition(int param_1)

{
  param_1->pos_y = 16000;
  *(s16 *)(param_1 + 0x32) = 0xf0d0;
  param_1->pos_z = 0x4eb5;
  param_1->rot_y = 0x800;
  Entity_LoadAnimData3(param_1,0x8001b860,0);
  return 1;
}

