// FUN_0802ae08

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802ae08(int param_1)

{
  if (*(short *)(param_1 + 0x40) == 0) {
    if (*(short *)(*(int *)(param_1 + 0x38) + 2) == 0) {
      *(undefined2 *)(param_1 + 0x40) = 1;
    }
  }
  else if (*(short *)(*(int *)(param_1 + 0x38) + 2) != 0) {
    func_0x00074590(0x2e,0xfffffff4,0xffffffd8);
    *(undefined2 *)(param_1 + 0x40) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

