// FUN_00023290

/* WARNING: Control flow encountered bad instruction data */

void FUN_00023290(void)

{
  int in_v1;
  int in_a3;
  int unaff_s1;
  
  if (in_v1 == in_a3) {
    *(undefined1 *)(unaff_s1 + 6) = 2;
    if (DAT_800bf938 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_00040cdc();
    *(undefined1 *)(unaff_s1 + 0x70) = 1;
  }
  else if (in_v1 < 2) {
    if (in_v1 == 0) {
      if (*(char *)(unaff_s1 + 0x2b) != '\x03') {
        return;
      }
      *(char *)(unaff_s1 + 6) = (char)in_a3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (in_v1 == 2) {
    func_0x00041098();
    if (*(char *)(unaff_s1 + 0x70) != -1) {
      return;
    }
    *(undefined1 *)(unaff_s1 + 6) = 0;
    func_0x00042310();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

