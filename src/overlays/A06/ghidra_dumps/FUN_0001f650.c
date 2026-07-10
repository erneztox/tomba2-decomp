// FUN_0001f650

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001f650(void)

{
  undefined2 in_v0;
  char in_v1;
  int unaff_s2;
  
  *(undefined2 *)(unaff_s2 + 0x86) = in_v0;
  *(undefined1 *)(unaff_s2 + 0x2b) = 0;
  *(char *)(unaff_s2 + 4) = in_v1 + '\x01';
  func_0x00051b04();
  func_0x00051b04(*(undefined4 *)(unaff_s2 + 0xf0),0xf,0x14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

