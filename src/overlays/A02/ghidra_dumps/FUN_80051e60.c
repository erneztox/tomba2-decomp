// FUN_80051e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80051e60(void)

{
  short *psVar1;
  undefined4 uVar2;
  
  _DAT_1f800138 = (short *)&DAT_801fe000;
  do {
    if (*_DAT_1f800138 == 2) {
LAB_80051ed0:
      psVar1 = _DAT_1f800138 + 2;
      *_DAT_1f800138 = 4;
      FUN_80080880(*(undefined4 *)psVar1);
    }
    else if (*_DAT_1f800138 == 3) {
      FUN_80080890();
      uVar2 = FUN_80080860(*(undefined4 *)(_DAT_1f800138 + 6),*(undefined4 *)(_DAT_1f800138 + 4),
                           *(undefined4 *)(_DAT_1f800138 + 8));
      *(undefined4 *)(_DAT_1f800138 + 2) = uVar2;
      FUN_800808a0();
      goto LAB_80051ed0;
    }
    _DAT_1f800138 = _DAT_1f800138 + 0x38;
    if ((short *)0x801fe14f < _DAT_1f800138) {
      return;
    }
  } while( true );
}

