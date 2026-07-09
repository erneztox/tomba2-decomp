// FUN_801316cc

void FUN_801316cc(void)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s2;
  
  if (in_v0 == 0) {
    func_0x800517f8();
    iVar1 = 0;
    iVar2 = unaff_s2;
    if (*(char *)(unaff_s2 + 8) != '\0') {
      do {
        *(undefined1 *)(*(int *)(iVar2 + 0xc0) + 0x3f) = *(undefined1 *)(unaff_s2 + 1);
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar1 < (int)(uint)*(byte *)(unaff_s2 + 8));
    }
    *(undefined1 *)(unaff_s2 + 0x29) = 0;
    FUN_80139a70();
  }
  else {
    *(undefined1 *)(unaff_s2 + 6) = 0;
    if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
      FUN_801436a4();
      return;
    }
    *(uint *)(unaff_s0 + 0x2c) =
         *(int *)(unaff_s0 + 0x2c) + (*(byte *)(unaff_s2 + 5) + 1) * unaff_s2;
    *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + *(short *)(unaff_s0 + 0x4c) * unaff_s2;
  }
  return;
}

