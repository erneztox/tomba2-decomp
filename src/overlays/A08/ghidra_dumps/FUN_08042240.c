// FUN_08042240

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08042240(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_1f800207 == '+') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = 2;
  func_0x0007778c(param_1);
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    iVar2 = func_0x0005308c();
    if (iVar2 == 0) {
LAB_08042374:
      func_0x0004190c(param_1);
      return;
    }
    func_0x00042354(1,2);
    func_0x00040d68(param_1,0x8014796c);
    param_1[0x70] = 2;
    param_1[5] = param_1[5] + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (((((int)_DAT_800e7ffe & 0x8200U) != 0) || (DAT_1f800207 != '+')) ||
         (_DAT_1f800160 < 0x37aa)) goto LAB_08042374;
      param_1[5] = 1;
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (param_1[0x70] == -1) {
      DAT_800bfa43 = 1;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x84) = 0xc0;
      *(undefined2 *)(param_1 + 0x86) = 0x180;
      param_1[6] = 0;
      param_1[5] = 0;
      param_1[0x5e] = 1;
    }
    goto LAB_08042374;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

