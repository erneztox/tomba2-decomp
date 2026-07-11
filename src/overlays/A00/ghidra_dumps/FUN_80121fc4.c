// FUN_80121fc4

void FUN_80121fc4(void)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int unaff_s2;
  
  if (in_v1 == in_v0) {
    iVar1 = func_0x80072ddc(*(undefined4 *)(unaff_s2 + 0xc0),0x82,3);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0x80129c00;
      *(undefined1 *)(iVar1 + 3) = 3;
      *(undefined2 *)(iVar1 + 0x54) = 0;
      *(undefined2 *)(iVar1 + 0x56) = 0;
      *(undefined2 *)(iVar1 + 0x58) = 0;
    }
    *(undefined1 *)(unaff_s2 + 6) = 0;
    FUN_8012be30();
    return;
  }
  return;
}

