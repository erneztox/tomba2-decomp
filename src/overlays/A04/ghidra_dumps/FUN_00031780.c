// FUN_00031780

/* WARNING: Control flow encountered bad instruction data */

void FUN_00031780(void)

{
  int in_v1;
  int unaff_s0;
  
  *(byte *)(in_v1 + 0xc9) = *(byte *)(in_v1 + 0xc9) | 0x40;
  *(char *)(unaff_s0 + 0x5e) = *(char *)(unaff_s0 + 0x5e) + '\x01';
  *(undefined1 *)(unaff_s0 + 5) = 0;
  *(undefined1 *)(unaff_s0 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

