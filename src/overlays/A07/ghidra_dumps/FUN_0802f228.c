// FUN_0802f228

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802f228(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[5];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
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
        param_1[0x7a] = 0x1b;
        func_0x00040d68(param_1,0x8013500c);
        param_1[0x70] = 2;
        param_1[6] = param_1[6] + '\x01';
        halt_baddata();
      }
      if (param_1[6] != '\x01') {
        halt_baddata();
      }
      iVar2 = func_0x00041438(param_1,(uint)(byte)param_1[0x47] << 4,0x100);
      if (iVar2 == 0) {
        return;
      }
      *param_1 = 9;
      param_1[5] = 1;
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x22,0xf);
    *param_1 = 9;
    param_1[0x7b] = 0x15;
    param_1[0x28] = param_1[0x28] & 0x7f;
    func_0x00041718(param_1,0x15,0);
    param_1[6] = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    param_1[5] = param_1[5] + '\x01';
    func_0x00130ba4(param_1);
  }
  if (DAT_800bf9d7 == '\x03') {
    iVar2 = func_0x0007778c(param_1);
    if (((iVar2 == 0) || (func_0x0004190c(param_1), DAT_1f800137 != '\0')) ||
       (param_1[0x2b] != '\x03')) {
      return;
    }
    *param_1 = 3;
    param_1[0x47] = (char)(*(ushort *)(param_1 + 0x56) >> 4);
    func_0x00042354(1,1);
    func_0x00040d68(param_1,0x800a3d18);
    param_1[0x70] = 2;
    param_1[6] = 0;
    param_1[5] = 2;
  }
  else {
    *(undefined2 *)(param_1 + 0x2e) = 0x25a5;
    *(undefined2 *)(param_1 + 0x36) = 0x2a8f;
    param_1[0x5e] = 3;
    param_1[5] = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

