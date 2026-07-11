// FUN_08019308

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019308(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  func_0x0002288c(&DAT_800e7e80);
  puVar4 = _DAT_1f800154;
  cVar2 = DAT_1f80015c;
  if (7 < DAT_800e7e80) {
    while (cVar2 != '\0') {
      pbVar3 = (byte *)*puVar4;
      DAT_1f800183 = cVar2 + -1;
      puVar4 = puVar4 + 1;
      cVar2 = DAT_1f800183;
      if (((*pbVar3 & 2) == 0) && ((bVar1 = pbVar3[2], bVar1 == 0 || ((bVar1 < 6 && (3 < bVar1))))))
      {
        func_0x00112140();
        cVar2 = DAT_1f800183;
      }
    }
    DAT_1f800183 = cVar2;
    if ((((DAT_800e7ffb == '\0') && (DAT_800bf80d == '\0')) && (DAT_800bf839 == '\0')) &&
       ((10000 < _DAT_800e7eae && (_DAT_800e7eb6 < 0xaf0)))) {
      DAT_1f800236 = 1;
      DAT_1f800137 = 2;
      DAT_800bf80f = 2;
      DAT_800bf839 = '\x01';
      _DAT_800bf83a = 0x102;
    }
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x08019350 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef6c74))();
  return;
}

