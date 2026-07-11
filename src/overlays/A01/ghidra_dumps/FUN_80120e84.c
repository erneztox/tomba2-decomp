// FUN_80120e84

void FUN_80120e84(void)

{
  short sVar1;
  int iVar2;
  int unaff_s0;
  
  sVar1 = *(short *)(unaff_s0 + 0x7a);
  *(short *)(unaff_s0 + 0x7a) = sVar1 + -1;
  if (sVar1 == 1) {
    *(undefined1 *)(unaff_s0 + 7) = 0;
  }
  if (*(char *)(unaff_s0 + 0x5e) == '\x01') {
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(undefined2 *)(unaff_s0 + 0x78);
    if ((*(char *)(unaff_s0 + 3) == '\a') && ((DAT_800bf9fd & 1) == 0)) {
      iVar2 = func_0x8005308c();
      if (iVar2 != 0) {
        func_0x80042354(1,1);
        func_0x80040b48(0xb);
        FUN_8012a00c();
        return;
      }
    }
    else {
      if ((*(char *)(unaff_s0 + 3) != '\b') || ((DAT_800bf9fd & 2) != 0)) {
        FUN_8012a00c();
        return;
      }
      iVar2 = func_0x8005308c();
      if (iVar2 != 0) {
        func_0x80042354(1,1);
        func_0x80040b48(0xb);
        FUN_8012a00c();
        return;
      }
    }
  }
  if (*(short *)(unaff_s0 + 0x4a) != 0) {
    FUN_8012997c();
  }
  return;
}

