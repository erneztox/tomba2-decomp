// FUN_0802c668

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802c668(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
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
        param_1[0x47] = (char)(*(ushort *)(param_1 + 0x56) >> 4);
        if ((_DAT_800bfe56 & 0x80) != 0) {
          param_1[0x7a] = 0x1d;
          func_0x00040d68(param_1,0x801347f0);
          param_1[0x70] = 2;
          param_1[6] = param_1[6] + '\x01';
          halt_baddata();
        }
        iVar3 = func_0x00130cf8();
        if (iVar3 != 0) {
          param_1[0x7a] = 0x1c;
        }
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
    if (bVar1 != 0) {
      halt_baddata();
    }
    param_1[0xb] = 0x80;
    *(undefined1 **)(param_1 + 0x14) = &DAT_80134cec;
    param_1[0x5f] = DAT_80134cec;
    uVar2 = 0x32;
    if ((_DAT_800bfe56 & 0x80) == 0) {
      uVar2 = 0x17;
    }
    param_1[0x7b] = uVar2;
    func_0x00041718(param_1,0x17,0);
    *(undefined2 *)(param_1 + 0x2e) = 0x264f;
    *(undefined2 *)(param_1 + 0x32) = 0xf578;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0x2e37;
    func_0x00130ba4(param_1);
    param_1[6] = 0;
    param_1[5] = param_1[5] + '\x01';
  }
  iVar3 = func_0x0007778c(param_1);
  if ((iVar3 != 0) && (func_0x0004190c(param_1), DAT_1f800137 == '\0')) {
    if ((param_1[0x2b] & 2) == 0) {
      *param_1 = 3;
      param_1[6] = 0;
      param_1[5] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[0x2b] == 3) {
      func_0x00042354(1,1);
      func_0x00040d68(param_1,0x800a3d18);
      *param_1 = 3;
      param_1[0x70] = 2;
      param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

