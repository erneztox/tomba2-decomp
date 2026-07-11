// FUN_08023164

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08023164(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[5] == '\0') {
      if ((DAT_800bf816 == '\0') || (DAT_800bf817 != '\x03')) {
        return;
      }
      *param_1 = 1;
      param_1[5] = param_1[5] + '\x01';
    }
    else if (param_1[5] == '\x01') {
      if (DAT_800bf816 == '\0') {
        *param_1 = 2;
        param_1[5] = 0;
      }
      else {
        func_0x0004b374(param_1,0);
        param_1[1] = 1;
        func_0x00077ebc(param_1);
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      func_0x00077b38(param_1,0x80139100,5);
      param_1[0xb] = 0x10;
      *(undefined2 *)(param_1 + 0x68) = 0x79;
      *param_1 = 2;
      param_1[0xd] = 0;
      param_1[0x47] = 0;
      param_1[8] = 0;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined2 *)(param_1 + 0x80) = 0x32;
      *(undefined2 *)(param_1 + 0x82) = 100;
      *(undefined2 *)(param_1 + 0x84) = 0x32;
      *(undefined2 *)(param_1 + 0x86) = 100;
      func_0x0004b354(param_1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    func_0x00040b48(0x4f);
    func_0x0004a3d4(param_1);
    param_1[4] = param_1[4] + '\x01';
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

