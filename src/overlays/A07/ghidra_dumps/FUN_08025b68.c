// FUN_08025b68

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08025b68(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((byte)param_1[5] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08025cec */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[5] * 4 + -0x7fef6824))();
      return;
    }
    iVar4 = func_0x0007778c(param_1);
    if (iVar4 == 0) {
      return;
    }
    if (param_1[5] != '\0') {
      func_0x0004190c(param_1);
    }
    func_0x000518fc(param_1);
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
      iVar4 = func_0x000519e0(param_1,0xf,_DAT_800ecfa8,0x801315a0);
      uVar2 = _DAT_800ecf90;
      if (iVar4 != 0) {
        return;
      }
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0x88;
      *(undefined2 *)(param_1 + 0x86) = 0x220;
      param_1[0xbf] = 0;
      param_1[4] = param_1[4] + '\x01';
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      param_1[0xb] = param_1[0xb] & 0xc0 | 0x40;
      if ((DAT_800bfa13 & 0x1f) == 0x1f) {
        if (DAT_800bf934 != -1) {
          param_1[5] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar3 = 3;
        if ((DAT_800bfaea == '\0') && (uVar3 = 4, DAT_800bfa37 == '\0')) {
          uVar3 = 2;
        }
        param_1[5] = uVar3;
        func_0x00077c40(param_1,0x8014005c,0x38);
      }
      else {
        param_1[5] = 0;
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0x14,0xf);
        param_1[8] = 1;
        *param_1 = 2;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

