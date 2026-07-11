// FUN_0801b558

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b558(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    func_0x00076d68(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[0x146] = 0;
      func_0x00054198(param_1);
      func_0x00053d90(param_1);
      param_1[6] = param_1[6] + '\x01';
      func_0x00054d14(param_1,0x57,4);
      func_0x0006625c(param_1);
      *(undefined2 *)(param_1 + 0x172) = 0x5a;
      param_1[0xd] = param_1[0xd] | 0x82;
    }
  }
  else if (bVar1 == 2) {
    *param_1 = 3;
    *(undefined2 *)(param_1 + 0x172) = 0x14;
    func_0x0005444c(param_1);
    if (param_1[0x29] != '\0') {
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      return;
    }
    func_0x00056d44(param_1,0);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

