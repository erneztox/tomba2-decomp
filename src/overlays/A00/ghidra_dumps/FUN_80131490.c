// FUN_80131490

/* WARNING: Removing unreachable block (ram,0x801314bc) */

void FUN_80131490(void)

{
  undefined1 *unaff_s2;
  
  FUN_80118974(*(undefined4 *)(unaff_s2 + 0xd0));
  FUN_8013a184();
  FUN_8013989c();
  *unaff_s2 = 1;
  *(undefined2 *)(unaff_s2 + 0x82) = 0xc0;
  unaff_s2[0x29] = 0;
  *(undefined2 *)(unaff_s2 + 0x80) = 0x60;
  *(undefined2 *)(unaff_s2 + 0x84) = 0x10;
  *(undefined2 *)(unaff_s2 + 0x86) = 0x60;
  unaff_s2[4] = unaff_s2[4] + '\x01';
  return;
}

