// FUN_8011cda4

/* WARNING: Removing unreachable block (ram,0x80125d64) */

void FUN_8011cda4(void)

{
  undefined2 in_v0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s1 + 0x44) = in_v0;
  *(undefined1 *)(unaff_s1 + 0x5f) = 1;
  *(undefined2 *)(unaff_s1 + 0x78) = 0x8002;
  if (*(short *)(unaff_s1 + 0x48) < 1) {
    if (*(short *)(unaff_s1 + 0x48) < 0) {
      *(undefined2 *)(unaff_s1 + 0x4e) = 0x80;
    }
    if (*(char *)(unaff_s1 + 3) == '\0') {
      func_0x80146348();
    }
    if (*(char *)(unaff_s1 + 1) != '\0') {
      FUN_8012e8a8();
    }
    *(undefined1 *)(unaff_s1 + 0x2b) = 0;
    FUN_8012ed70();
    return;
  }
  FUN_8012ed28();
  return;
}

