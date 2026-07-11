/**
 * @brief Iterates 8 entity slots at 0x80100400, calls type-specific update function
 * @note Original: func_80026368 at 0x80026368
 */
// Entity_UpdateList8



void FUN_80026368(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = &DAT_80100400;
  iVar2 = 0;
  do {
    if (*pcVar1 != '\0') {
      (*(code *)(&PTR_FUN_8009d314)[(byte)pcVar1->kind])(pcVar1);
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x4c;
  } while (iVar2 < 8);
  return;
}
