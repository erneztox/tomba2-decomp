// FUN_8011a8e4

void FUN_8011a8e4(void)

{
  char cVar1;
  int iVar2;
  int unaff_s0;
  int unaff_s1;
  
  iVar2 = *(int *)(unaff_s0 + 0x10);
  *(undefined2 *)(unaff_s0 + 0x2e) = *(undefined2 *)(iVar2 + 0x2e);
  *(undefined2 *)(unaff_s0 + 0x32) = *(undefined2 *)(iVar2 + 0x32);
  *(undefined2 *)(unaff_s0 + 0x36) = *(undefined2 *)(iVar2 + 0x36);
  cVar1 = *(char *)(iVar2 + 1);
  *(char *)(unaff_s0 + 1) = cVar1;
  if (cVar1 != '\0') {
    func_0x80077e7c();
  }
  iVar2 = *(int *)(unaff_s0 + 0x14);
  *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(unaff_s0 + 0x2e);
  *(short *)(iVar2 + 0x2e) = *(short *)(unaff_s0 + 0x32) + -0x40;
  *(undefined2 *)(iVar2 + 0x30) = *(undefined2 *)(unaff_s0 + 0x36);
  *(undefined2 *)(unaff_s1 + 0x84) = 0xb4;
  *(undefined2 *)(unaff_s1 + 0x86) = 0xb4;
  *(undefined1 *)(unaff_s1 + 0x29) = 0;
  *(undefined1 *)(unaff_s1 + 0x2b) = 0;
  *(char *)(unaff_s1 + 4) = *(char *)(unaff_s1 + 4) + '\x01';
  if (*(char *)(unaff_s1 + 0x5e) == '\0') {
    *(undefined1 *)(unaff_s1 + 5) = 4;
  }
  *(short *)(unaff_s1 + 0x84) = *(short *)(unaff_s1 + 0x84) << 1;
  *(short *)(unaff_s1 + 0x86) = *(short *)(unaff_s1 + 0x86) << 1;
  FUN_8012cb14();
  return;
}

