// FUN_8010f240

void FUN_8010f240(void)

{
  short sVar1;
  int unaff_s0;
  int unaff_s1;
  
  sVar1 = FUN_80117188();
  if (sVar1 != 0) {
    *(char *)(unaff_s1 + 5) = (char)sVar1;
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

