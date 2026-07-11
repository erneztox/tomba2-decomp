// FUN_0802ef1c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802ef1c(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        param_1[1] = 1;
        func_0x00077e7c(param_1);
        func_0x00041098(param_1);
        func_0x0004190c(param_1);
        if (param_1[0x70] != -1) {
          return;
        }
        if (param_1[6] == '\0') {
          if ((DAT_800bf8ae != '\0') && (DAT_800bf93c != -1)) {
            param_1[0x7a] = 0;
            func_0x00040d68(param_1,0x80134ff4);
            param_1[0x70] = 2;
            param_1[6] = param_1[6] + '\x01';
            halt_baddata();
          }
          param_1[0x7a] = 0x1b;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (param_1[6] != '\x01') {
          halt_baddata();
        }
        iVar3 = func_0x00041438(param_1,(uint)(byte)param_1[0x47] << 4,0x100);
        if (iVar3 == 0) {
          return;
        }
        *param_1 = 9;
        param_1[5] = 1;
        return;
      }
      if (DAT_800bf9d7 != '\x03') {
        iVar3 = func_0x0007778c(param_1);
        if (iVar3 == 0) {
          return;
        }
        func_0x0004190c(param_1);
        if (((param_1[0x2b] & 2) == 0) && (DAT_1f800137 == '\0')) {
          func_0x0011f190(param_1);
          halt_baddata();
        }
        *param_1 = 9;
        func_0x00041768(param_1,param_1[0x7b],8);
        param_1[5] = 1;
        halt_baddata();
      }
      goto LAB_0802f0b4;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x22,0xf);
    *param_1 = 9;
    *(undefined1 **)(param_1 + 0x14) = &DAT_801350ec;
    param_1[0x28] = param_1[0x28] & 0x7f;
    uVar2 = DAT_801350ec;
    param_1[0x7b] = 0x15;
    param_1[0x5f] = uVar2;
    func_0x00041718(param_1,0x15,0);
    *(undefined2 *)(param_1 + 0x2e) = 0x25a5;
    *(undefined2 *)(param_1 + 0x32) = 0xf590;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0x2a8f;
    func_0x00130ba4(param_1);
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
  }
  if (DAT_800bf9d7 != '\x03') {
    iVar3 = func_0x0007778c(param_1);
    if ((iVar3 == 0) || (func_0x0004190c(param_1), DAT_1f800137 != '\0')) {
      return;
    }
    if ((param_1[0x2b] & 2) == 0) {
      *param_1 = 3;
      param_1[6] = 0;
      param_1[5] = 2;
      halt_baddata();
    }
    if (param_1[0x2b] != 3) {
      return;
    }
    param_1[0x47] = (char)(*(ushort *)(param_1 + 0x56) >> 4);
    func_0x00042354(1,1);
    func_0x00040d68(param_1,0x800a3d18);
    *param_1 = 3;
    param_1[0x70] = 2;
    param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0802f0b4:
  *(undefined2 *)(param_1 + 0x2e) = 0x2762;
  *(undefined2 *)(param_1 + 0x36) = 0x2ed7;
  param_1[5] = 0;
  param_1[0x5e] = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

