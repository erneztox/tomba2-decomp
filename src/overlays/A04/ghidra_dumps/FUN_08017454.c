// FUN_08017454

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_08017454(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  puVar5 = _DAT_1f80014c;
  DAT_1f800182 = DAT_1f800152;
  do {
    while( true ) {
      do {
        if (DAT_1f800182 == '\0') {
          return _DAT_1f800080;
        }
        pbVar4 = (byte *)*puVar5;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar5 = puVar5 + 1;
      } while ((*pbVar4 & 1) == 0);
      bVar1 = pbVar4[2];
      if (bVar1 == 8) {
        func_0x0010d700(param_1,pbVar4,*(undefined4 *)(pbVar4 + 0xc0));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (bVar1 < 9) break;
      if (bVar1 == 0x11) {
        iVar3 = func_0x00024bd8(param_1,pbVar4,*(undefined4 *)(pbVar4 + 0xc0));
        if (iVar3 != 0) {
          pbVar4[0x29] = 1;
          *(undefined1 *)(param_1 + 0x164) = 3;
          _DAT_1f800080 = pbVar4;
          DAT_1f800182 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 0x35) {
          halt_baddata();
        }
        iVar3 = func_0x00024bd8(param_1,pbVar4,*(undefined4 *)(pbVar4 + 0xc0));
        if (iVar3 != 0) {
          DAT_800bf81e = 0;
          sVar2 = *(short *)(pbVar4 + 0x80);
          pbVar4[0x29] = 1;
          *(undefined1 *)(param_1 + 0x164) = 0x81;
          *(undefined1 *)(param_1 + 0x15c) = 0;
          DAT_1f800182 = '\0';
          _DAT_1f800080 = pbVar4;
          *(short *)(param_1 + 0x152) = sVar2 + *(short *)(param_1 + 0x80) + -0xc;
        }
      }
    }
    if (bVar1 != 1) {
      halt_baddata();
    }
    iVar3 = func_0x00024bd8(param_1,pbVar4,*(undefined4 *)(pbVar4 + 0xc0));
  } while (iVar3 == 0);
  pbVar4[0x29] = 1;
  *(short *)(param_1 + 0x152) = *(short *)(pbVar4 + 0x80) + *(short *)(param_1 + 0x80) + -0xc;
  bVar1 = pbVar4[3];
  if (bVar1 == 99) {
    DAT_1f800137 = 2;
    *(undefined1 *)(param_1 + 4) = 4;
    *(undefined1 *)(param_1 + 0x164) = 1;
    _DAT_1f800166 = 0;
    _DAT_1f800190 = 0;
  }
  else {
    if ((bVar1 != 0) && (bVar1 != 0x62)) {
      *(undefined1 *)(param_1 + 0x164) = 9;
      *(undefined1 *)(param_1 + 0x15c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x164) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

