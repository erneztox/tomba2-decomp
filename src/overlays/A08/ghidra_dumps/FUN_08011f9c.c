// FUN_08011f9c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_08011f9c(int param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_1 + 0x2a);
  cVar2 = *(char *)(param_1 + 0x17b);
  if (bVar1 == 0x14) {
    if ((*(short *)(param_1 + 0x36) < 0x11de) && (-0x22ce < *(short *)(param_1 + 0x32))) {
      if ((DAT_800bf80d == '\0' && DAT_800bf839 == '\0') && cVar2 == '\0') {
        DAT_800bf839 = '\a';
        _DAT_800bf83a = 0x80d;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3680;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 0x15) {
    if (bVar1 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0x1a49 < *(short *)(param_1 + 0x2e)) {
      if ((-0x1554 < *(short *)(param_1 + 0x32)) &&
         ((DAT_800bf80d == '\0' && DAT_800bf839 == '\0') && cVar2 == '\0')) {
        DAT_800bf839 = '\a';
        _DAT_800bf83a = 0x804;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x1a4a;
      halt_baddata();
    }
  }
  else if (bVar1 == 0x23) {
    if ((*(short *)(param_1 + 0x2e) < 0x320e) && (-0x1644 < *(short *)(param_1 + 0x32))) {
      if (DAT_800bf80d == '\0' && DAT_800bf839 == '\0') {
        DAT_1f800236 = 9;
        DAT_800bf839 = '\a';
        _DAT_800bf83a = 0x803;
      }
      *(undefined2 *)(param_1 + 0x182) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 0x25) {
      halt_baddata();
    }
    if (0x1d9a < *(short *)(param_1 + 0x2e)) {
      if ((-0x1554 < *(short *)(param_1 + 0x32)) &&
         ((DAT_800bf80d == '\0' && DAT_800bf839 == '\0') && cVar2 == '\0')) {
        DAT_800bf839 = '\a';
        _DAT_800bf83a = 0x805;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x1d9b;
      *(undefined2 *)(param_1 + 0x36) = 0x2b08;
      func_0x00054198();
    }
  }
  return DAT_800bf839;
}

