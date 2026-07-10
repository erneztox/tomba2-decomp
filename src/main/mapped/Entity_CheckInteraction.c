/**
 * @brief Checks if two entities can interact: same type, valid spawn check
 * @note Original: func_80023618 at 0x80023618
 */
// Entity_CheckInteraction



void FUN_80023618(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x2a) == *(char *)(param_2 + 0x2a)) &&
     (iVar1 = FUN_8001f9dc(), iVar1 != 0)) {
    FUN_8001e860(param_1,param_2,0,0);
    if (*(byte *)(param_1 + 2) - 1 < 9) {
      *(undefined1 *)(param_2 + 0x2b) = 1;
    }
    DAT_1f800182 = 0;
  }
  return;
}
