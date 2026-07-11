// FUN_08018814

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08018814(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  _DAT_1f800080 = 0;
  puVar4 = _DAT_1f800140;
  DAT_1f800182 = DAT_1f800146;
  do {
    do {
      if (DAT_1f800182 == '\0') {
        _DAT_1f800080 = 0;
        puVar4 = _DAT_1f80014c;
        DAT_1f800182 = DAT_1f800152;
        while (DAT_1f800182 != '\0') {
          pbVar3 = (byte *)*puVar4;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar4 = puVar4 + 1;
          if (((*pbVar3 & 1) != 0) && (pbVar3[2] == 0x23)) {
            func_0x00111640(&DAT_800e7e80);
          }
        }
        return _DAT_1f800080;
      }
      pbVar3 = (byte *)*puVar4;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar4 = puVar4 + 1;
    } while (((*pbVar3 & 1) == 0) || (pbVar3[0xc] != 9));
    bVar1 = pbVar3[2];
    if (bVar1 != 0x15) {
      if (bVar1 < 0x16) {
        if (bVar1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 == 0x18) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (bVar1 != 0x35) {
          halt_baddata();
        }
      }
    }
    iVar2 = func_0x0002300c(&DAT_800e7e80,pbVar3,(int)*(short *)(pbVar3 + 0x80) << 1);
    if (iVar2 != 0) {
      pbVar3[0x2b] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

