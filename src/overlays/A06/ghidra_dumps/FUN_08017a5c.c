// FUN_08017a5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017a5c(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08017aa0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef6938))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  func_0x0010f91c(&DAT_800e7e80);
  if ((DAT_800e7e80 != 6) && (_DAT_800e7fd8 < 2)) {
    func_0x0010fecc(&DAT_800e7e80);
  }
  func_0x00022554();
  func_0x001102a4();
  func_0x0011065c();
  puVar3 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
joined_r0x08017b20:
  do {
    if (DAT_1f800183 == '\0') {
      func_0x0010f608();
      func_0x0010f870();
      func_0x0010b59c(&DAT_800e7e80);
      return;
    }
    pbVar2 = (byte *)*puVar3;
    DAT_1f800183 = DAT_1f800183 + -1;
    puVar3 = puVar3 + 1;
  } while ((*pbVar2 & 2) != 0);
  bVar1 = pbVar2[2];
  if (bVar1 == 1) goto LAB_08017b84;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 != 4) {
    halt_baddata();
  }
  goto LAB_08017b94;
LAB_08017b84:
  if (pbVar2[3] == 1) {
LAB_08017b94:
    func_0x0010f2e8();
  }
  goto joined_r0x08017b20;
}

