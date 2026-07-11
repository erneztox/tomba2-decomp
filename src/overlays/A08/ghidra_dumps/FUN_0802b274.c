// FUN_0802b274

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802b274(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    iVar2 = func_0x0007778c(param_1);
    if (iVar2 != 0) {
      func_0x000517f8(param_1);
    }
    if (param_1[0x2b] != '\0') {
      param_1[4] = 2;
      param_1[5] = 0;
      param_1[6] = 0;
    }
    if ((param_1[1] == '\0') ||
       (iVar2 = func_0x00084080(((int)_DAT_1f800160 - (int)*(short *)(param_1 + 0x2e)) *
                                ((int)_DAT_1f800160 - (int)*(short *)(param_1 + 0x2e)) +
                                ((int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36)) *
                                ((int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36))),
       0x44c < iVar2)) {
      *param_1 = 3;
    }
    else {
      *param_1 = 1;
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar2 = func_0x0007778c(param_1);
        if (iVar2 != 0) {
          func_0x000517f8(param_1);
        }
        if ((byte)param_1[6] < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0802b424 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[6] * 4 + -0x7fef6258))();
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
      func_0x00051b70(param_1,0xc,0x44);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      param_1[0x2b] = 0;
      if ((DAT_800bfa42 & 0x80) == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0x40;
        *(undefined2 *)(param_1 + 0x82) = 0x80;
        *(undefined2 *)(param_1 + 0x84) = 0x80;
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x86) = 0x100;
        param_1[4] = param_1[4] + '\x01';
      }
      else {
        *(undefined2 *)(param_1 + 0x56) = 0xc00;
        param_1[6] = 10;
        param_1[4] = 2;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

