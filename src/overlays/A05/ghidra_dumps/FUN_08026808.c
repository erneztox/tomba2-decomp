// FUN_08026808

/* WARNING: Control flow encountered bad instruction data */

void FUN_08026808(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[0x5e];
    if (bVar1 == 1) {
      func_0x0011f1bc(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0011ef40(param_1);
      }
    }
    else {
      if (bVar1 == 2) {
        func_0x0011e4c4(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 == 3) {
        func_0x0011f374(param_1);
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = func_0x0011eb84(param_1,1);
      if (iVar3 == 0) {
        return;
      }
      bVar1 = param_1[3] - 10;
      param_1[3] = bVar1;
      if (bVar1 != 1) {
        if (bVar1 < 2) {
          if (bVar1 == 0) {
            *(undefined2 *)(param_1 + 0x2e) = 0x3d80;
            *(undefined2 *)(param_1 + 0x32) = 0xdaf4;
            *(undefined2 *)(param_1 + 0x36) = 0x304c;
            param_1[0x2a] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (bVar1 == 2) {
          *(undefined2 *)(param_1 + 0x2e) = 0x33c0;
          *(undefined2 *)(param_1 + 0x32) = 0xd074;
          *(undefined2 *)(param_1 + 0x36) = 0x24eb;
          param_1[0x2a] = 6;
          *(undefined4 *)(param_1 + 0x7c) = 0x80142108;
          *param_1 = 1;
          *(undefined2 *)(param_1 + 0x80) = 0x60;
          *(undefined2 *)(param_1 + 0x82) = 0xc0;
          *(undefined2 *)(param_1 + 0x84) = 0x40;
          *(undefined2 *)(param_1 + 0x86) = 0xa0;
          param_1[0x5e] = 0;
          param_1[0x1b] = 3;
          param_1[4] = param_1[4] + '\x01';
          uVar2 = func_0x00123108(param_1);
          param_1[5] = uVar2;
          *(undefined2 *)(param_1 + 0x66) = 0;
          *(undefined2 *)(param_1 + 0x68) = 0;
          *(undefined2 *)(param_1 + 0x6a) = 0;
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3a80;
      *(undefined2 *)(param_1 + 0x32) = 0xdbb4;
      *(undefined2 *)(param_1 + 0x36) = 0x238d;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08026a20 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef654c))();
      return;
    }
    param_1[1] = 1;
    func_0x00077e7c(param_1);
    func_0x000518fc(param_1);
    func_0x00076d68(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

