// CRD_StatusText (CRD_StatusText) - Status text display

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CRD_StatusText(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  short local_18->sub_type;
  s16 local_12;
  int local_10;
  s32 local_c;
  
  if (*_DAT_800bf4a8 != '\0') {
    GPU_RenderSprite_V1(100,8,0,_DAT_800bf4a8,4);
    UI_DrawPanel(0x8018a114,0x40,0,4);
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
    local_18->type = (short)local_10 * -4 + 0xa0;
    local_18->kind = (short)(local_10 << 3);
    local_12 = 0x10;
    if ((0x38 < _DAT_800bf4b0) && ((_DAT_800bf4b0 < 0x3b || (_DAT_800bf4b0 == 0x40)))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    local_18->flags = 0x52;
    GPU_RenderSprite_V1((int)local_18->type,0x52,0,_DAT_800bf4a4,4);
    UI_DrawPanel(local_18,0x40,0,4);
  }
  return;
}

