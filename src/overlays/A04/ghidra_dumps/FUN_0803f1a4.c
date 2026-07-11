// FUN_0803f1a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803f1a4(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    bVar1 = param_1[3];
    if (bVar1 == 1) {
      func_0x001379f0(param_1);
    }
    else if (bVar1 < 2) {
      if (bVar1 == 0) {
        func_0x00137870(param_1);
      }
    }
    else if (bVar1 == 2) {
      func_0x00137bdc(param_1);
    }
    else if (bVar1 == 3) {
      func_0x00137fc8(param_1);
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar2 = func_0x0007778c(param_1);
        if (iVar2 != 0) {
          func_0x00051844(param_1);
        }
        if ((byte)param_1[5] < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0803f3e4 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5c60))();
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
      iVar2 = func_0x00051b70(param_1,0xc,0x10);
      if (iVar2 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 0x6e;
      *(undefined2 *)(param_1 + 0x86) = 0x7c;
      param_1[0x5e] = 0;
      param_1[0xb] = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[4] = param_1[4] + '\x01';
      if ((byte)param_1[3] < 2) {
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 0x32);
        *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x36);
        iVar2 = func_0x0007aae8();
        *(int *)(param_1 + 0xc4) = iVar2;
        *(undefined2 *)(iVar2 + 6) = 0xffff;
        **(undefined2 **)(param_1 + 0xc4) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 4) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 8) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = 0x400;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x1000;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x1000;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3c) = 0x1000;
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0xc,0x20);
        param_1[8] = 2;
        param_1[9] = 2;
      }
      func_0x0004766c(param_1);
      func_0x00049760(param_1);
      *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

