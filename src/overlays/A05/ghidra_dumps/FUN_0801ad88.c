// FUN_0801ad88

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ad88(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = DAT_800e7e81;
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if ((byte)param_1[5] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801ae38 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef67d4))();
      return;
    }
    func_0x00041098(param_1);
    func_0x0004190c(param_1);
    if (param_1[1] != '\0') {
      func_0x000518fc(param_1);
    }
    param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = func_0x00113348(param_1);
      if (iVar3 == 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x4e) = 0;
      param_1[5] = 1;
      param_1[6] = 0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    param_1[1] = DAT_800e7e81;
    if (cVar2 != '\0') {
      func_0x00077e7c(param_1);
    }
    if (((byte)param_1[5] < 4) && (1 < (byte)param_1[5])) {
      *param_1 = 1;
      param_1[0xb] = param_1[0xb] & 0x3f;
      func_0x00042354(1,3);
      if (0x251b < _DAT_1f800164) {
        *(short *)(param_1 + 0x36) = _DAT_1f800164 + -100;
        param_1[0xbe] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x36) = _DAT_1f800164 + 100;
      param_1[0xbe] = 1;
      _DAT_800e7eb6 = _DAT_800e7eb6 + -100;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      *(undefined2 *)(param_1 + 0x86) = 0xe0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0x380;
      func_0x0004130c(param_1,0);
      if (param_1[0x46] != '\x19') {
        func_0x000416a8(param_1,0xffffffff,0);
        func_0x00041718(param_1,0x19,0);
      }
      param_1[4] = 1;
      param_1[5] = 3;
      param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_1[6] == '\0') {
      *(undefined2 *)(param_1 + 0x86) = 0x60;
      param_1[0xb] = param_1[0xb] & 0x3f;
      *(undefined2 *)(param_1 + 0x84) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      if (param_1[0x46] != '#') {
        func_0x000416a8(param_1,0xe,0x80140f7c);
        func_0x00041718(param_1,0x23,0);
      }
      param_1[6] = param_1[6] + '\x01';
    }
    func_0x0004190c(param_1);
    func_0x000518fc(param_1);
    param_1[0x5f] = 0;
    param_1[0x29] = 0;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

