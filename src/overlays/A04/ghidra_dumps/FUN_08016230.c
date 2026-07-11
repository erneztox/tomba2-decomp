// FUN_08016230

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08016230(int param_1)

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
      if (pbVar1[2] - 8 < 200) {
                    /* WARNING: Could not emulate address calculation at 0x08016304 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((pbVar1[2] - 8) * 4 + -0x7fef6d18))();
        return;
      }
    }
  } while (((int)*(short *)(param_1 + 0x17e) & 0x8200U) != 0);
  func_0x0010def0(param_1,pbVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

