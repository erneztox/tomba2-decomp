// FUN_00001238

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001238(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0000127c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef7060))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  func_0x00109db8(&DAT_800e7e80);
  puVar4 = _DAT_1f800148;
  cVar2 = DAT_1f800150;
  if (1 < _DAT_800e7fd8) {
LAB_000013ec:
    func_0x00109f44();
    func_0x0010a0c0();
    func_0x00109cec();
    func_0x00109b30();
    if (DAT_1f800137 == '\0') {
      func_0x0010967c(&DAT_800e7e80);
    }
    return;
  }
joined_r0x00001374:
  do {
    DAT_1f800182 = cVar2;
    if (DAT_1f800182 == '\0') goto LAB_000013ec;
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar4 = puVar4 + 1;
    cVar2 = DAT_1f800182;
    if ((*pbVar3 & 1) != 0) {
      bVar1 = pbVar3[2];
      if (bVar1 == 0x12) {
        func_0x0002311c(&DAT_800e7e80);
      }
      else if (bVar1 == 0x48) {
        func_0x00109870(&DAT_800e7e80);
        cVar2 = DAT_1f800182;
        goto joined_r0x00001374;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  } while( true );
}

