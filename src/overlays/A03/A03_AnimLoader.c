// A03_AnimLoader - Animation loader: sets sprite data with optional extra param

/* WARNING: Control flow encountered bad instruction data */

s32 A03_AnimLoader(int param_1,uint param_2,short param_3)

{
  if ((uint)param_1->anim_id != (param_2 & 0xff)) {
    param_1->anim_id = (char)param_2;
    Entity_AnimLoad3(param_1,param_2);
    if (param_3 != 0) {
      Entity_LoadAnimDataEx(param_1,0x8011c0e8,param_2);
      return 1;
    }
    Entity_LoadAnimData3(param_1,0x8011c0e8,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

