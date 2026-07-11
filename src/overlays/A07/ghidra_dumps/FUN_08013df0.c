// FUN_08013df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013df0(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  func_0x0002288c(&DAT_800e7e80);
  puVar4 = _DAT_1f800154;
  cVar2 = DAT_1f80015c;
  if (7 < DAT_800e7e80) {
    while (DAT_1f800183 = cVar2, DAT_1f800183 != '\0') {
      pbVar3 = (byte *)*puVar4;
      DAT_1f800183 = DAT_1f800183 + -1;
      puVar4 = puVar4 + 1;
      cVar2 = DAT_1f800183;
      if (((*pbVar3 & 2) == 0) && ((bVar1 = pbVar3[2], bVar1 == 0 || ((bVar1 < 6 && (3 < bVar1))))))
      {
        func_0x0010cbb8();
        cVar2 = DAT_1f800183;
      }
    }
    if (((DAT_800e7ffb == '\0') && (DAT_800bf80d == '\0')) && (DAT_800bf839 == '\0')) {
      func_0x0010a7fc(&DAT_800e7e80);
    }
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x08013e34 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef6ee0))();
  return;
}

