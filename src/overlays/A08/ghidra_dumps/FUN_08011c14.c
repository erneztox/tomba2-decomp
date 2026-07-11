// FUN_08011c14

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_08011c14(int param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(param_1 + 0x17b);
  bVar2 = *(byte *)(param_1 + 0x2a);
  if (bVar2 == 5) {
    if (0x347f < *(short *)(param_1 + 0x2e)) {
      if ((-0xf14 < *(short *)(param_1 + 0x32)) &&
         ((DAT_800bf80d == '\0' && DAT_800bf839 == '\0') && cVar1 == '\0')) {
        DAT_800bf839 = '\a';
        _DAT_800bf83a = 0x809;
      }
      if (*(short *)(param_1 + 0x32) < -0x4000) {
        *(undefined2 *)(param_1 + 0x32) = 0xc000;
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3480;
      halt_baddata();
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 != 1) {
      halt_baddata();
    }
    if (*(short *)(param_1 + 0x2e) < 0x1a67) {
      if ((*(short *)(param_1 + 0x32) < -0x1450) &&
         ((DAT_800bf80d == '\0' && DAT_800bf839 == '\0') && cVar1 == '\0')) {
        DAT_800bf839 = '\a';
        _DAT_800bf83a = 0x815;
      }
      if (*(short *)(param_1 + 0x32) < -5000) {
        *(undefined2 *)(param_1 + 0x2e) = 0x1a66;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if (*(short *)(param_1 + 0x2e) < 0x1b35) {
      if ((-0xf14 < *(short *)(param_1 + 0x32)) &&
         ((DAT_800bf80d == '\0' && DAT_800bf839 == '\0') && cVar1 == '\0')) {
        func_0x00054198(param_1);
        _DAT_800bf83a = 0x703;
        DAT_1f800236 = 1;
        DAT_800bf839 = '\x01';
      }
      if (-0x1100 < *(short *)(param_1 + 0x32)) {
        *(undefined2 *)(param_1 + 0x2e) = 0x1b34;
        halt_baddata();
      }
    }
  }
  else {
    if (bVar2 != 0x23) {
      if (bVar2 == 0x25) {
        if (0x1dbb < *(short *)(param_1 + 0x2e)) {
          return DAT_800bf839;
        }
        if ((*(short *)(param_1 + 0x32) < -0x1450) &&
           ((DAT_800bf80d == '\0' && DAT_800bf839 == '\0') && cVar1 == '\0')) {
          DAT_800bf839 = '\a';
          _DAT_800bf83a = 0x816;
        }
        *(undefined2 *)(param_1 + 0x2e) = 0x1dbb;
        *(undefined2 *)(param_1 + 0x36) = 0x2aca;
        func_0x00054198();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0x332c < *(short *)(param_1 + 0x2e)) {
      if (DAT_800bf80d == '\0' && DAT_800bf839 == '\0') {
        DAT_1f800236 = 9;
        DAT_800bf839 = '\a';
        _DAT_800bf83a = 0x811;
      }
      *(undefined2 *)(param_1 + 0x182) = 0;
      *(undefined2 *)(param_1 + 0x44) = 0;
    }
  }
  return DAT_800bf839;
}

