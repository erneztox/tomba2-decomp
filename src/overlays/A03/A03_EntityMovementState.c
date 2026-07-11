// A03_EntityMovementState - Entity movement: GTE + Entity_AnimFrame + velocity

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_EntityMovementState(int param_1)

{
  short sVar1;
  short sVar2;
  u16 uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  u8 auStack_80->counter1;
  u8 auStack_78 [32];
  short local_58;
  short local_56;
  short local_54;
  u8 auStack_50 [32];
  int local_30;
  
  iVar7 = (int)((uint)*(u16 *)(param_1 + 0x6c) << 0x10) >> 0x14;
  iVar13 = param_1->type_flags + iVar7;
  if ((*(u8 *)(param_1 + 0x72) & 1) == 0) {
    func_0x0010c36c(*(s32 *)(param_1 + 0x60),iVar13 + 1000,&local_58,auStack_50);
    iVar7 = (uint)_DAT_800e8042 + ((int)local_58 - (int)(short)_DAT_800e8042 >> 2);
    _DAT_800e8042 = (u16)iVar7;
    iVar12 = (uint)_DAT_800e804a + ((int)local_54 - (int)(short)_DAT_800e804a >> 2);
    _DAT_800e804a = (u16)iVar12;
    iVar13 = (uint)_DAT_800e8046 +
             ((*(short *)(param_1 + 0x32) + _DAT_8011c0dc) - (int)(short)_DAT_800e8046 >> 2);
    _DAT_800e8046 = (u16)iVar13;
    uVar3 = param_1->velocity_y;
    iVar11 = _DAT_8011c0d8 * 8;
    _g_GTE_Matrix01 =
         *(short *)(&DAT_8011bcd8 + iVar11) +
         (short)((iVar7 * 0x10000 >> 0x10) - (int)*(short *)(&DAT_8011bcd8 + iVar11) >> 3);
    iVar7 = (uint)*(u16 *)(iVar11 + -0x7fee4326) + (uint)_DAT_8011bae8;
    _g_GTE_Matrix10 =
         (short)iVar7 + (short)((iVar13 * 0x10000 >> 0x10) - (iVar7 * 0x10000 >> 0x10) >> 3);
    _g_GTE_Matrix12 =
         *(short *)(&DAT_8011bcdc + iVar11) +
         (short)((iVar12 * 0x10000 >> 0x10) - (int)*(short *)(&DAT_8011bcdc + iVar11) >> 3);
    iVar7 = _DAT_8011c0d8 * 8;
    *(s16 *)(&DAT_8011bcd8 + iVar7) = param_1->pos_y;
    *(s16 *)(iVar7 + -0x7fee4326) = *(s16 *)(param_1 + 0x32);
    *(s16 *)(&DAT_8011bcdc + iVar7) = param_1->pos_z;
    _DAT_8011c0d8 = _DAT_8011c0d8 + 1 & 7;
    _DAT_8011c0dc = _DAT_8011c0dc + (((int)((uint)uVar3 << 0x10) >> 0x14) * 3 - _DAT_8011c0dc) / 2;
    return;
  }
  func_0x0010c060(*(s32 *)(param_1 + 0x60),iVar13 + iVar7 + 1000,&local_58,auStack_50);
  _DAT_800e8042 = local_58;
  _DAT_800e8046 = local_56 + _DAT_8011c0dc;
  _DAT_800e804a = local_54;
  sVar1 = *(short *)(param_1 + 0x32);
  iVar11 = (int)param_1->pos_y + (*(short *)(param_1 + 0x98) * -200 >> 0xc);
  iVar12 = (int)param_1->pos_z + (*(short *)(param_1 + 0xa4) * -200 >> 0xc);
  uVar5 = *(uint *)(param_1 + 0x60);
  if (((uVar5 < 0x80114f98) || (0x80115568 < uVar5)) &&
     ((uVar5 < 0x80117548 || (0x80117908 < uVar5)))) {
    sVar4 = *(short *)(param_1 + 0x9e);
    iVar8 = (int)local_58 - (int)param_1->pos_y;
    iVar9 = (int)local_56 - (int)*(short *)(param_1 + 0x32);
    iVar10 = (int)local_54 - (int)param_1->pos_z;
    local_30 = -iVar7;
    uVar5 = Math_Sqrt(iVar8 * iVar8 + iVar9 * iVar9 + iVar10 * iVar10);
    uVar5 = uVar5 & 0xffff;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    if ((uVar5 == 0xffffffff) && (iVar8 * -1000 == -0x80000000)) {
      trap(0x1800);
    }
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    if ((uVar5 == 0xffffffff) && (iVar9 * -1000 == -0x80000000)) {
      trap(0x1800);
    }
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    if ((uVar5 == 0xffffffff) && (iVar10 * -1000 == -0x80000000)) {
      trap(0x1800);
    }
    sVar2 = param_1->pos_z;
    iVar8 = iVar11 + (iVar8 * -1000) / (int)uVar5 + (int)param_1->pos_y >> 1;
    iVar11 = (int)sVar1 + (sVar4 * -200 >> 9) +
             (iVar9 * -1000) / (int)uVar5 + (int)*(short *)(param_1 + 0x32) >> 1;
    func_0x0010c060(*(uint *)(param_1 + 0x60),iVar13 + -0x5dc,auStack_80,auStack_78);
    iVar7 = _DAT_8011c0d8 * 8;
    sVar1 = *(short *)(&DAT_8011bcd8 + iVar7);
    sVar4 = *(short *)(iVar7 + -0x7fee4326) + _DAT_8011bae8;
    _g_GTE_Matrix12 = *(short *)(&DAT_8011bcdc + iVar7);
    uVar6 = *(uint *)(param_1 + 0x60);
    if (((int)((uVar6 + 0x7feee4b8) * -0x55555555) >> 4) - 0xfdU < 0xb) {
      iVar11 = iVar11 + -200;
    }
    if (((uVar6 < 0x80114f98) || (0x80115568 < uVar6)) &&
       ((uVar6 < 0x80117548 || (0x80117908 < uVar6)))) {
      _g_GTE_Matrix01 = sVar1 + (short)(iVar8 - sVar1 >> 3);
      _g_GTE_Matrix10 = sVar4 + (short)(iVar11 - sVar4 >> 3);
      _g_GTE_Matrix12 =
           _g_GTE_Matrix12 +
           (short)((iVar12 + (iVar10 * -1000) / (int)uVar5 + (int)sVar2 >> 1) - (int)_g_GTE_Matrix12
                  >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _g_GTE_Matrix01 = sVar1 + (short)(iVar8 - sVar1 >> 4);
    _g_GTE_Matrix10 = sVar4 + (short)(iVar11 - sVar4 >> 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800e8042 = local_58 + (short)(iVar11 - local_58 >> 2);
  _DAT_800e804a = local_54 + (short)(iVar12 - local_54 >> 2);
  _DAT_800e8046 =
       _DAT_800e8046 + (short)((int)*(short *)(param_1 + 0x32) - (int)(short)_DAT_800e8046 >> 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

