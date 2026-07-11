// FUN_8010a128

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010a128(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  do {
    if (DAT_1f800182 == '\0') {
      return;
    }
    pbVar2 = (byte *)*puVar3;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar3 = puVar3 + 1;
    if ((*pbVar2 & 1) != 0) {
      if (pbVar2[0xc] == 9) {
        if (((int)*(short *)(param_1 + 0x17e) & 0x8200U) == 0) {
          iVar1 = FUN_80111304(param_1,pbVar2);
                    /* WARNING: Could not recover jumptable at 0x8011332c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0x7dff98b8))();
          return;
        }
      }
      else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(pbVar2[2]) {
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
  } while( true );
}

