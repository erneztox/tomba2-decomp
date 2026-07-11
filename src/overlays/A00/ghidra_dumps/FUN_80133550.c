// FUN_80133550

/* WARNING: Control flow encountered bad instruction data */

void FUN_80133550(void)

{
  short sVar1;
  uint in_v0;
  int iVar2;
  int unaff_s0;
  
  if (in_v0 < 0xc) {
    iVar2 = func_0x8002b278();
    if (iVar2 != 0) {
      return;
    }
    func_0x80031780();
  }
  else {
    *(undefined1 *)(unaff_s0 + 4) = 3;
  }
  sVar1 = FUN_801409c0();
  if (sVar1 != 0) {
    *(char *)(unaff_s0 + 5) = (char)sVar1;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    FUN_801454f0();
    return;
  }
  *(undefined4 *)(unaff_s0 + 4) = 0x301;
  *(undefined1 *)(unaff_s0 + 3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

