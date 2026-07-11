// FUN_0801b9f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801b9f8(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x0007778c(param_1);
    if (5 < (byte)param_1[3] - 1) {
      func_0x0004190c(param_1);
      func_0x000518fc(param_1);
      param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Could not emulate address calculation at 0x0801bd8c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(((byte)param_1[3] - 1) * 4 + -0x7fef6afc))();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar3 = func_0x000519e0(param_1,0xf,_DAT_800ecfa0,0x8011cbb4);
    uVar2 = _DAT_800ecfa4;
    if (iVar3 == 0) {
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0xb4;
      *(undefined2 *)(param_1 + 0x82) = 0x168;
      *(undefined2 *)(param_1 + 0x84) = 0x50;
      *(undefined2 *)(param_1 + 0x86) = 0x90;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      param_1[4] = param_1[4] + '\x01';
      iVar3 = func_0x0003315c(param_1);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x1c) = 0x80112d80;
      }
      if ((byte)param_1[3] - 1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0801baf4 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(((byte)param_1[3] - 1) * 4 + -0x7fef6b14))();
        return;
      }
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

