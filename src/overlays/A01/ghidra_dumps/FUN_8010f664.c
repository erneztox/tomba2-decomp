// FUN_8010f664

void FUN_8010f664(void)

{
  int in_v0;
  int unaff_s0;
  int unaff_s1;
  
  if (in_v0 >> 0x10 != 0) {
    *(char *)(unaff_s1 + 5) = (char)((uint)in_v0 >> 0x10);
    FUN_801208b4();
    if ((*(char *)(unaff_s1 + 3) == '\0') && (unaff_s0 != 0)) {
      *(undefined1 *)(unaff_s1 + 5) = 0;
      *(undefined1 *)(unaff_s1 + 6) = 0;
      *(undefined1 *)(unaff_s1 + 7) = 0;
    }
    return;
  }
  return;
}

