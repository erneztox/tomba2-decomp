// FUN_80138a64

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80138ac8) */
/* WARNING: Removing unreachable block (ram,0x80138ad8) */
/* WARNING: Removing unreachable block (ram,0x80138ae8) */
/* WARNING: Removing unreachable block (ram,0x80138af8) */

undefined4 FUN_80138a64(void)

{
  uint in_v0;
  int unaff_s2;
  
  if ((in_v0 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(unaff_s2 + 0x32) = *(short *)(unaff_s2 + 0x32) + 0x10;
  FUN_801406e4();
  return 0xffffffff;
}

