// FUN_0802c948

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802c948(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if ((_DAT_800bfe56 & 0x80) == 0) {
        iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfb8,0x801317f8);
        if (iVar2 == 0) {
          *(undefined2 *)(param_1 + 0x80) = 0xc0;
          *(undefined2 *)(param_1 + 0x82) = 0x180;
          *(undefined2 *)(param_1 + 0x84) = 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfb8,0x80131870);
        if (iVar2 == 0) {
          *(undefined2 *)(param_1 + 0x80) = 0x80;
          *(undefined2 *)(param_1 + 0x82) = 0x100;
          *(undefined2 *)(param_1 + 0x84) = 0xc0;
          *(undefined2 *)(param_1 + 0x86) = 0x140;
          *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
          func_0x00040cdc(param_1,0x8014005c,0x800a3d18);
          param_1[0xb] = 0x80;
          *param_1 = 9;
          *(undefined2 *)(param_1 + 0x58) = 0;
          *(undefined2 *)(param_1 + 0x54) = 0;
          param_1[0x5e] = DAT_800bfa2e;
          param_1[4] = param_1[4] + '\x01';
          halt_baddata();
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
  if (5 < (byte)param_1[0x5e]) {
    if (param_1[1] != '\0') {
      func_0x000518fc(param_1);
    }
    param_1[0x2b] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not emulate address calculation at 0x0802caa4 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)(byte)param_1[0x5e] * 4 + -0x7fef65f4))();
  return;
}

