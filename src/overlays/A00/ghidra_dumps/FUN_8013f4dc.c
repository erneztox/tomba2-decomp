// FUN_8013f4dc

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013f4dc(void)

{
  int in_k0;
  undefined8 in_f10_11;
  
  *(undefined8 *)(in_k0 + 0x4f00) = in_f10_11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

