// FUN_8010fd5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010fd5c(short param_1)

{
  short in_v0;
  short sVar1;
  int iVar2;
  ushort in_v1;
  int unaff_s1;
  
  *(short *)(unaff_s1 + 0x4e) = param_1 + in_v0;
  *(ushort *)(unaff_s1 + 0x42) = in_v1 - 1;
  if ((int)((uint)in_v1 << 0x10) < 1) {
    *(undefined1 *)(unaff_s1 + 7) = 0;
    FUN_80118ed8();
    return;
  }
  FUN_80116620();
  func_0x8004766c();
  func_0x80049760();
  *(undefined2 *)(unaff_s1 + 100) = _DAT_1f8001a0;
  iVar2 = func_0x800493e8();
  if ((iVar2 != 0) || (iVar2 = func_0x80049250(), iVar2 != 0)) {
    *(undefined1 *)(unaff_s1 + 5) = 0;
    *(undefined1 *)(unaff_s1 + 6) = 0;
  }
  *(undefined1 *)(unaff_s1 + 0x29) = 0;
  sVar1 = FUN_80117188();
  if (sVar1 != 0) {
    *(char *)(unaff_s1 + 5) = (char)sVar1;
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

