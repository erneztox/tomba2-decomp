// FUN_08015a10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015a10(void)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  DAT_1f800183 = DAT_1f800144;
  puVar5 = _DAT_1f80013c;
  if (_DAT_1f800150 != 0) {
    while (DAT_1f800183 != '\0') {
      pbVar3 = (byte *)*puVar5;
      DAT_1f800183 = DAT_1f800183 + -1;
      puVar5 = puVar5 + 1;
      if (((pbVar3[2] != 0x34) && (*pbVar3 != 2)) && ((*pbVar3 & 8) == 0)) {
        puVar4 = _DAT_1f800148;
        DAT_1f800182 = DAT_1f800150;
        while (DAT_1f800182 != '\0') {
          pbVar2 = (byte *)*puVar4;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar4 = puVar4 + 1;
          if ((*pbVar2 & 1) != 0) {
            if (pbVar3[2] == 0x1b) {
              if (pbVar2[2] - 1 < 0x49) {
                    /* WARNING: Could not emulate address calculation at 0x08015b30 */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((pbVar2[2] - 1) * 4 + -0x7fef7000))();
                return;
              }
            }
            else if (pbVar3[2] == 0x33) {
              if ((pbVar2[2] == 0x45) && (iVar1 = func_0x000240fc(pbVar3,pbVar2), iVar1 != 0)) {
                *pbVar3 = 2;
                pbVar3[4] = 2;
                pbVar3[5] = 3;
                pbVar3[6] = 0;
                *pbVar2 = 2;
                pbVar2[4] = 2;
                pbVar2[5] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else if (pbVar2[2] - 1 < 0x45) {
                    /* WARNING: Could not emulate address calculation at 0x08015c88 */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((pbVar2[2] - 1) * 4 + -0x7fef6ed8))();
              return;
            }
          }
        }
      }
    }
  }
  return;
}

