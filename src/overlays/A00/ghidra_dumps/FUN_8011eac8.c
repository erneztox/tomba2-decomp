// FUN_8011eac8

/* WARNING: Removing unreachable block (ram,0x8011eb84) */
/* WARNING: Removing unreachable block (ram,0x8011eb50) */
/* WARNING: Removing unreachable block (ram,0x8011eb1c) */
/* WARNING: Removing unreachable block (ram,0x8011eb2c) */
/* WARNING: Removing unreachable block (ram,0x8011eb34) */
/* WARNING: Removing unreachable block (ram,0x8011eb60) */
/* WARNING: Removing unreachable block (ram,0x8011eb68) */
/* WARNING: Removing unreachable block (ram,0x8011eb94) */
/* WARNING: Removing unreachable block (ram,0x8011eb9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011eac8(void)

{
  ushort uVar1;
  char in_v0;
  short sVar2;
  int unaff_s0;
  int iVar3;
  int unaff_s2;
  int iVar4;
  undefined1 unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  *(char *)(unaff_s4 + 6) = in_v0 + '\x01';
  iVar4 = (int)((unaff_s2 - (uint)*(ushort *)(unaff_s5 + 0x36)) * 0x10000) >> 0x10;
  iVar3 = (int)((unaff_s0 - (uint)*(ushort *)(unaff_s5 + 0x2e)) * 0x10000) >> 0x10;
  uVar1 = *(ushort *)(unaff_s5 + 0x32);
  sVar2 = func_0x80085690(-iVar4,iVar3);
  *(ushort *)(unaff_s5 + 0x56) = sVar2 + 0x800U & 0xfff;
  *(undefined2 *)(unaff_s4 + 0x40) = 0x40;
  *(undefined2 *)(unaff_s4 + 0x4a) = 0xd000;
  *(short *)(unaff_s4 + 0x4e) = (short)((iVar3 << 8) / 0x40);
  *(short *)(unaff_s4 + 0x50) = (short)(((int)((-0x56c - (uint)uVar1) * 0x10000) >> 8) / 0x40);
  *(short *)(unaff_s4 + 0x52) = (short)((iVar4 << 8) / 0x40);
  _DAT_800e8076 = 0xff00;
  _DAT_800e8078 = 0;
  _DAT_800e8074 = 0xfa88;
  DAT_800e806c = unaff_s3;
  func_0x80074590(0x25,0,0);
  return;
}

