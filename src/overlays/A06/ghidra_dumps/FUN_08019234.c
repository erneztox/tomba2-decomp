// FUN_08019234

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019234(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
joined_r0x08019260:
  do {
    if (DAT_1f800183 == '\0') {
      return;
    }
    pbVar2 = (byte *)*puVar3;
    DAT_1f800183 = DAT_1f800183 + -1;
    puVar3 = puVar3 + 1;
  } while ((*pbVar2 & 2) != 0);
  bVar1 = pbVar2[2];
  if (bVar1 == 1) goto LAB_080192c4;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 != 4) {
    halt_baddata();
  }
  goto LAB_080192d4;
LAB_080192c4:
  if (pbVar2[3] == 1) {
LAB_080192d4:
    func_0x0010f2e8();
  }
  goto joined_r0x08019260;
}

