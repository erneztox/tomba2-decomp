// FUN_00000b94

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000b94(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  DAT_1f800183 = DAT_1f800144;
  puVar6 = _DAT_1f80013c;
  if (_DAT_1f800150 != 0) {
joined_r0x00000be0:
    if (DAT_1f800183 != '\0') {
      pbVar4 = (byte *)*puVar6;
      DAT_1f800183 = DAT_1f800183 + -1;
      puVar6 = puVar6 + 1;
      if ((*pbVar4 != 2) && ((*pbVar4 & 8) == 0)) {
        puVar5 = _DAT_1f800148;
        DAT_1f800182 = DAT_1f800150;
joined_r0x00000c38:
        do {
          if (DAT_1f800182 == '\0') break;
          pbVar3 = (byte *)*puVar5;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar5 = puVar5 + 1;
          if ((*pbVar3 & 1) != 0) {
            bVar1 = pbVar3[2];
            if (bVar1 == 0x48) {
              iVar2 = func_0x0002421c(pbVar4);
              if (iVar2 != 2) goto joined_r0x00000c38;
              pbVar4[0x29] = 1;
            }
            else if (bVar1 < 0x49) {
              if (bVar1 == 0x18) {
                if ((*pbVar4 == 4) && (iVar2 = func_0x000240fc(pbVar4), iVar2 != 0)) {
                  pbVar4[0x5e] = 1;
                  *pbVar4 = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                goto joined_r0x00000c38;
              }
            }
            else if (bVar1 == 100) {
              if (pbVar4[2] == 0x69) {
                func_0x00109308(pbVar4);
              }
              goto joined_r0x00000c38;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        } while( true );
      }
      goto joined_r0x00000be0;
    }
  }
  return;
}

