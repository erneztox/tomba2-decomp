// FUN_8010aa08

void FUN_8010aa08(void)

{
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  if (unaff_s1 == unaff_s2) {
    FUN_8011de34();
    FUN_8011dc4c();
    *(char *)(unaff_s0 + 5) = (char)unaff_s1;
    *(undefined1 *)(unaff_s0 + 6) = 0;
  }
  return;
}

