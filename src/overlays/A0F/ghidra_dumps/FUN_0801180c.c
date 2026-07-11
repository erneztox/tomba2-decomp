// FUN_0801180c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801180c(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ushort uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08011854 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef7060))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  puVar6 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  while (DAT_1f800182 != '\0') {
    pbVar5 = (byte *)*puVar6;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar6 = puVar6 + 1;
    if ((*pbVar5 & 1) != 0) {
      if (pbVar5[2] == 0x6a) {
        func_0x00109458(&DAT_800e7e80,pbVar5);
      }
      else if ((pbVar5[2] == 0xd3) && (iVar3 = func_0x00022f04(&DAT_800e7e80,pbVar5), iVar3 != 0)) {
        if ((pbVar5[0x46] & 1) == 0) {
          DAT_800e7eab = (undefined1)(_DAT_800e7fc0 >> 4);
          func_0x00022d08(&DAT_800e7e80,pbVar5,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  DAT_1f800182 = '\0';
  puVar6 = _DAT_1f800148;
  cVar2 = DAT_1f800150;
  if (1 < _DAT_800e7fd8) {
LAB_08011b58:
    func_0x0010a47c();
    func_0x0010a5f8();
    func_0x0010a2d4();
    if (((DAT_1f800137 == '\0') && (DAT_800bf80d == '\0')) &&
       (uVar4 = _DAT_800e7eea & 0xf00, (_DAT_800e7eea & 0x8000) != 0)) {
      _DAT_800e7eea = 0;
      DAT_800bf81e = 0;
      if (uVar4 == 0x700) {
        DAT_800e7e80 = 3;
        DAT_800e7e84 = 2;
        DAT_800e7e85 = 5;
        DAT_800e7e86 = 0;
        DAT_800e7e87 = 0;
      }
    }
    return;
  }
joined_r0x08011a84:
  do {
    DAT_1f800182 = cVar2;
    if (DAT_1f800182 == '\0') goto LAB_08011b58;
    pbVar5 = (byte *)*puVar6;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar6 = puVar6 + 1;
    cVar2 = DAT_1f800182;
    if ((*pbVar5 & 1) != 0) {
      bVar1 = pbVar5[2];
      if (bVar1 == 0x12) {
        func_0x0002311c(&DAT_800e7e80);
      }
      else if (bVar1 < 0x13) {
        if (bVar1 == 7) {
          func_0x00109ed8(&DAT_800e7e80,pbVar5,*(undefined4 *)(pbVar5 + 0xc0));
        }
      }
      else if (bVar1 == 0x17) {
        if (pbVar5[0x47] != 2) {
          func_0x0001f650(&DAT_800e7e80,pbVar5,*(undefined4 *)(pbVar5 + 0xc0));
          cVar2 = DAT_1f800182;
          goto joined_r0x08011a84;
        }
        func_0x00109808(&DAT_800e7e80,pbVar5,*(undefined4 *)(pbVar5 + 0xc0));
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

