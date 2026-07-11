// FUN_08045974

/* WARNING: Control flow encountered bad instruction data */

void FUN_08045974(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    bVar1 = param_1[0x5e];
    if (bVar1 == 1) {
      func_0x0013e64c(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x0013e510(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x0013e790(param_1);
    }
    else if (bVar1 == 3) {
      bVar1 = param_1[5];
      if (bVar1 != 1) {
        if (1 < bVar1) {
          if (bVar1 != 2) {
            halt_baddata();
          }
          func_0x0004d4c4(0x75,1);
          func_0x00040b48(0x6d);
          param_1[4] = 3;
          halt_baddata();
        }
        if (bVar1 != 0) {
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x40) = 0x3c;
        *(undefined2 *)(param_1 + 0x60) = 0;
        *(undefined2 *)(param_1 + 0x62) = 0xffe0;
        *(undefined2 *)(param_1 + 100) = 0;
        param_1[5] = param_1[5] + '\x01';
      }
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      if (sVar2 == 1) {
        param_1[5] = param_1[5] + '\x01';
      }
      func_0x0004bd64(param_1,1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xdc),0,param_1 + 0x60);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x0007778c(param_1);
        if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08045b74 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5b08))();
          return;
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      param_1[0xb] = 0x16;
      *(undefined4 *)(param_1 + 0x7c) = 0x8013cc28;
      param_1[0xd] = 1;
      *param_1 = 1;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined2 *)(param_1 + 0x80) = 0x28;
      *(undefined2 *)(param_1 + 0x82) = 0x50;
      *(undefined2 *)(param_1 + 0x84) = 0x28;
      *(undefined2 *)(param_1 + 0x86) = 0x50;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

