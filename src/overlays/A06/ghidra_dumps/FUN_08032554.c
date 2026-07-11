// FUN_08032554

/* WARNING: Control flow encountered bad instruction data */

void FUN_08032554(void)

{
  short sVar1;
  int iVar2;
  undefined1 *unaff_s0;
  int unaff_s3;
  
  *(undefined2 *)(unaff_s0 + 0x82) = 0x50;
  *(undefined2 *)(unaff_s0 + 0x86) = 0xf0;
  *(undefined2 *)(unaff_s0 + 0x84) = 0x8c;
  *unaff_s0 = 9;
  **(undefined2 **)(unaff_s0 + 0xc0) = 0x8c;
  iVar2 = *(int *)(unaff_s3 + 0x240);
  *(undefined2 *)(unaff_s0 + 0x58) = 0xfc00;
  sVar1 = *(short *)(*(int *)(iVar2 + 0xc4) + 10);
  *(undefined2 *)(unaff_s0 + 0x60) = 0;
  *(undefined2 *)(unaff_s0 + 0x68) = 0;
  unaff_s0[0xbf] = 0;
  *(short *)(unaff_s0 + 0x56) = sVar1 + 0x800;
  *(undefined2 *)(unaff_s0 + 0x62) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

