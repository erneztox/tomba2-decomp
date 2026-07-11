// FUN_0802f9e4

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802f9e4(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_20 [2];
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      param_1[1] = 1;
      func_0x00077e7c(param_1);
      func_0x0004190c(param_1);
      func_0x00041098(param_1);
      if (param_1[0x70] != -1) {
        return;
      }
      if (param_1[6] != '\0') {
        if (param_1[6] != '\x01') {
          halt_baddata();
        }
        iVar3 = func_0x00041438(param_1,0,0x100);
        if (iVar3 == 0) {
          return;
        }
        *param_1 = 9;
        param_1[5] = 1;
        return;
      }
      iVar3 = func_0x00130d44();
      if (iVar3 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bf8dc == -1) {
        func_0x00036560(5,local_20);
        iVar3 = func_0x00078894(local_20[0]);
        uVar2 = 0x1d;
        if ((iVar3 != 0) && (uVar2 = 0x1e, DAT_800bf931 == -1)) {
          uVar2 = 0x20;
        }
        param_1[0x7a] = uVar2;
        func_0x00040d68(param_1,0x801353f4);
        param_1[0x70] = 2;
        param_1[6] = param_1[6] + '\x01';
        halt_baddata();
      }
      param_1[0x7a] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *param_1 = 9;
    *(undefined2 *)(param_1 + 0x2e) = 0xf90;
    *(undefined2 *)(param_1 + 0x32) = 0xf0ac;
    *(undefined2 *)(param_1 + 0x36) = 0x2544;
    *(undefined2 *)(param_1 + 0x56) = 0;
    param_1[6] = 0;
    param_1[0x28] = param_1[0x28] | 0x80;
    param_1[5] = param_1[5] + '\x01';
  }
  if ((((DAT_800bf816 != '\0') && (DAT_800bf817 == '\n')) &&
      (iVar3 = func_0x00130cb0(param_1), iVar3 != 0)) && (param_1[0x2b] == '\x03')) {
    *param_1 = 3;
    func_0x00130dd8(1);
    func_0x00040d68(param_1,0x800a3d18);
    param_1[0x70] = 2;
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

