// FUN_080144f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080144f4(int param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  
  puVar2 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  do {
    while( true ) {
      do {
        if (DAT_1f800182 == '\0') {
          return;
        }
        pbVar1 = (byte *)*puVar2;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar2 = puVar2 + 1;
      } while ((*pbVar1 & 1) == 0);
      if (pbVar1[0xc] == 9) break;
      if (pbVar1[2] - 1 < 0x50) {
                    /* WARNING: Could not emulate address calculation at 0x080145b0 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((pbVar1[2] - 1) * 4 + -0x7fef6d60))();
        return;
      }
    }
  } while (((int)*(short *)(param_1 + 0x17e) & 0x8200U) != 0);
  func_0x0010b724(param_1,pbVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

