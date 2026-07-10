// FUN_0001f40c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001f40c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_s0;
  
  iVar1 = func_0x00051b70(param_1,param_2,0x6c);
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_s0 + 0x56) = 0xacd;
    *(undefined2 *)(unaff_s0 + 0x58) = 0xc5c;
    *(undefined2 *)(unaff_s0 + 0x2e) = 0x224d;
    *(undefined2 *)(unaff_s0 + 0x32) = 0xea80;
    *(undefined2 *)(unaff_s0 + 0x54) = 0;
    *(undefined2 *)(unaff_s0 + 0x36) = 0x325e;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

