// FUN_08032218

/* WARNING: Control flow encountered bad instruction data */

void FUN_08032218(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      func_0x0012adf0(param_1);
    }
    else if (param_1[3] == '\x01') {
      func_0x0012afc0(param_1);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (param_1[3] == '\0') {
        func_0x0012acc0(param_1);
      }
      else if (param_1[3] == '\x01') {
        iVar2 = func_0x00051b70(param_1,0xc,0x1f);
        if (iVar2 == 0) {
          *(undefined2 *)(param_1 + 0x82) = 200;
          *(undefined2 *)(param_1 + 0x86) = 200;
          *(undefined2 *)(param_1 + 0x80) = 100;
          *(undefined2 *)(param_1 + 0x84) = 100;
          *(undefined2 *)(param_1 + 0x58) = 0;
          *(undefined2 *)(param_1 + 0x56) = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          if (9 < DAT_800bfa29) {
            param_1[5] = 10;
            *param_1 = 1;
            *(undefined2 *)(param_1 + 0x56) = 0x800;
            param_1[0x28] = param_1[0x28] | 0x80;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined2 *)(param_1 + 0x56) = 0x9c4;
          *param_1 = 2;
          *(undefined2 *)(param_1 + 0x2e) = 0x1568;
          *(undefined2 *)(param_1 + 0x32) = 0xefe6;
          *(undefined2 *)(param_1 + 0x36) = 0x34b2;
          param_1[5] = 0;
          *(undefined2 *)(param_1 + 0x68) = 0x1a;
        }
        param_1[4] = param_1[4] + '\x01';
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if (param_1[3] == '\0') {
      DAT_800bf9d6 = 10;
      func_0x00040c00(0x24);
      func_0x0004a3d4(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[3] == '\x01') {
      if (param_1[6] == '\0') {
        param_1[6] = 1;
        func_0x00040b48(0x29);
        DAT_800bfa29 = 0xb;
        func_0x0004a3d4(param_1);
        DAT_1f800137 = 2;
      }
      else if (param_1[6] == '\x01') {
        iVar2 = func_0x00042728();
        if (iVar2 == 0) {
          return;
        }
        DAT_1f800137 = 0;
        param_1[4] = 3;
      }
    }
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

