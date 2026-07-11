// FUN_0801a1f0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801a1f0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(param_1 * 4 + -0x7fec3aee);
  if ((*(byte *)(param_1 * 4 + -0x7fec3af0) & 0x80) == 0) {
    func_0x0004d7ec(iVar1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0004d868(iVar1,1);
  return;
}

