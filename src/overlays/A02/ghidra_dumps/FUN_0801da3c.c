// FUN_0801da3c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801da3c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ushort uVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar3 = _DAT_800e7eea & 0x1f;
    if (((int)(short)_DAT_800e7eea & 0xf000U) == 0x2000) {
      uVar2 = 0;
      if (uVar3 != 5) {
        if (((((uVar3 == 6) || (uVar3 == 7)) || (uVar3 == 8)) || ((uVar3 == 10 || (uVar3 == 0xc))))
           || ((uVar3 == 0xd || (uVar3 == 9)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (uVar3 == 0xe) {
          uVar2 = 8;
        }
      }
      if (uVar2 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0801db3c */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar2 * 4 + -0x7fef6aac))(_DAT_800e7eea & 0xf0);
        return;
      }
      if (*(char *)(param_1 + 3) == '\0') {
        *(undefined2 *)(param_1 + 0x40) = 0x3c;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        if (sRam80129c04 != -1) {
          uVar1 = func_0x0007e038((int)sRam80129c04,2);
          *(undefined4 *)(param_1 + 0x14) = uVar1;
          halt_baddata();
        }
        *(undefined4 *)(param_1 + 0x14) = 0;
        halt_baddata();
      }
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x40) != 0) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    }
    if ((((int)(short)_DAT_800e7eea & 0xf000U) != 0x2000) && (*(short *)(param_1 + 0x40) == 0)) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  return;
}

