/**
 * @brief Audio channel setter: looks up channel struct, applies params
 * @note Original: func_8008EB60 at 0x8008EB60
 */
// Audio_SetChannel



void FUN_8008eb60(short param_1,short param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)param_1;
  iVar5 = (int)param_2;
  iVar6 = *(int *)(&DAT_80104c30 + iVar4 * 4) + iVar5 * 0xb0;
  cVar3 = *(char *)(iVar6 + 0x1b);
  if (cVar3 == '(') {
    pcVar1 = *(code **)(iVar5 * 4 + iVar4 * 0x40 + -0x7fefb350);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar4,iVar5,param_3);
    }
    cVar3 = *(char *)(iVar6 + 0x1b);
  }
  if (((cVar3 != '\x1e') && (cVar3 != '\x14')) && (cVar3 != '(')) {
    *(undefined1 *)(iVar6 + 0x1a) = param_3;
    *(undefined1 *)(iVar6 + 0x1c) = 0;
    *(char *)(iVar6 + 0x1f) = *(char *)(iVar6 + 0x1f) + '\x01';
  }
  uVar2 = FUN_80090160((int)param_1,(int)param_2);
  *(undefined4 *)(iVar6 + 0x90) = uVar2;
  return;
}
