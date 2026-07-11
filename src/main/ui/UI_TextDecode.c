/**
 * @brief UI text decoder: parses control codes 0/1/2 from text buffer
 * @note Original: func_8004EAD0 at 0x8004EAD0
 */
// UI_TextDecode



char * FUN_8004ead0(char *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  
  bVar1 = *param_2;
  if (bVar1 == 1) {
    cVar2 = -0xe;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      *param_1 = -0x10;
      goto LAB_8004eb20;
    }
    cVar2 = -0xc;
  }
  else {
    if (bVar1 != 2) {
      *param_1 = -0x10;
      goto LAB_8004eb20;
    }
    cVar2 = -0xd;
  }
  *param_1 = cVar2;
LAB_8004eb20:
  pcVar3 = *(char **)(param_2 + 4);
  cVar2 = *pcVar3;
  while (param_1 = param_1 + 1, cVar2 != '\0') {
    if ((cVar2 == '\n') || (cVar2 == ' ')) {
      *param_1 = -5;
    }
    else {
      *param_1 = cVar2 + -0x20;
    }
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar3;
  }
  *param_1 = -0x10;
  param_1->flags = -1;
  return param_1 + 1;
}
