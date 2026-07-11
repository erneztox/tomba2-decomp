// FUN_08041a78

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08041a78(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    func_0x0004190c(param_1);
    if ((byte)param_1[3] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08041c38 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef5c34))();
      return;
    }
    if (param_1[1] != '\0') {
      func_0x000518fc(param_1);
    }
    param_1[0x2b] = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecfa4,0x80141e90);
      uVar2 = _DAT_800ecf90;
      if (iVar3 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x7c) = 0x8014d014;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      func_0x00041718(param_1,0,0);
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[0xbf] = 0;
      param_1[0x5f] = 0;
      param_1[0x2b] = 0;
      param_1[4] = param_1[4] + '\x01';
      if ((byte)param_1[3] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08041b58 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef5c4c))();
        return;
      }
      *(undefined2 *)(param_1 + 0x84) = 0x88;
      *(undefined2 *)(param_1 + 0x86) = 0xa6;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

