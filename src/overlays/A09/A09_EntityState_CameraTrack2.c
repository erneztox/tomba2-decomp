// A09_EntityState_CameraTrack2 - Camera track state: checks entity Y pos vs target

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 A09_EntityState_CameraTrack2(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_800bf860;
  if (param_1->sub_state == '\0') {
    if (param_1->pos_z < *(short *)(_DAT_800bf860 + 0x30)) {
      param_1->sub_state = 1;
      iVar1->state = 2;
      Audio_PlaySoundEffect(0x37,0x16,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (param_1->sub_state != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_800bf860->state == '\x03') {
      return 1;
    }
  }
  *(short *)(_DAT_800bf860 + 0x30) = *(short *)(_DAT_800bf860 + 0x30) + 0x20;
  return 0;
}

