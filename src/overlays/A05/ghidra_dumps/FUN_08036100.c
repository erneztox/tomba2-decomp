// FUN_08036100

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036100(void)

{
  int in_v1;
  int unaff_s2;
  
  if (in_v1 != 0) {
    *(byte *)(in_v1 + 0x28) = *(byte *)(in_v1 + 0x28) | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x000518fc();
  *(undefined1 *)(unaff_s2 + 1) = 1;
  return;
}

