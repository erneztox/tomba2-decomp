// FUN_08032c78

/* WARNING: Control flow encountered bad instruction data */

void FUN_08032c78(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s5;
  int unaff_s6;
  
  iVar1 = -0x7fec0e48;
  do {
    if (unaff_s5 == 0) {
      func_0x00051b04(*(undefined4 *)(unaff_s0 + 0xc0));
      **(undefined2 **)(unaff_s0 + 0xc0) = *(undefined2 *)(iVar1 + 2);
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(undefined2 *)(iVar1 + 4);
      *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = *(undefined2 *)(iVar1 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00051b04(*(undefined4 *)(unaff_s0 + 0xc0));
    **(undefined2 **)(unaff_s0 + 0xc0) = *(undefined2 *)(unaff_s2 + 2);
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 2) = *(undefined2 *)(unaff_s2 + 4);
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc0) + 4) = *(undefined2 *)(unaff_s2 + 6);
    unaff_s2 = unaff_s2 + 8;
    unaff_s0 = unaff_s0 + 4;
    unaff_s3 = unaff_s3 + 1;
    iVar1 = iVar1 + 8;
  } while (unaff_s3 < 3);
  *(char *)(unaff_s6 + 0x5e) = (char)unaff_s5;
  return;
}

