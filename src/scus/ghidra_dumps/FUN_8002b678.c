
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Instruction at (ram,0x8002b774) overlaps instruction at (ram,0x8002b770)
    */

void FUN_8002b678(void)

{
  int in_at;
  
  if (in_at == 0) {
code_r0x8002b6a0:
    if (in_at == 0) goto code_r0x8002b6c8;
code_r0x8002b6a8:
    if (in_at == 0) goto code_r0x8002b6d0;
code_r0x8002b6b0:
    if (in_at == 0) goto code_r0x8002b6d8;
code_r0x8002b6b8:
    if (in_at != 0) goto code_r0x8002b6c0;
code_r0x8002b6e0:
    if (in_at == 0) goto code_r0x8002b708;
code_r0x8002b6e8:
    if (in_at == 0) goto code_r0x8002b710;
code_r0x8002b6f0:
    if (in_at == 0) goto code_r0x8002b718;
code_r0x8002b6f8:
    if (in_at != 0) goto code_r0x8002b700;
code_r0x8002b720:
    if (in_at == 0) goto code_r0x8002b748;
code_r0x8002b728:
    if (in_at == 0) goto code_r0x8002b750;
code_r0x8002b730:
    if (in_at == 0) goto code_r0x8002b758;
code_r0x8002b738:
    if (in_at != 0) goto code_r0x8002b740;
code_r0x8002b760:
    if (in_at == 0) {
      halt_baddata();
    }
code_r0x8002b768:
    if (in_at == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
code_r0x8002b770:
    if (in_at == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  }
  else {
    if (in_at == 0) goto code_r0x8002b6a8;
    if (in_at == 0) goto code_r0x8002b6b0;
    if (in_at == 0) goto code_r0x8002b6b8;
    if (in_at != 0) goto code_r0x8002b6a0;
code_r0x8002b6c0:
    if (in_at == 0) goto code_r0x8002b6e8;
code_r0x8002b6c8:
    if (in_at == 0) goto code_r0x8002b6f0;
code_r0x8002b6d0:
    if (in_at == 0) goto code_r0x8002b6f8;
code_r0x8002b6d8:
    if (in_at != 0) goto code_r0x8002b6e0;
code_r0x8002b700:
    if (in_at == 0) goto code_r0x8002b728;
code_r0x8002b708:
    if (in_at == 0) goto code_r0x8002b730;
code_r0x8002b710:
    if (in_at == 0) goto code_r0x8002b738;
code_r0x8002b718:
    if (in_at != 0) goto code_r0x8002b720;
code_r0x8002b740:
    if (in_at == 0) goto code_r0x8002b768;
code_r0x8002b748:
    if (in_at == 0) goto code_r0x8002b770;
code_r0x8002b750:
    if (in_at != 0) {
code_r0x8002b758:
      if (in_at == 0) goto LAB_8002b780;
      goto code_r0x8002b760;
    }
  }
  if (in_at == 0) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
LAB_8002b780:
  if (in_at != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

