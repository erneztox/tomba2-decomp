// FUN_00022e04

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022e04(undefined4 param_1)

{
  int in_v0;
  int iVar1;
  int unaff_s0;
  
  iVar1 = func_0x00051b70(param_1,0xc,*(undefined1 *)(in_v0 + 0x1ab6));
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_s0 + 0x2a) = 0;
    func_0x00041194();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

