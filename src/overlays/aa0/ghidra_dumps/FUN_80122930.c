// FUN_80122930

void FUN_80122930(void)

{
  int iVar1;
  int unaff_s2;
  
  if (*(char *)(unaff_s2 + 0x5f) == '\0') {
    func_0x80074590(6,4,0x1e);
    return;
  }
  *(char *)(unaff_s2 + 0x5f) = *(char *)(unaff_s2 + 0x5f) + -1;
  iVar1 = *(int *)(unaff_s2 + 0xc0);
  *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + *(short *)(iVar1 + 0x16);
  iVar1 = *(int *)(unaff_s2 + 0xc0);
  *(short *)(iVar1 + 0x16) = *(short *)(iVar1 + 0x16) + *(short *)(iVar1 + 0x12);
  if (0x180 < *(short *)(*(int *)(unaff_s2 + 0xc0) + 0x16)) {
    DAT_800bf9de = 0xf;
    *(undefined2 *)(*(int *)(unaff_s2 + 0xc0) + 0x16) = 0x180;
    *(undefined2 *)(unaff_s2 + 0x40) = 0x8c;
    *(char *)(unaff_s2 + 5) = *(char *)(unaff_s2 + 5) + '\x01';
  }
  FUN_8012babc(&DAT_800e7eac,1,2);
  return;
}

