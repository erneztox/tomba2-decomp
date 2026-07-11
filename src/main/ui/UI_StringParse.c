/**
 * @brief UI string parser: tokenizes string by spaces, calls handler
 * @note Original: func_80073750 at 0x80073750
 */
// UI_StringParse



int UI_StringParse(char *param_1)

{
  s8 cVar1;
  s32 bVar2;
  int local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  bVar2 = false;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (cVar1 == '\n') {
      bVar2 = true;
    }
    param_1 = param_1 + 1;
    if (bVar2) {
      local_4 = local_4 + 1;
    }
    else {
      local_8 = local_8 + 1;
    }
    cVar1 = *param_1;
  }
  if (bVar2) {
    if (local_4 < local_8) {
      local_4 = local_8;
    }
    local_8 = -local_4;
  }
  return local_8;
}
