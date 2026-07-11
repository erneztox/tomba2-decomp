// FUN_8011408c

void FUN_8011408c(void)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int in_v1;
  int iVar4;
  int unaff_s0;
  short unaff_s1;
  undefined2 uStack00000012;
  undefined2 uStack00000016;
  undefined2 uStack0000001a;
  
  if (in_v1 == 1) {
    FUN_8011d044();
    return;
  }
  iVar4 = *(int *)(unaff_s0 + 0xd0);
  uStack00000012 = *(undefined2 *)(iVar4 + 0x2c);
  uStack00000016 = *(undefined2 *)(iVar4 + 0x30);
  uStack0000001a = *(undefined2 *)(iVar4 + 0x34);
  func_0x8003116c(0xe,&stack0x00000010,0);
  sVar2 = *(short *)(unaff_s0 + 0x40);
  *(short *)(unaff_s0 + 0x40) = sVar2 + -1;
  if (sVar2 == 1) {
    cVar3 = *(char *)(unaff_s0 + 0x18) + '\f';
    if (unaff_s1 == 0) {
      cVar3 = *(char *)(unaff_s0 + 0x18) + '\b';
    }
    *(char *)(unaff_s0 + 0x1a) = cVar3;
    bVar1 = *(byte *)(unaff_s0 + 0x1a);
    *(byte *)(unaff_s0 + 0x19) = bVar1;
    *(byte *)(unaff_s0 + 0x18) = bVar1;
    if ((int)((uint)bVar1 << 0x18) < 0) {
      *(undefined1 *)(unaff_s0 + 0x1a) = 0x7f;
      *(undefined1 *)(unaff_s0 + 0x19) = 0x7f;
      *(undefined1 *)(unaff_s0 + 0x18) = 0x7f;
      *(undefined1 *)(unaff_s0 + 0x70) = 2;
      *(byte *)(unaff_s0 + 0xd) = *(byte *)(unaff_s0 + 0xd) & 0xfd;
      *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
      FUN_8011d0f4();
      return;
    }
    *(undefined2 *)(unaff_s0 + 0x40) = 5;
  }
  return;
}

