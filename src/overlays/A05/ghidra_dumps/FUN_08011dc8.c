// FUN_08011dc8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_08011dc8(void)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  _DAT_1f800080 = (byte *)0x0;
  puVar4 = _DAT_1f800140;
  DAT_1f800182 = DAT_1f800146;
joined_r0x08011e10:
  do {
    if (DAT_1f800182 == '\0') {
      puVar4 = _DAT_1f80014c;
      DAT_1f800182 = DAT_1f800152;
      if (_DAT_1f800080 == (byte *)0x0) {
        while (DAT_1f800182 != '\0') {
          pbVar3 = (byte *)*puVar4;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar4 = puVar4 + 1;
          if ((((*pbVar3 & 1) != 0) && (pbVar3[2] == 0x32)) &&
             (iVar1 = func_0x0002300c(&DAT_800e7e80,pbVar3,(int)*(short *)(pbVar3 + 0x80)),
             iVar1 != 0)) {
            DAT_1f800182 = '\0';
            _DAT_1f800080 = pbVar3;
            pbVar3[0x2b] = 2;
          }
        }
      }
      DAT_1f800182 = 0;
      return _DAT_1f800080;
    }
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar4 = puVar4 + 1;
  } while (((*pbVar3 & 1) == 0) || (pbVar3[0xc] != 9));
  uVar2 = (uint)pbVar3[2];
  if (2 < uVar2 - 0x23) goto code_r0x08011e70;
  goto LAB_08011ed0;
code_r0x08011e70:
  if (uVar2 == 6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((uVar2 == 1) || (uVar2 == 0x17)) {
LAB_08011ed0:
    iVar1 = func_0x0002300c(&DAT_800e7e80,pbVar3,*(short *)(pbVar3 + 0x80) * 3);
    if (iVar1 != 0) {
      DAT_1f800182 = '\0';
      _DAT_1f800080 = pbVar3;
      pbVar3[0x2b] = 2;
    }
  }
  goto joined_r0x08011e10;
}

