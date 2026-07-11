// FUN_80115b88

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011f07c) */
/* WARNING: Removing unreachable block (ram,0x80127e08) */
/* WARNING: Removing unreachable block (ram,0x80127e18) */
/* WARNING: Removing unreachable block (ram,0x02002820) */
/* WARNING: Removing unreachable block (ram,0x80128160) */
/* WARNING: Removing unreachable block (ram,0x8012817c) */
/* WARNING: Removing unreachable block (ram,0x80127dec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80115b88(void)

{
  undefined2 in_v0;
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s2;
  undefined1 unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined2 in_lo;
  undefined8 uVar4;
  
  *(undefined2 *)(unaff_s0 + 0x40) = in_v0;
  func_0x80048750();
  sVar1 = FUN_8011fd94();
  iVar3 = (int)_DAT_1f8001a0;
  *(short *)(unaff_s0 + 0x66) = sVar1;
  uVar4 = func_0x80077768(iVar3,(int)sVar1,1);
  sVar1 = _DAT_1f8001a0;
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 == 0) {
    *(ushort *)(unaff_s0 + 0x66) = _DAT_1f8001a0 + 0x800U & 0xfff;
    uVar2 = FUN_801214ac();
    *(undefined2 *)(unaff_s0 + 0x50) = uVar2;
    *(undefined2 *)(unaff_s0 + 0x44) = 0x800;
    *(undefined2 *)(unaff_s0 + 0x42) = 1;
    *(undefined2 *)(unaff_s0 + 0x68) = 0;
    *(undefined1 *)(unaff_s0 + 6) = 2;
    *(undefined1 *)(unaff_s0 + 0x29) = 0;
    FUN_801280d4();
    return;
  }
  *(short *)(unaff_s0 + 0x66) = _DAT_1f8001a0;
  if (iVar3 == 0) {
    trap(0x1c00);
  }
  if ((iVar3 == -1) && (unaff_s2 == -0x80000000)) {
    trap(0x1800);
  }
  *(ushort *)(unaff_s5 + 0x56) = sVar1 + 0x800U & 0xfff;
  *(undefined2 *)(unaff_s4 + 0x40) = 0x40;
  *(undefined2 *)(unaff_s4 + 0x4a) = 0xd000;
  *(short *)(unaff_s4 + 0x4e) = (short)unaff_s0;
  *(undefined2 *)(unaff_s4 + 0x50) = 0;
  *(undefined2 *)(unaff_s4 + 0x52) = in_lo;
  _DAT_800e8076 = 0xff00;
  _DAT_800e8078 = 0;
  _DAT_800e8074 = 0xfa88;
  DAT_800e806c = unaff_s3;
  func_0x80074590(0x25,0,0);
  return;
}

