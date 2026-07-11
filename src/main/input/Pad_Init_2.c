/**
 * @brief Initializes controller: sets up pad buffers and callback
 * @note Original: func_8005245C at 0x8005245C
 */
// Pad_Init



void Pad_Init(void)

{
  int iVar1;
  
  DAT_800ecf4c = 0;
  DAT_800ecf4d = 0;
  MDEC_InitDecode(0,&DAT_800ecf4c,2);
  iVar1 = MDEC_SetupDecode(0);
  if (iVar1 == 6) {
    MDEC_CallbackDispatch(0,&DAT_800a3fa0);
  }
  return;
}
