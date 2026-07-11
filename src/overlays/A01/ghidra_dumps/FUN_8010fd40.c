// FUN_8010fd40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010fd40(void)

{
  ushort uVar1;
  short sVar2;
  int in_v0;
  int iVar3;
  int in_v1;
  int unaff_s1;
  
  iVar3 = in_v0 - in_v1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  uVar1 = *(ushort *)(unaff_s1 + 0x42);
  *(short *)(unaff_s1 + 0x4e) = *(short *)(unaff_s1 + 0x4e) + (short)(iVar3 >> 4);
  *(ushort *)(unaff_s1 + 0x42) = uVar1 - 1;
  if ((int)((uint)uVar1 << 0x10) < 1) {
    *(undefined1 *)(unaff_s1 + 7) = 0;
    FUN_80118ed8();
    return;
  }
  FUN_80116620();
  func_0x8004766c();
  func_0x80049760();
  *(undefined2 *)(unaff_s1 + 100) = _DAT_1f8001a0;
  iVar3 = func_0x800493e8();
  if ((iVar3 != 0) || (iVar3 = func_0x80049250(), iVar3 != 0)) {
    *(undefined1 *)(unaff_s1 + 5) = 0;
    *(undefined1 *)(unaff_s1 + 6) = 0;
  }
  *(undefined1 *)(unaff_s1 + 0x29) = 0;
  sVar2 = FUN_80117188();
  if (sVar2 != 0) {
    *(char *)(unaff_s1 + 5) = (char)sVar2;
    FUN_801208b4();
    if ((*(char *)(unaff_s1 + 3) == '\0') && (unaff_s1 != -0x60)) {
      *(undefined1 *)(unaff_s1 + 5) = 0;
      *(undefined1 *)(unaff_s1 + 6) = 0;
      *(undefined1 *)(unaff_s1 + 7) = 0;
    }
    return;
  }
  return;
}

