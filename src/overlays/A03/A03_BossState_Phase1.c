// A03_BossState_Phase1 - Boss state machine: large GTE operations, phase 1

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_BossState_Phase1(int param_1)

{
  u16 uVar1;
  s32 uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  s32 local_88;
  int local_84;
  s32 local_80;
  s32 local_7c;
  s32 local_78;
  s32 local_74;
  int local_70;
  s32 local_6c;
  u8 auStack_68 [32];
  u8 auStack_48 [32];
  short local_28;
  short local_26;
  short local_24;
  s16 local_22;
  
  if ((*(u8 *)(param_1 + 0x72) & 1) == 0) {
    iVar6 = (uint)param_1->type_flags +
            ((int)((uint)*(u16 *)(param_1 + 0x6c) << 0x10) >> 0x14);
    param_1->type_flags = (short)iVar6;
    iVar6 = func_0x0010c36c(*(s32 *)(param_1 + 0x60),iVar6 * 0x10000 >> 0x10,&local_28,
                            auStack_48);
    *(int *)(param_1 + 0x60) = iVar6;
    *(s16 *)(param_1 + 0xa8) = 0x1000;
    *(s16 *)(param_1 + 0xa0) = 0x1000;
    *(s16 *)(param_1 + 0x98) = 0x1000;
    *(s16 *)(param_1 + 0xa6) = 0;
    *(s16 *)(param_1 + 0xa4) = 0;
    *(s16 *)(param_1 + 0xa2) = 0;
    *(s16 *)(param_1 + 0x9e) = 0;
    *(s16 *)(param_1 + 0x9c) = 0;
    *(s16 *)(param_1 + 0x9a) = 0;
    Math_Atan2_2(*(short *)(iVar6 + 10) + -0x400,param_1 + 0x98);
    param_1->projected_x = (int)local_28;
    param_1->projected_z = (int)local_24;
    param_1->type_flags = local_22;
    param_1->projected_y =
         param_1->projected_y + ((int)((uint)param_1->velocity_y << 0x10) >> 0x14);
    param_1->velocity_y = param_1->velocity_y + 0x47;
    if ((param_1->state == '\x01') && ((int)local_26 < param_1->projected_y)) {
      Sys_CallWithParams(0,0,0x90,1);
      Audio_PlaySoundEffect(0x83,0,0);
      *(s16 *)(param_1 + 0x6e) = 0;
      *(s16 *)(param_1 + 0x70) = 0;
      param_1->velocity_y = 0;
      *(u8 *)(param_1 + 0x72) = *(u8 *)(param_1 + 0x72) | 1;
      iVar6 = (int)_DAT_8011bafe;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      iVar6 = -(int)*(short *)(param_1 + 0x8a) - (iVar6 + 0x17);
      param_1->projected_x =
           param_1->projected_x + (iVar6 * *(short *)(param_1 + 0x9a) >> 0xc);
      param_1->projected_y =
           param_1->projected_y + (iVar6 * *(short *)(param_1 + 0xa0) >> 0xc);
      param_1->projected_z =
           param_1->projected_z + (iVar6 * *(short *)(param_1 + 0xa6) >> 0xc);
    }
    return;
  }
  local_88 = param_1->gte_result;
  local_84 = *(int *)(param_1 + 0x9c);
  local_80 = *(s32 *)(param_1 + 0xa0);
  local_7c = *(s32 *)(param_1 + 0xa4);
  local_78 = *(s32 *)(param_1 + 0xa8);
  local_74 = param_1->projected_x;
  iVar7 = param_1->projected_y;
  local_6c = param_1->projected_z;
  iVar6 = (uint)param_1->type_flags +
          ((int)((uint)*(u16 *)(param_1 + 0x6c) << 0x10) >> 0x14);
  param_1->type_flags = (short)iVar6;
  local_70 = iVar7;
  uVar2 = func_0x0010c060(*(s32 *)(param_1 + 0x60),iVar6 * 0x10000 >> 0x10,param_1 + 100,
                          &local_88);
  *(s32 *)(param_1 + 0x60) = uVar2;
  iVar6 = (int)*(short *)(param_1 + 0x6e);
  if ((0x2aa < iVar6) || (iVar6 < -0x2aa)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar6 = Math_Cos((iVar6 << 10) / 0x2aa);
  iVar6 = iVar6 * 0x2aa >> 0xc;
  GTE_LoadIdentityMatrix(auStack_68);
  Math_Atan2_3(iVar6,auStack_68);
  GTE_MulMatrix3(&local_88,auStack_68);
  func_0x0010bbb8(param_1,&local_88,iVar6);
  if (0x1000 < *(short *)(param_1 + 0x6e)) {
    *(s16 *)(param_1 + 0x6e) = 0x1000;
  }
  if (*(short *)(param_1 + 0x6e) < -0x1000) {
    *(s16 *)(param_1 + 0x6e) = 0xf000;
  }
  uVar1 = *(u16 *)(param_1 + 0x6e);
  iVar3 = Math_Atan2((int)(short)local_7c,(int)(short)local_88);
  iVar6 = iVar3 - (uint)param_1->event_param;
  iVar5 = iVar6 * 0x10000 >> 0x10;
  if (iVar5 < -0x800) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x800 < iVar5) {
    iVar6 = iVar6 + -0x1000;
  }
  *(short *)(param_1 + 0x6e) = *(short *)(param_1 + 0x6e) + (*(short *)(param_1 + 0x70) >> 4);
  iVar6 = ((int)*(short *)(param_1 + 0x6c) * (iVar6 * 0x10000 >> 0x10) >> 6) * 10;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 3;
  }
  param_1->event_param = (short)iVar3;
  sVar4 = *(short *)(param_1 + 0x70) + (short)(iVar6 >> 7);
  *(short *)(param_1 + 0x70) = sVar4;
  *(short *)(param_1 + 0x70) = sVar4 + *(short *)(param_1 + 0x76) * 0xc;
  if ((int)((uint)(uVar1 ^ *(u16 *)(param_1 + 0x6e)) << 0x10) < 0) {
    iVar6 = *(short *)(param_1 + 0x70) * 3 >> 3;
    *(short *)(param_1 + 0x70) = (short)iVar6;
    if (param_1->state == '\x01') {
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (200 < iVar6) {
        Sys_CallWithParams(0,0,0x90,1);
      }
    }
  }
  if (0 < *(short *)(param_1 + 0x6e)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x70) + 0x38;
  uVar1 = *(short *)(param_1 + 0x70) - 3;
  if (*(short *)(param_1 + 0x70) < 1) {
    uVar1 = *(short *)(param_1 + 0x70) + 3;
    *(u16 *)(param_1 + 0x70) = uVar1;
    if (0 < (int)((uint)uVar1 << 0x10)) {
      *(s16 *)(param_1 + 0x70) = 0;
    }
  }
  else {
    *(u16 *)(param_1 + 0x70) = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 0) {
      *(s16 *)(param_1 + 0x70) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  uVar1 = *(u16 *)(param_1 + 0x70);
  if (-1 < (int)((uint)(uVar1 ^ *(u16 *)(param_1 + 0x6e)) << 0x10)) {
    *(u16 *)(param_1 + 0x70) = uVar1 - ((short)uVar1 >> 2);
  }
  iVar3 = Math_Cos(local_84 >> 0x12);
  iVar6 = (int)*(short *)(param_1 + 0x6e);
  if (iVar6 < 0) {
    iVar6 = -iVar6;
  }
  sVar4 = *(short *)(param_1 + 0x6c) + (short)(iVar3 * 0x29 >> 0xc);
  *(short *)(param_1 + 0x6c) = sVar4;
  if (0 < iVar6 + -0x71) {
    *(short *)(param_1 + 0x6c) = sVar4 - (short)(((iVar6 + -0x71) * 0x19) / 0x239);
    if (*(short *)(param_1 + 0x6e) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(u8 *)(param_1 + 0x72) = *(u8 *)(param_1 + 0x72) | 2;
    func_0x0010c678(param_1,0xffffff60);
    if (param_1->state == '\x01') {
      iVar6 = (uint)*(u16 *)(param_1 + 0x7a) +
              ((int)((uint)*(u16 *)(param_1 + 0x6c) << 0x10) >> 0x14);
      sVar4 = (short)iVar6;
      *(short *)(param_1 + 0x7a) = sVar4;
      if (0x4e2 < iVar6 * 0x10000 >> 0x10) {
        *(short *)(param_1 + 0x7a) = sVar4 + -0x4e2;
        Audio_PlaySoundEffect(0x82,0,0xffffffbf);
      }
    }
  }
  if ((*(u8 *)(param_1 + 0x72) & 8) != 0) {
    func_0x0010c678(param_1,0xa0);
    func_0x0010c678(param_1,0xffffff60);
    *(u8 *)(param_1 + 0x72) = *(u8 *)(param_1 + 0x72) | 6;
    if ((param_1->timer1 & 3) == 0) {
      Audio_PlaySoundEffect(0x82,0,0xffffffbf);
    }
    *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x6c) + -0x20;
  }
  if (param_1->state == '\x01') {
    iVar6 = (uint)*(u16 *)(param_1 + 0x78) +
            ((int)((uint)*(u16 *)(param_1 + 0x6c) << 0x10) >> 0x14);
    sVar4 = (short)iVar6;
    *(short *)(param_1 + 0x78) = sVar4;
    if (0x8ca < iVar6 * 0x10000 >> 0x10) {
      *(short *)(param_1 + 0x78) = sVar4 + -0x8ca;
      Audio_PlaySoundEffect(0x80,0,0xffffffec);
    }
  }
  if ((iVar7 + param_1->velocity_y + 0x8d < local_70) && (local_84 < 0)) {
    *(s16 *)(param_1 + 0x6e) = 0;
    *(s16 *)(param_1 + 0x70) = 0;
    *(u8 *)(param_1 + 0x72) = *(u8 *)(param_1 + 0x72) & 0xfe;
    param_1->velocity_y = (short)local_70 - (short)iVar7;
    func_0x0010bbb8(param_1,&local_88,0);
    param_1->gte_result = local_88;
    *(int *)(param_1 + 0x9c) = local_84;
    *(s32 *)(param_1 + 0xa0) = local_80;
    *(s32 *)(param_1 + 0xa4) = local_7c;
    *(s32 *)(param_1 + 0xa8) = local_78;
    param_1->projected_x = local_74;
    param_1->projected_y = local_70;
    param_1->projected_z = local_6c;
  }
  else {
    param_1->velocity_y = (short)local_70 - (short)iVar7;
    param_1->gte_result = local_88;
    *(int *)(param_1 + 0x9c) = local_84;
    *(s32 *)(param_1 + 0xa0) = local_80;
    *(s32 *)(param_1 + 0xa4) = local_7c;
    *(s32 *)(param_1 + 0xa8) = local_78;
    param_1->projected_x = local_74;
    param_1->projected_y = local_70;
    param_1->projected_z = local_6c;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

