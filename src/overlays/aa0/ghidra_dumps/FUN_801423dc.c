// FUN_801423dc

/* WARNING: Control flow encountered bad instruction data */

void FUN_801423dc(void)

{
  int unaff_gp;
  undefined8 in_f22_23;
  
  *(undefined8 *)(unaff_gp + 0x6e82) = in_f22_23;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

