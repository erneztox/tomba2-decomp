// FUN_08014f18

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_08014f18(void)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  _DAT_1f800080 = (byte *)0x0;
  puVar4 = _DAT_1f800140;
  DAT_1f800182 = DAT_1f800146;
  while (DAT_1f800182 != '\0') {
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar4 = puVar4 + 1;
    if (((((*pbVar3 & 1) != 0) && (pbVar3[0xc] == 9)) && (pbVar3[2] == 0x17)) &&
       (iVar2 = func_0x0002300c(&DAT_800e7e80,pbVar3,(int)*(short *)(pbVar3 + 0x80) << 1),
       iVar2 != 0)) {
      DAT_1f800182 = '\0';
      _DAT_1f800080 = pbVar3;
      pbVar3[0x2b] = 2;
    }
  }
  DAT_1f800182 = '\0';
  puVar4 = _DAT_1f80014c;
  cVar1 = DAT_1f800152;
  if (_DAT_1f800080 == (byte *)0x0) {
    while (DAT_1f800182 = cVar1, DAT_1f800182 != '\0') {
      pbVar3 = (byte *)*puVar4;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar4 = puVar4 + 1;
      cVar1 = DAT_1f800182;
      if ((*pbVar3 & 1) != 0) {
        if (pbVar3[2] == 0x32) {
          iVar2 = func_0x0002300c(&DAT_800e7e80,pbVar3,(int)*(short *)(pbVar3 + 0x80));
          cVar1 = DAT_1f800182;
          if (iVar2 != 0) {
            DAT_1f800182 = 0;
            _DAT_1f800080 = pbVar3;
            pbVar3[0x2b] = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if ((pbVar3[2] == 0x4e) && (pbVar3[0x5e] == 1)) {
          DAT_1f800182 = '\0';
          _DAT_1f800080 = pbVar3;
          cVar1 = DAT_1f800182;
        }
      }
    }
  }
  return _DAT_1f800080;
}

