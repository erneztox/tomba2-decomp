/**
 * @brief Dispatches CD event callback via function table at 0x800ABDA0+0x18
 * @note Original: func_80085C44 at 0x80085C44
 */
// CD_CallbackDispatch



void FUN_80085c44(void)

{
  (*PTR_PTR_800abda0->script_data)();
  return;
}
