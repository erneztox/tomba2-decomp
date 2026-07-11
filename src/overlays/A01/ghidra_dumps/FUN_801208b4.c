// FUN_801208b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x801298a8) */

void FUN_801208b4(void)

{
  undefined1 in_v0;
  int in_v1;
  int in_a3;
  int *in_t2;
  int unaff_s0;
  undefined4 uStackX_8;
  
  *(int *)(in_v1 + 0x10) = unaff_s0;
  *(undefined1 *)(in_v1 + 3) = in_v0;
  *(undefined1 *)(in_v1 + 0x2a) = *(undefined1 *)(unaff_s0 + 0x2a);
  *(undefined2 *)(unaff_s0 + 0x74) = 0xc;
  if (in_a3 <= uStackX_8) {
    *in_t2 = uStackX_8 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

