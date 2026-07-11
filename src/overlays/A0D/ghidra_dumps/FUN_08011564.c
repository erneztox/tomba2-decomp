// FUN_08011564

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011564(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080115a8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef7060))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  func_0x0010a04c(&DAT_800e7e80);
  puVar4 = _DAT_1f800148;
  cVar2 = DAT_1f800150;
  if (1 < _DAT_800e7fd8) {
LAB_08011780:
    func_0x0010a1d4();
    func_0x0010a3c0();
    func_0x00109ea8();
    if (((DAT_1f800137 == '\0') && (DAT_800bf80d == '\0')) && (-0x4b0 < _DAT_800e7eb2)) {
      _DAT_800e7eb2 = -0x4b0;
      DAT_800bf81e = 0;
      DAT_800e7e80 = 3;
      DAT_800e7e84 = 2;
      DAT_800e7e85 = 4;
      DAT_800e7e86 = 0;
      DAT_800e7e87 = 0;
      _DAT_1f80019e = 0xfb50;
    }
    return;
  }
joined_r0x080116d4:
  do {
    DAT_1f800182 = cVar2;
    if (DAT_1f800182 == '\0') goto LAB_08011780;
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar4 = puVar4 + 1;
    cVar2 = DAT_1f800182;
    if ((*pbVar3 & 1) != 0) {
      bVar1 = pbVar3[2];
      if (bVar1 == 0x12) {
        func_0x0002311c(&DAT_800e7e80);
      }
      else if (bVar1 < 0x13) {
        if (bVar1 == 0x11) {
          func_0x00109678(&DAT_800e7e80,pbVar3,*(undefined4 *)(pbVar3 + 0xc0));
          cVar2 = DAT_1f800182;
          goto joined_r0x080116d4;
        }
      }
      else if (bVar1 == 0x46) {
        func_0x00109c54(&DAT_800e7e80);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

