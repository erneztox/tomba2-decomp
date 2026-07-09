// FUN_80123088

void FUN_80123088(void)

{
  char in_v0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  int unaff_s5;
  
  *(char *)(unaff_s5 + 6) = in_v0 + '\x01';
  if (unaff_s2 < (int)(*(byte *)(unaff_s5 + 8) - 2)) {
    iVar1 = unaff_s5 + 8;
    do {
      iVar2 = *(int *)(iVar1 + 0xc0);
      *(undefined2 *)(iVar2 + 2) = 0xf448;
      *(undefined2 *)(iVar2 + 0x12) = 0;
      *(undefined2 *)(iVar2 + 0x10) = 1;
      *(undefined2 *)(iVar2 + 0x16) = 0;
      *(undefined2 *)(iVar2 + 0x14) = 0x40;
      unaff_s2 = unaff_s2 + 1;
      iVar1 = iVar1 + 4;
    } while (unaff_s2 < (int)(*(byte *)(unaff_s5 + 8) - 2));
  }
  *(undefined2 *)(unaff_s5 + 0x40) = 2;
  *(undefined2 *)(unaff_s5 + 0x42) = 0;
  *(undefined1 *)(unaff_s5 + 0x2b) = 0;
  *(undefined2 *)(unaff_s5 + 0x60) = 0;
  FUN_8012c6ac();
  return;
}

