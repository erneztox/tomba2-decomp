// FUN_8011d974

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011d974(void)

{
  undefined1 uVar1;
  uint in_v0;
  int iVar2;
  uint in_v1;
  int unaff_s0;
  int unaff_s1;
  ushort unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  *(short *)(unaff_s0 + 0x40) = (short)(in_v0 & 0x1f);
  if (in_v1 == (in_v0 & 0x1f)) {
    *(undefined2 *)(unaff_s1 + 0x76) = 2;
    return;
  }
  *(ushort *)(*(int *)(unaff_s1 + 0xc4) + 8) = unaff_s3 & 0xfff;
  FUN_801314b4();
  if (unaff_s5 != 0) {
    iVar2 = func_0x80083e80((int)(short)unaff_s3);
    iVar2 = (iVar2 * -(int)*(short *)(*(int *)(unaff_s1 + 200) + 4) >> 0xc) - unaff_s4;
    if (iVar2 * 0x10000 < 0) {
      FUN_8012fd38();
      return;
    }
    _DAT_800e7eb2 = _DAT_800e7eb2 + (short)iVar2;
  }
  if (*(short *)(unaff_s1 + 0x78) != 0) {
    uVar1 = FUN_801308e0();
    *(undefined1 *)(unaff_s0 + 6) = uVar1;
    func_0x80072efc();
    *(undefined2 *)(unaff_s0 + 0x40) = 0xf;
    FUN_80138e70();
    return;
  }
  FUN_80131578();
  return;
}

