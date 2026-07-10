// FUN_00000718

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000718(void)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00000764 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef7060))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  puVar5 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  while (DAT_1f800182 != '\0') {
    pbVar3 = (byte *)*puVar5;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar5 = puVar5 + 1;
    if ((*pbVar3 & 1) != 0) {
      if (pbVar3[0xc] == 9) {
        func_0x001090c4(&DAT_800e7e80);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (pbVar3[2] == 8) {
        func_0x000205cc(&DAT_800e7e80);
      }
    }
  }
  DAT_1f800182 = '\0';
  puVar5 = _DAT_1f800148;
  cVar1 = DAT_1f800150;
  if (_DAT_800e7fd8 < 2) {
    while (DAT_1f800182 = cVar1, DAT_1f800182 != '\0') {
      pbVar3 = (byte *)*puVar5;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar5 = puVar5 + 1;
      cVar1 = DAT_1f800182;
      if (((*pbVar3 & 1) != 0) && (uVar2 = pbVar3[2] - 0xc, uVar2 < 0x14)) {
                    /* WARNING: Could not emulate address calculation at 0x00000970 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(uVar2 * 4 + -0x7fef6ff0))();
        return;
      }
    }
  }
  func_0x00022554();
  pbVar3 = _DAT_800f2738;
  if (_DAT_1f800144 != 0) {
    for (; pbVar3 != (byte *)0x0; pbVar3 = *(byte **)(pbVar3 + 0x24)) {
      if (((*pbVar3 & 1) != 0) && (pbVar3[0x2b] == 0)) {
        puVar5 = _DAT_1f80013c;
        DAT_1f800182 = DAT_1f800144;
        while (DAT_1f800182 != '\0') {
          pbVar4 = (byte *)*puVar5;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar5 = puVar5 + 1;
          if (((*pbVar4 & 1) != 0) && (pbVar4[2] == 8)) {
            func_0x00021394(pbVar3,pbVar4,0x100);
          }
        }
      }
    }
  }
  func_0x001095a0();
  func_0x00109238();
  func_0x0010945c();
  if (((DAT_800bf816 != '\0') && ((DAT_800e7fc5 & 1) == 0)) &&
     ((int)_DAT_800bf812 - (int)_DAT_800e7ee2 <= (int)_DAT_800e7eb2)) {
    _DAT_800e7eb2 = _DAT_800bf812 - _DAT_800e7ee2;
    func_0x00022c78(&DAT_800e7e80);
  }
  return;
}

