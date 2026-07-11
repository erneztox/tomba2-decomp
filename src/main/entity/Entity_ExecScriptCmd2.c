/**
 * @brief Executes script command variant with different data offset
 * @note Original: func_800439A4 at 0x800439A4
 */
// Entity_ExecScriptCmd2



void FUN_800439a4(int param_1)

{
  FUN_800438d4((int)param_1->event_id,
               *(undefined1 *)(param_1->event_param + -0x7ff4074c),
               param_1->camera_mode);
  return;
}
