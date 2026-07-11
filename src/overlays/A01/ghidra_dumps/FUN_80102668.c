// FUN_80102668

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

int FUN_80102668(int param_1)

{
  int iVar1;
  
  if ((DAT_800bf816 != '\0') && (iVar1 = FUN_8010ae30(), iVar1 != 0)) {
    return iVar1;
  }
  *(undefined1 *)(param_1 + 0x72) = 0;
  if (DAT_800bf871 < 0xf) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = -0x7ff40000;
    if (DAT_800bf816 != '\0') {
LAB_80102af0:
      *(undefined1 *)(param_1 + 0x74) = 0;
      return iVar1;
    }
    if ((_DAT_800bfe56 & 2) == 0) {
      if (-0x15e1 < _DAT_1f8000d6) {
        *(undefined1 *)(param_1 + 0x74) = 2;
        return -0x15e0;
      }
      iVar1 = 8;
      if (-0x29d8 < _DAT_1f8000d6) goto LAB_80102af0;
    }
    else {
      iVar1 = 0x1f8000d0;
      if (-0x1389 < _DAT_1f8000d6) {
        *(undefined1 *)(param_1 + 0x74) = 2;
        return -5000;
      }
      if (-0x29d8 < _DAT_1f8000d6) {
        *(undefined1 *)(param_1 + 0x74) = 0;
        goto LAB_8010ba90;
      }
    }
    iVar1 = 0x1f8000d0;
    *(undefined1 *)(param_1 + 0x74) = 8;
    _DAT_1f8000d6 = -0x29d8;
    *(undefined2 *)(param_1 + 0x4a) = 0xd628;
  }
  else {
    FUN_8010af6c(param_1,&DAT_800e7e80);
    iVar1 = param_1;
  }
LAB_8010ba90:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*(undefined1 *)(iVar1 + 5)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    return -0x7fef0000;
  }
}

