/**
 * @brief Engine render check: validates sprite buffer, inits MDEC
 * @note Original: func_8005229C at 0x8005229C
 */
// Engine_RenderCheck



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Engine_RenderCheck(void)

{
  int iVar1;
  
  if (g_EngineState == '\x01') {
    DAT_800ecf4e = 0;
  }
  if ((DAT_800fb167 == '\0') && (_g_RenderFlag != 0)) {
    if (DAT_800ecf4e == 1) {
      iVar1 = MDEC_SetupDecode(0);
      if (iVar1 != 6) {
        return;
      }
      MDEC_CallbackDispatch(0,&DAT_800a3f98);
      DAT_800ecf4e = 2;
      return;
    }
    if (DAT_800ecf4e < 2) {
      if (DAT_800ecf4e != 0) {
        return;
      }
      if (_DAT_800ecf4c != 0) {
        _DAT_800ecf4c = 0;
        MDEC_InitDecode(0,&DAT_800ecf4c,2);
      }
      iVar1 = MDEC_SetupDecode(0);
      if (iVar1 != 6) {
        return;
      }
      MDEC_CallbackDispatch(0,&DAT_800a3f98);
      return;
    }
    if (DAT_800ecf4e == 2) {
      if (DAT_800ecf4f != '\0') {
        DAT_800ecf4f = DAT_800ecf4f + -1;
        return;
      }
      _DAT_800ecf4c = 0;
      MDEC_InitDecode(0,&DAT_800ecf4c,2);
      DAT_800ecf4e = 3;
      DAT_800ecf4f = 0;
      return;
    }
    if (DAT_800ecf4e != 3) {
      return;
    }
  }
  else {
    if (DAT_800fb167 != '\x01') {
      return;
    }
    if (_g_RenderFlag == 0) {
      return;
    }
    if (_DAT_800ecf4c != 0) {
      _DAT_800ecf4c = 0;
      MDEC_InitDecode(0,&DAT_800ecf4c,2);
    }
  }
  iVar1 = MDEC_SetupDecode(0);
  if (iVar1 == 6) {
    MDEC_CallbackDispatch(0,&DAT_800a3f98);
    DAT_800ecf4e = 0;
  }
  return;
}
