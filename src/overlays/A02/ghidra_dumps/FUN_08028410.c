// FUN_08028410

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028410(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if ((byte)param_1[3] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08028618 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef6844))();
      return;
    }
    if (param_1[1] != '\0') {
      func_0x000518fc(param_1);
    }
    param_1[0x29] = 0;
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
      if (param_1[5] == '\0') {
        param_1[5] = 1;
      }
      else {
        param_1[5] = 0;
        iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfb4,0x80129258);
        if (iVar2 != 0) {
          return;
        }
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
        func_0x00040cdc(param_1,0x80139240,0x800a3d18);
        param_1[0x7b] = 4;
        func_0x00041718(param_1,4,0);
        param_1[0xb] = 0x40;
        *param_1 = 9;
        *(undefined2 *)(param_1 + 0x80) = 0xaa;
        *(undefined2 *)(param_1 + 0x82) = 0x154;
        *(undefined2 *)(param_1 + 0x84) = 0xe0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x86) = 0x180;
        param_1[0x2b] = 0;
        param_1[0x29] = 0;
        if ((byte)param_1[3] < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0802853c */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)(byte)param_1[3] * 4 + -0x7fef685c))();
          return;
        }
        func_0x00126c18(param_1);
        param_1[5] = 0;
        param_1[4] = param_1[4] + '\x01';
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

