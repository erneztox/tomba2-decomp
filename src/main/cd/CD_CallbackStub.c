/**
 * @brief CD event callback stub: calls 0x8008A00C with preset params
 * @note Original: func_80045558 at 0x80045558
 */
// CD_CallbackStub



void CD_CallbackStub(u8 param_1)

{
  CD_LoadChunk(0x8018a000,param_1);
  return;
}
