// FUN_08025fd4

/* WARNING: Control flow encountered bad instruction data */

void FUN_08025fd4(undefined1 *param_1)

{
  if (param_1[0x2b] == '\x03') {
    *param_1 = 2;
    param_1[0x70] = 1;
    param_1[5] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1[0x5e] == '\x02') {
    func_0x0011ce8c();
  }
  return;
}

