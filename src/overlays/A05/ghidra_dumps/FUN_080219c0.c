// FUN_080219c0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080219c0(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    uVar2 = func_0x0012b118(param_1);
    *(undefined2 *)(param_1 + 0x7c) = uVar2;
    if (param_1[0x2b] == '\0') {
      if (DAT_800bf809 != '\0') {
        return;
      }
      if (DAT_1f800137 != '\0') {
        return;
      }
      uVar2 = func_0x00076d68(param_1);
      bVar1 = param_1[5];
      *(undefined2 *)(param_1 + 0x6a) = uVar2;
      if (bVar1 == 1) {
        func_0x0011ae5c(param_1);
      }
      else if (bVar1 < 2) {
        if (bVar1 == 0) {
          func_0x0011acc4(param_1);
        }
      }
      else if (bVar1 == 2) {
        func_0x0011b210(param_1);
      }
      else if (bVar1 == 3) {
        func_0x0011b3e8(param_1);
        param_1[0x29] = 0;
        param_1[0x5f] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if ((param_1[0x2b] == '\n') &&
         (iVar3 = func_0x0003116c(0x602,param_1 + 0x2c,0xffffffce), iVar3 != 0)) {
        *(undefined1 **)(iVar3 + 0x10) = param_1;
      }
      param_1[0x2b] = param_1[0x2b] + -1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = func_0x000519e0(param_1,8,_DAT_800ecfbc,0x8013b984);
      if (iVar3 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfc0;
      func_0x00077c40(param_1,0x80141e14,0);
      param_1[3] = 0;
      *param_1 = 1;
      *(undefined2 *)(param_1 + 0x80) = 0x60;
      *(undefined2 *)(param_1 + 0x82) = 0xc0;
      *(undefined2 *)(param_1 + 0x84) = 0x60;
      *(undefined2 *)(param_1 + 0x86) = 0xc0;
      param_1[4] = param_1[4] + '\x01';
      func_0x0004766c(param_1);
      func_0x00048894(param_1);
      uVar2 = _DAT_1f8001a0;
      *(undefined2 *)(param_1 + 0x70) = 0xff;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[0xbe] = 0;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[0x5f] = 0;
      param_1[0xbf] = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined2 *)(param_1 + 0x40) = 1;
      *(undefined2 *)(param_1 + 0x68) = 0;
      *(undefined2 *)(param_1 + 0x72) = 0xffff;
      *(undefined2 *)(param_1 + 0x56) = uVar2;
      *(undefined2 *)(param_1 + 0x6c) = uVar2;
      *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_1 + 0x36);
    }
  }
  else if (bVar1 == 2) {
    func_0x0007778c(param_1);
    uVar2 = func_0x0012b118(param_1);
    *(undefined2 *)(param_1 + 0x7c) = uVar2;
    if ((byte)param_1[5] < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x08021c30 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6630))();
      return;
    }
    param_1[0x29] = 0;
    param_1[0x5f] = 0;
    param_1[0x2b] = 0;
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

