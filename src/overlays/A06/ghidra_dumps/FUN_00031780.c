// FUN_00031780

/* WARNING: Control flow encountered bad instruction data */

void FUN_00031780(undefined4 param_1)

{
  int unaff_s0;
  undefined1 unaff_s1;
  
  *(char *)(unaff_s0 + 7) = *(char *)(unaff_s0 + 7) + '\x01';
  FUN_00040cdc(param_1,0x8014d014,0x8014a2b0);
  *(undefined1 *)(unaff_s0 + 0x70) = unaff_s1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

