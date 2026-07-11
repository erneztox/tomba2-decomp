// FUN_080262a0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080262a0(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) {
      return;
    }
    func_0x00076d68(param_1);
    if (((param_1[0x2b] & 2) == 0) && (DAT_1f800137 == '\0')) {
      func_0x0011ce8c(param_1);
      halt_baddata();
    }
    *param_1 = 9;
    func_0x00041768(param_1,param_1[0x7b],8);
    param_1[5] = 0;
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 == 0) {
      return;
    }
    func_0x0004190c(param_1);
    if (DAT_1f800137 != '\0') {
      return;
    }
    if (((param_1[0x2b] & 2) == 0) && (param_1[0x5e] != '\x01')) {
      *param_1 = 3;
      param_1[6] = 0;
      param_1[5] = 1;
      halt_baddata();
    }
    if (param_1[0x2b] != '\x03') {
      return;
    }
    func_0x00042354(1,1);
    if (param_1[0x5e] == '\x01') {
      func_0x00040d68(param_1,0x8012b400);
      param_1[0x70] = 2;
      param_1[6] = 0;
      param_1[5] = 2;
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 != 2) {
    halt_baddata();
  }
  param_1[1] = 1;
  func_0x00077e7c(param_1);
  func_0x0004190c(param_1);
  if (param_1[0x70] == -1) {
    bVar1 = param_1[6];
    if (bVar1 == 1) {
      bVar1 = param_1[0x5e];
      if (bVar1 == 1) {
        if (DAT_800bfb47 != '\0') {
          func_0x00040d68(param_1,0x8012b394);
          param_1[0x5e] = 2;
          goto LAB_0802652c;
        }
      }
      else {
        if (1 < bVar1) {
          if (bVar1 == 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
LAB_0802652c:
          param_1[0x70] = 2;
          param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 != 0) {
          halt_baddata();
        }
      }
      func_0x00040d68(param_1,0x800a3e58);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      param_1[0x7a] = *(undefined1 *)((uint)(byte)param_1[0x5e] * 2 + -0x7fed4c2c);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
    param_1[5] = 0;
  }
  func_0x00041098(param_1);
  return;
}

