// FUN_08020eec

/* WARNING: Control flow encountered bad instruction data */

void FUN_08020eec(int param_1)

{
  if (DAT_800bf8d3 != -1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00051b70(param_1,0xc,0x4d);
  *(undefined2 *)(param_1 + 0x56) = 0xfdbc;
  func_0x000517f8(param_1);
  return;
}

