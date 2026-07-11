// FUN_08016098

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08016098(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  puVar4 = _DAT_1f80014c;
  DAT_1f800182 = DAT_1f800152;
  do {
    if (DAT_1f800182 == '\0') {
      return 0;
    }
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar4 = puVar4 + 1;
  } while (((((*pbVar3 & 1) == 0) || (bVar1 = pbVar3[2], 0x30 < bVar1)) || (bVar1 < 0x2f)) ||
          (iVar2 = func_0x0010e240(param_1), iVar2 == 0));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

