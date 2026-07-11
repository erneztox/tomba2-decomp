// FUN_08042bc8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08042bc8(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  if (DAT_1f800207 == '-') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = 2;
  if (param_1[5] == '\0') {
    iVar2 = func_0x0007778c(param_1);
    if ((iVar2 == 0) || (param_1[0x2b] != '\x03')) goto LAB_08042cf4;
    func_0x00042354(1,2);
    func_0x00040d68(param_1,0x800a3d70);
    param_1[0x70] = 2;
    param_1[6] = 0;
    param_1[5] = 1;
  }
  else if (param_1[5] == '\x01') {
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x00041098(param_1);
    if (param_1[0x70] != -1) {
LAB_08042cf4:
      func_0x0004190c(param_1);
      return;
    }
    if (param_1[6] == '\0') {
      uVar1 = 0x11;
      if ((_DAT_800bfe56 & 0x100) == 0) {
        uVar1 = 0x10;
      }
      param_1[0x7a] = uVar1;
      func_0x00040d68(param_1,0x8014795c);
      param_1[6] = 1;
      param_1[0x70] = 2;
    }
    else if (param_1[6] == '\x01') {
      param_1[5] = 0;
      goto LAB_08042cf4;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

