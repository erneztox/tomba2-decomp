// FUN_0802f424

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802f424(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (4 < *(byte *)(param_1 + 0x5e)) {
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x000518fc(param_1);
      }
      *(undefined1 *)(param_1 + 0x2b) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Could not emulate address calculation at 0x0802f560 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fef6598))();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfe0,0x801319d8);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
      func_0x00040cdc(param_1,0x8014005c,0x800a3d18);
      *(undefined1 *)(param_1 + 0xb) = 0x40;
      *(undefined2 *)(param_1 + 0x80) = 0x80;
      *(undefined2 *)(param_1 + 0x82) = 0x100;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0x111;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if (DAT_800bf8da == -1) {
        if (DAT_800bf8d9 == -1) {
          *(undefined1 *)(param_1 + 0x5e) = 2;
          *(undefined1 *)(param_1 + 0x2b) = 0;
          *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x5e) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x5e) = 0;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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

