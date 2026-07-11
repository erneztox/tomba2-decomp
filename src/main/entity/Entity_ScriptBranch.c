/**
 * @brief Branches script execution: if entity[0x72]=0 calls title, else calls 0x80042354
 * @note Original: func_800423FC at 0x800423FC
 */
// Entity_ScriptBranch



void FUN_800423fc(int param_1)

{
  if (param_1->event_id == 0) {
    FUN_80042310();
  }
  else {
    FUN_80042354(*(undefined1 *)(param_1 + 0x72),*(undefined1 *)(param_1 + 0x74));
  }
  return;
}
