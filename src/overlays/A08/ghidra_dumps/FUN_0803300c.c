// FUN_0803300c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803300c(void)

{
  int in_v0;
  int unaff_s1;
  
  if (in_v0 != 0) {
    func_0x00040d68();
    *(undefined1 *)(unaff_s1 + 0x70) = 2;
    *(char *)(unaff_s1 + 5) = *(char *)(unaff_s1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0004190c();
  return;
}

