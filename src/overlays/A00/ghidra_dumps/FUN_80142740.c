// FUN_80142740

/* WARNING: Control flow encountered bad instruction data */

void FUN_80142740(int param_1)

{
  undefined8 in_f22_23;
  
  *(undefined8 *)(param_1 + 0x6e82) = in_f22_23;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

