// A03_EntitySpeedControl - Entity speed/timer control: checks field_0x60 pointer bounds

/* WARNING: Control flow encountered bad instruction data */

void A03_EntitySpeedControl(int param_1)

{
  short sVar1;
  s16 uVar2;
  int iVar3;
  u8 auStack_38 [32];
  u8 auStack_18->counter1;
  
  *(u8 *)(param_1 + 0x72) = *(u8 *)(param_1 + 0x72) & 0xf1;
  param_1->timer1 = param_1->timer1 + 1;
  if (*(uint *)(param_1 + 0x60) < 0x80111ba9) {
    *(s16 *)(param_1 + 0x6c) = 0x8d0;
    *(s16 *)(param_1 + 0x6e) = 0;
    *(s16 *)(param_1 + 0x70) = 0;
    *(s16 *)(param_1 + 0x76) = 0;
    *(u8 *)(param_1 + 0x72) = *(u8 *)(param_1 + 0x72) | 1;
  }
  if (param_1->state == '\x01') {
    func_0x0010cf6c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) >> 1;
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) >> 1;
  *(short *)(param_1 + 0x6c) =
       *(short *)(param_1 + 0x6c) + (short)(0x3c0 - *(short *)(param_1 + 0x6c) >> 6);
  if (*(short *)(param_1 + 0x76) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0 < *(short *)(param_1 + 0x76)) {
    *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + -1;
  }
  if ((DAT_800bf908 == -1) && (DAT_800bf907 == -1)) {
    func_0x0010d988(param_1);
    uVar2 = 0x8d0;
    if (0x8cf < *(short *)(param_1 + 0x6c)) {
      if (0x3510 < *(short *)(param_1 + 0x6c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_08015344;
    }
  }
  else {
    func_0x0010d1f4(param_1);
    uVar2 = 0x8d0;
    if (0x8cf < *(short *)(param_1 + 0x6c)) {
      if (*(short *)(param_1 + 0x6c) < 0x1a81) goto LAB_08015344;
      uVar2 = 0x1a80;
    }
  }
  *(s16 *)(param_1 + 0x6c) = uVar2;
LAB_08015344:
  if (g_GameMode == '\0') {
    if (0x554 < (u16)(*(short *)(param_1 + 0x6e) + 0x2aaU)) {
      param_1->sub_action = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((*(u8 *)(param_1 + 0x72) & 1) != 0) {
      if ((((int)*(short *)(*(int *)(param_1 + 0x60) + 6) & 0x8000U) != 0) &&
         (iVar3 = func_0x0010c060(*(int *)(param_1 + 0x60),param_1->type_flags + -1000,
                                  auStack_18,auStack_38),
         ((int)*(short *)(iVar3 + 6) & 0x8000U) != 0)) {
        param_1->sub_action = 1;
        g_GameMode = '\x01';
      }
    }
  }
  param_1->pos_y = *(s16 *)(param_1 + 0xac);
  *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0xb0);
  param_1->pos_z = *(s16 *)(param_1 + 0xb4);
  sVar1 = *(short *)(param_1 + 0x6c) >> 2;
  *(short *)(param_1->sprite_ptr2 + 0xc) = *(short *)(param_1->sprite_ptr2 + 0xc) + sVar1;
  *(short *)(*(int *)(param_1 + 200) + 0xc) = *(short *)(*(int *)(param_1 + 200) + 0xc) + sVar1;
  *(short *)(param_1->anim_ptr + 0xc) = *(short *)(param_1->anim_ptr + 0xc) + sVar1;
  *(short *)(param_1->target_ptr + 0xc) = *(short *)(param_1->target_ptr + 0xc) + sVar1;
  if (param_1->state == '\x01') {
    param_1->flags = 1;
    Sprite_Alloc1(param_1);
  }
  Entity_CheckState2(param_1);
  func_0x0010c948(param_1);
  return;
}

