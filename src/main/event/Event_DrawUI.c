/**
 * @brief Event UI drawer: checks DAT_800bf81a/b, draws UI elements
 * @note Original: func_80034338 at 0x80034338
 */
// Event_DrawUI



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80034338(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = DAT_800bf81a != '\0';
  if (bVar1) {
    FUN_8004eddc(DAT_800e7eec,DAT_800bf88c);
  }
  bVar2 = DAT_800bf81b != '\0';
  if (bVar2) {
    FUN_8004eddc(DAT_800e7eed + 10,DAT_800bf88d + 10);
    FUN_80067da8(&DAT_800e7e80);
  }
  bVar2 = bVar2 || bVar1;
  if (DAT_800bf81d == '\x01') {
    if (DAT_800e7eef == '\0') {
      bVar2 = true;
      FUN_8004d6d4(DAT_800bf88f);
    }
    else {
      bVar2 = true;
      FUN_8004eddc(DAT_800e7eef,DAT_800bf88f);
    }
  }
  else {
    if (DAT_800bf81d == '\x02') {
      FUN_8004d6f4(DAT_800e7eef);
    }
    else if (DAT_800bf81d != -0x7e) goto LAB_8003443c;
    bVar2 = true;
    DAT_800bf88f = 0;
    DAT_800e7eef = '\0';
  }
LAB_8003443c:
  if (DAT_800bf81c == '\x01') {
    if (DAT_800e7eee == '\0') {
      bVar2 = true;
      FUN_8004d6d4(DAT_800bf88e);
    }
    else {
      bVar2 = true;
      FUN_8004eddc(DAT_800e7eee,DAT_800bf88e);
    }
  }
  else if (DAT_800bf81c == '\x02') {
    FUN_8004d6f4(DAT_800e7eee);
    DAT_800bf81c = '\0';
    DAT_800bf88e = 0;
    DAT_800e7eee = '\0';
    *(undefined1 *)(_DAT_800e7ef4 + 4) = 3;
    _DAT_800e7ef4 = 0;
  }
  if (DAT_800bf80a != '\0') {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_80054198(&DAT_800e7e80);
    DAT_800e7e84 = 4;
    DAT_800e7e85 = 0x11;
    DAT_800e7e86 = 0;
    DAT_1f800137 = 2;
    DAT_800e7e80 = DAT_800e7e80 | 2;
  }
  FUN_8009a420(param_1,0,4);
  DAT_800bf81e = 0;
  return;
}
