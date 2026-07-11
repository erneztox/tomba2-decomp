// FUN_08042eb8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08042eb8(undefined1 param_1)

{
  short in_v0;
  short sVar1;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  if (*(short *)(unaff_s2 + 0x32) < in_v0) {
    if (*(char *)(unaff_s0 + 3) == '\0') {
      *(undefined1 *)(unaff_s2 + 1) = 0;
      *(undefined1 *)(unaff_s2 + 7) = param_1;
    }
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar1 = *(short *)(unaff_s1 + 6) + 1;
  *(short *)(unaff_s1 + 6) = sVar1;
  if ((9 < sVar1) && (*(undefined2 *)(unaff_s1 + 6) = 0, *(char *)(unaff_s0 + 3) == '\0')) {
    func_0x00074590(0x88,0,0);
  }
  *(undefined4 *)(unaff_s0 + 0x3c) =
       *(undefined4 *)(&stack0x00000010 + *(short *)(unaff_s1 + 6) * 4);
  func_0x0002b278();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

