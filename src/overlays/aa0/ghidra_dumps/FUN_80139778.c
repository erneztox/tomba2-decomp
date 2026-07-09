// FUN_80139778

void FUN_80139778(void)

{
  int in_v0;
  int in_v1;
  int unaff_s1;
  
  if (in_v1 == in_v0) {
    FUN_80142740();
    return;
  }
  if (in_v1 != 10) {
    *(undefined2 *)(unaff_s1 + 0x40) = 0x2d;
    FUN_80142750();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_801402b8();
}

