// FUN_08031474

/* WARNING: Control flow encountered bad instruction data */

void FUN_08031474(int param_1)

{
  if (*(char *)(param_1 + 3) == '\0') {
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,7);
  }
  else {
    if (*(char *)(param_1 + 3) != '\x01') {
      func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,8);
      func_0x00077c40(param_1,0x8014e4d4,1);
      return;
    }
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0xc,9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

