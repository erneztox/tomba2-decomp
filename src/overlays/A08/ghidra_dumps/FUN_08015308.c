// FUN_08015308

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015308(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  DAT_1f800183 = DAT_1f800144;
  puVar6 = _DAT_1f80013c;
  if (_DAT_1f800150 != 0) {
    while (DAT_1f800183 != '\0') {
      pbVar5 = (byte *)*puVar6;
      DAT_1f800183 = DAT_1f800183 + -1;
      puVar6 = puVar6 + 1;
      if ((*pbVar5 != 2) && ((*pbVar5 & 8) == 0)) {
        puVar4 = _DAT_1f800148;
        DAT_1f800182 = DAT_1f800150;
joined_r0x080153a4:
        if (DAT_1f800182 != '\0') {
          pbVar3 = (byte *)*puVar4;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar4 = puVar4 + 1;
          if ((*pbVar3 & 1) != 0) {
            bVar1 = pbVar3[2];
            if (bVar1 != 0x1f) {
              if (0x1f < bVar1) {
                if (bVar1 != 0x54) {
                  halt_baddata();
                }
                iVar2 = func_0x00023a04(pbVar5,pbVar3,4);
                if (iVar2 == 2) {
                  pbVar5[0x29] = 1;
                }
                goto joined_r0x080153a4;
              }
              if (bVar1 != 0xc) {
                halt_baddata();
              }
            }
            func_0x0002421c(pbVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          goto joined_r0x080153a4;
        }
      }
    }
  }
  return;
}

