// CRD_StatusText (CRD_StatusText) - Status text display

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_StatusText(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  short local_18 [3];
  undefined2 local_12;
  int local_10;
  undefined4 local_c;
  
  if (*_DAT_800bf4a8 != '\0') {
    func_0x00079374(100,8,0,_DAT_800bf4a8,4);
    func_0x0005019c(0x8018a114,0x40,0,4);
  }
  if (*_DAT_800bf4a4 != '\0') {
    iVar2 = 0;
    local_c = 1;
    local_10 = 0;
    cVar1 = *_DAT_800bf4a4;
    pcVar3 = _DAT_800bf4a4;
    while (cVar1 != '\0') {
      if (cVar1 == '\n') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar3;
    }
    if (0 < iVar2) {
      local_10 = iVar2;
    }
    local_18[0] = (short)local_10 * -4 + 0xa0;
    local_18[2] = (short)(local_10 << 3);
    local_12 = 0x10;
    if ((0x38 < _DAT_800bf4b0) && ((_DAT_800bf4b0 < 0x3b || (_DAT_800bf4b0 == 0x40)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_18[1] = 0x52;
    func_0x00079374((int)local_18[0],0x52,0,_DAT_800bf4a4,4);
    func_0x0005019c(local_18,0x40,0,4);
  }
  return;
}

