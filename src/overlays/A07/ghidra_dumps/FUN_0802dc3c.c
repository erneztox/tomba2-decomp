// FUN_0802dc3c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802dc3c(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[0x5e] == '\0') {
      func_0x00126270(param_1);
    }
    else if (param_1[0x5e] == '\x01') {
      func_0x001264c8(param_1);
      if (param_1[1] == '\0') {
        return;
      }
      func_0x000518fc(param_1);
      func_0x001150dc(param_1);
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      func_0x0007a624(param_1);
    }
    return;
  }
  if (bVar1 == 0) {
    iVar2 = func_0x000519e0(param_1,10,_DAT_800ecfcc,0x80131bc0);
    if (iVar2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfd0;
    func_0x00040cdc(param_1,0x80140dc8,0x800a3d18);
    param_1[0x7b] = 0;
    func_0x00041768(param_1,0,0);
    *param_1 = 3;
    *(undefined2 *)(param_1 + 0x80) = 0x120;
    *(undefined2 *)(param_1 + 0x82) = 0x240;
    *(undefined2 *)(param_1 + 0x84) = 0x180;
    *(undefined2 *)(param_1 + 0x86) = 400;
    param_1[0xb] = 0;
    if (DAT_800bf9d7 != '\x03') {
      param_1[0x5e] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[0x5e] = 1;
    *(undefined2 *)(param_1 + 0x68) = 0x80;
    param_1[4] = param_1[4] + '\x01';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

