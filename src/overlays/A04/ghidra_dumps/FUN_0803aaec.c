// FUN_0803aaec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803aaec(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[5] != '\0') {
      func_0x00116b48(param_1);
    }
    if (param_1[0x2b] == '\0') {
      if (DAT_800bf809 != '\0') {
        return;
      }
      if (DAT_1f800137 != '\0') {
        return;
      }
      uVar3 = func_0x00076d68(param_1);
      bVar1 = param_1[5];
      *(undefined2 *)(param_1 + 0x68) = uVar3;
      if (bVar1 == 1) {
        func_0x00133ff4(param_1);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x00133e7c(param_1);
        }
      }
      else if (bVar1 == 2) {
        func_0x00134350(param_1);
        param_1[0x29] = 0;
        param_1[0x5f] = 0;
        if (*(short *)(param_1 + 0x36) < 0x19fd) {
          *(undefined2 *)(param_1 + 0x36) = 0x19fd;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      param_1[0x2b] = param_1[0x2b] + -1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1[4] = 1;
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
      param_1[0x2b] = 0;
      param_1[0x5e] = 0;
      param_1[0xbf] = 0;
      iVar5 = 2;
      param_1[0x2a] = *(undefined1 *)((uint)(byte)param_1[3] * 2 + -0x7febe1e4);
      iVar4 = 0x20000;
      do {
        *(undefined2 *)(param_1 + (iVar4 >> 0xf) + 0x60) = 0;
        iVar5 = iVar5 + 1;
        iVar4 = iVar5 * 0x10000;
      } while (iVar5 * 0x10000 >> 0x10 < 9);
      func_0x00135300(param_1,0);
      iVar4 = func_0x000519e0(param_1,7,_DAT_800ecfbc,0x80143e40);
      uVar2 = _DAT_800ecfc0;
      if (iVar4 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x6a) = 0xffff;
      param_1[0xb] = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      if ((_DAT_800bfe56 & 0x10) != 0) {
        *param_1 = 0x11;
        func_0x001351b8(param_1,1);
        *(undefined2 *)(param_1 + 0x42) = 0;
        param_1[5] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *param_1 = 0x15;
      func_0x001351b8(param_1,0);
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0xfc00;
      *(undefined2 *)(param_1 + 0x54) = 0;
      func_0x00041194(param_1,0,1,0);
      func_0x0004130c(param_1,1);
      *(undefined2 *)(param_1 + 0x6e) = 0xffff;
      param_1[0x47] = param_1[0xbe];
    }
  }
  else if (bVar1 == 2) {
    func_0x0007778c(param_1);
    if ((byte)param_1[5] < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x0803ad80 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef5da4))();
      return;
    }
    param_1[0x29] = 0;
    if (param_1[1] == '\0') {
      return;
    }
    func_0x000518fc(param_1);
  }
  else if (bVar1 == 3) {
    if ((param_1[0x1b] & 0x40) == 0) {
      func_0x0007a624(param_1);
      return;
    }
    param_1[0x1b] = param_1[0x1b] & 0xbf;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

