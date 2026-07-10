// FUN_0001cf2c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001cf2c(void)

{
  short sVar1;
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x40) = 0;
  sVar1 = *(short *)(unaff_s0 + 0x40) + 1;
  *(short *)(unaff_s0 + 0x40) = sVar1;
  if (0x18 < sVar1) {
    func_0x00073194();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cRam800e8001 != '\0') {
    *(undefined2 *)(*(int *)(unaff_s0 + 0xc4) + 10) = 0;
  }
  return;
}

