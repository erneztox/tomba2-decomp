// FUN_08011f10

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011f10(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar3 = DAT_800bf839;
  cVar2 = DAT_800bf80d;
  cVar1 = *(char *)(param_1 + 0x17b);
  if (DAT_800bf871 < 6) {
    if (*(char *)(param_1 + 0x2a) == '\x03') {
      if (((((cVar1 == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0') &&
           (*(short *)(param_1 + 0x2e) < 0x47d6)) && (-0x596 < *(short *)(param_1 + 0x32))) &&
         (*(char *)(param_1 + 0x181) != '\0')) {
        DAT_1f800137 = 2;
        DAT_800bf80f = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else if ((*(char *)(param_1 + 0x2a) == '\x06') && (*(short *)(param_1 + 0x2e) < 0x4394)) {
      if ((cVar1 == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0') {
        DAT_1f800137 = 2;
        DAT_800bf80f = 2;
        DAT_800bf839 = 3;
        _DAT_800bf83a = 0x609;
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x4394;
      halt_baddata();
    }
  }
  else {
    if (DAT_800bf871 < 9) {
      if (0x476c < *(short *)(param_1 + 0x2e)) {
        if ((cVar1 == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0') {
          DAT_1f800137 = 2;
          DAT_800bf80f = 2;
          DAT_800bf839 = 3;
          _DAT_800bf83a = 0x604;
          halt_baddata();
        }
        *(undefined2 *)(param_1 + 0x2e) = 0x476c;
        halt_baddata();
      }
      if (0x3864 < *(short *)(param_1 + 0x2e)) {
        return;
      }
      if ((cVar1 == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0') {
        DAT_1f800137 = 2;
        DAT_800bf80f = 2;
        DAT_800bf839 = 3;
        _DAT_800bf83a = 0x60a;
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = 0x3865;
      halt_baddata();
    }
    if (DAT_800bf871 < 0x11) {
      if (*(char *)(param_1 + 0x2a) == '\x06') {
        if (0x4236 < *(short *)(param_1 + 0x2e)) {
          if ((DAT_800bf873 == '\0') &&
             ((cVar1 == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0')) {
            DAT_1f800137 = 2;
            DAT_800bf80f = 2;
            DAT_800bf839 = '\x03';
            _DAT_800bf83a = 0x605;
          }
          *(undefined2 *)(param_1 + 0x2e) = 0x4236;
          *(undefined2 *)(param_1 + 0x36) = 0x20ca;
          func_0x00054198();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else if (((*(char *)(param_1 + 0x2a) == '\a') && (0x35c0 < *(short *)(param_1 + 0x2e))) &&
              ((-0x596 < *(short *)(param_1 + 0x32) &&
               ((*(char *)(param_1 + 0x181) != '\0' &&
                ((cVar1 == '\0' && DAT_800bf80d == '\0') && DAT_800bf839 == '\0')))))) {
        DAT_1f800137 = 2;
        DAT_800bf80f = 2;
        DAT_800bf839 = 3;
        _DAT_800bf83a = 0x608;
        halt_baddata();
      }
    }
    else {
      cVar4 = *(char *)(param_1 + 0x2a);
      if (cVar4 == '\x11') {
        if ((*(char *)(param_1 + 0x146) == '\x04') && (0x6030 < *(short *)(param_1 + 0x36))) {
          if ((*(short *)(param_1 + 0x32) < -0x1a2c) && (-0x1c20 < *(short *)(param_1 + 0x32))) {
            *(undefined1 *)(param_1 + 0x146) = 0;
          }
          *(undefined2 *)(param_1 + 0x36) = 0x6031;
        }
        cVar4 = *(char *)(param_1 + 0x2a);
      }
      if ((((cVar4 == '\x13') && (DAT_800bf8d5 == -1)) && (0x7774 < *(short *)(param_1 + 0x36))) &&
         ((*(short *)(param_1 + 0x32) < -0x1d4c &&
          ((cVar1 == '\0' && cVar2 == '\0') && cVar3 == '\0')))) {
        DAT_1f800137 = 2;
        DAT_1f800236 = 1;
        DAT_800bf839 = '\x01';
        DAT_800bf80f = 2;
        _DAT_800bf83a = 0x700;
      }
    }
  }
  return;
}

