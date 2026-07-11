// FUN_801314b4

void FUN_801314b4(void)

{
  int in_v0;
  undefined1 *unaff_s2;
  
  if (in_v0 == 0) {
    *unaff_s2 = 1;
    *(undefined2 *)(unaff_s2 + 0x82) = 0xc0;
    unaff_s2[0x29] = 0;
    *(undefined2 *)(unaff_s2 + 0x80) = 0x60;
    *(undefined2 *)(unaff_s2 + 0x84) = 0x10;
    *(undefined2 *)(unaff_s2 + 0x86) = 0x60;
    unaff_s2[4] = unaff_s2[4] + '\x01';
  }
  else {
    unaff_s2[4] = 3;
  }
  return;
}

