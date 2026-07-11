// FUN_080139ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080139ac(int param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
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
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [32];
  short local_58;
  short local_56;
  short local_54;
  undefined1 auStack_50 [32];
  int local_30;
  
  iVar7 = (int)((uint)*(ushort *)(param_1 + 0x6c) << 0x10) >> 0x14;
  iVar13 = *(short *)(param_1 + 0x6a) + iVar7;
  if ((*(byte *)(param_1 + 0x72) & 1) == 0) {
    func_0x0010c36c(*(undefined4 *)(param_1 + 0x60),iVar13 + 1000,&local_58,auStack_50);
    iVar7 = (uint)_DAT_800e8042 + ((int)local_58 - (int)(short)_DAT_800e8042 >> 2);
    _DAT_800e8042 = (ushort)iVar7;
    iVar12 = (uint)_DAT_800e804a + ((int)local_54 - (int)(short)_DAT_800e804a >> 2);
    _DAT_800e804a = (ushort)iVar12;
    iVar13 = (uint)_DAT_800e8046 +
             ((*(short *)(param_1 + 0x32) + _DAT_8011c0dc) - (int)(short)_DAT_800e8046 >> 2);
    _DAT_800e8046 = (ushort)iVar13;
    uVar3 = *(ushort *)(param_1 + 0x4a);
    iVar11 = _DAT_8011c0d8 * 8;
    _DAT_1f8000d2 =
         *(short *)(&DAT_8011bcd8 + iVar11) +
         (short)((iVar7 * 0x10000 >> 0x10) - (int)*(short *)(&DAT_8011bcd8 + iVar11) >> 3);
    iVar7 = (uint)*(ushort *)(iVar11 + -0x7fee4326) + (uint)_DAT_8011bae8;
    _DAT_1f8000d6 =
         (short)iVar7 + (short)((iVar13 * 0x10000 >> 0x10) - (iVar7 * 0x10000 >> 0x10) >> 3);
    _DAT_1f8000da =
         *(short *)(&DAT_8011bcdc + iVar11) +
         (short)((iVar12 * 0x10000 >> 0x10) - (int)*(short *)(&DAT_8011bcdc + iVar11) >> 3);
    iVar7 = _DAT_8011c0d8 * 8;
    *(undefined2 *)(&DAT_8011bcd8 + iVar7) = *(undefined2 *)(param_1 + 0x2e);
    *(undefined2 *)(iVar7 + -0x7fee4326) = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(&DAT_8011bcdc + iVar7) = *(undefined2 *)(param_1 + 0x36);
    _DAT_8011c0d8 = _DAT_8011c0d8 + 1 & 7;
    _DAT_8011c0dc = _DAT_8011c0dc + (((int)((uint)uVar3 << 0x10) >> 0x14) * 3 - _DAT_8011c0dc) / 2;
    return;
  }
  func_0x0010c060(*(undefined4 *)(param_1 + 0x60),iVar13 + iVar7 + 1000,&local_58,auStack_50);
  _DAT_800e8042 = local_58;
  _DAT_800e8046 = local_56 + _DAT_8011c0dc;
  _DAT_800e804a = local_54;
  sVar1 = *(short *)(param_1 + 0x32);
  iVar11 = (int)*(short *)(param_1 + 0x2e) + (*(short *)(param_1 + 0x98) * -200 >> 0xc);
  iVar12 = (int)*(short *)(param_1 + 0x36) + (*(short *)(param_1 + 0xa4) * -200 >> 0xc);
  uVar5 = *(uint *)(param_1 + 0x60);
  if (((uVar5 < 0x80114f98) || (0x80115568 < uVar5)) &&
     ((uVar5 < 0x80117548 || (0x80117908 < uVar5)))) {
    sVar4 = *(short *)(param_1 + 0x9e);
    iVar8 = (int)local_58 - (int)*(short *)(param_1 + 0x2e);
    iVar9 = (int)local_56 - (int)*(short *)(param_1 + 0x32);
    iVar10 = (int)local_54 - (int)*(short *)(param_1 + 0x36);
    local_30 = -iVar7;
    uVar5 = func_0x00077fb0(iVar8 * iVar8 + iVar9 * iVar9 + iVar10 * iVar10);
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
    sVar2 = *(short *)(param_1 + 0x36);
    iVar8 = iVar11 + (iVar8 * -1000) / (int)uVar5 + (int)*(short *)(param_1 + 0x2e) >> 1;
    iVar11 = (int)sVar1 + (sVar4 * -200 >> 9) +
             (iVar9 * -1000) / (int)uVar5 + (int)*(short *)(param_1 + 0x32) >> 1;
    func_0x0010c060(*(uint *)(param_1 + 0x60),iVar13 + -0x5dc,auStack_80,auStack_78);
    iVar7 = _DAT_8011c0d8 * 8;
    sVar1 = *(short *)(&DAT_8011bcd8 + iVar7);
    sVar4 = *(short *)(iVar7 + -0x7fee4326) + _DAT_8011bae8;
    _DAT_1f8000da = *(short *)(&DAT_8011bcdc + iVar7);
    uVar6 = *(uint *)(param_1 + 0x60);
    if (((int)((uVar6 + 0x7feee4b8) * -0x55555555) >> 4) - 0xfdU < 0xb) {
      iVar11 = iVar11 + -200;
    }
    if (((uVar6 < 0x80114f98) || (0x80115568 < uVar6)) &&
       ((uVar6 < 0x80117548 || (0x80117908 < uVar6)))) {
      _DAT_1f8000d2 = sVar1 + (short)(iVar8 - sVar1 >> 3);
      _DAT_1f8000d6 = sVar4 + (short)(iVar11 - sVar4 >> 3);
      _DAT_1f8000da =
           _DAT_1f8000da +
           (short)((iVar12 + (iVar10 * -1000) / (int)uVar5 + (int)sVar2 >> 1) - (int)_DAT_1f8000da
                  >> 3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f8000d2 = sVar1 + (short)(iVar8 - sVar1 >> 4);
    _DAT_1f8000d6 = sVar4 + (short)(iVar11 - sVar4 >> 4);
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

