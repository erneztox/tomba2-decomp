// FUN_0801218c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801218c(void)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  func_0x0002288c(&DAT_800e7e80);
  if (DAT_800e7e80 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080121d4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_800e7e80 * 4 + -0x7fef7030))();
    return;
  }
  func_0x00022760(&DAT_800e7e80);
  puVar5 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  while( true ) {
    do {
      if (DAT_1f800182 == '\0') {
        DAT_1f800182 = '\0';
        puVar5 = _DAT_1f800148;
        cVar2 = DAT_1f800150;
        if (_DAT_800e7fd8 < 2) {
          while (DAT_1f800182 = cVar2, DAT_1f800182 != '\0') {
            pbVar4 = (byte *)*puVar5;
            DAT_1f800182 = DAT_1f800182 + -1;
            puVar5 = puVar5 + 1;
            cVar2 = DAT_1f800182;
            if (((*pbVar4 & 1) != 0) && (pbVar4[2] == 8)) {
              func_0x00109630(&DAT_800e7e80,pbVar4,*(undefined4 *)(pbVar4 + 0xc0));
              cVar2 = DAT_1f800182;
            }
          }
        }
        func_0x0010ae50();
        func_0x0010b010();
        func_0x0010aca8();
        if (((DAT_1f800137 == '\0') && (DAT_800bf80d == '\0')) &&
           (uVar3 = _DAT_800e7eea & 0xf00, (_DAT_800e7eea & 0x8000) != 0)) {
          _DAT_800e7eea = 0;
          DAT_800bf81e = 0;
          if (uVar3 == 0x700) {
            DAT_800e7e80 = 3;
            DAT_800e7e84 = 2;
            DAT_800e7e85 = 5;
            DAT_800e7e86 = 0;
            DAT_800e7e87 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar3 == 0x900) {
            DAT_800e7eab = (undefined1)(_DAT_800e7ed6 + 0x800 >> 4);
            func_0x00022d08(&DAT_800e7e80,0,1,1);
          }
        }
        return;
      }
      pbVar4 = (byte *)*puVar5;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar5 = puVar5 + 1;
    } while ((*pbVar4 & 1) == 0);
    bVar1 = pbVar4[2];
    if (bVar1 == 0x55) {
      func_0x0010a93c(&DAT_800e7e80);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 0x56) {
      if (bVar1 != 0x4f) {
        halt_baddata();
      }
      func_0x0010a3d0(&DAT_800e7e80);
      halt_baddata();
    }
    if (bVar1 != 0x66) break;
    func_0x001093f4(&DAT_800e7e80);
  }
  halt_baddata();
}

