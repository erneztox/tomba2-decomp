/**
 * @brief Audio channel setter: looks up channel struct, applies params
 * @note Original: func_8008EB60 at 0x8008EB60
 */
// Audio_SetChannel



void FUN_8008eb60(s16 param_1,s16 param_2,u8 param_3)

{
  code *pcVar1;
  s32 uVar2;
  s8 cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)param_1;
  iVar5 = (int)param_2;
  iVar6 = *(int *)(&g_AudioChannels + iVar4 * 4) + iVar5 * 0xb0;
  cVar3 = *(s8*)(iVar6 + 0x1b);
  if (cVar3 == '(') {
    pcVar1 = *(code **)(iVar5 * 4 + iVar4 * 0x40 + -0x7fefb350);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(iVar4,iVar5,param_3);
    }
    cVar3 = *(s8*)(iVar6 + 0x1b);
  }
  if (((cVar3 != '\x1e') && (cVar3 != '\x14')) && (cVar3 != '(')) {
    *(u8 *)(iVar6 + 0x1a) = param_3;
    *(u8 *)(iVar6 + 0x1c) = 0;
    *(s8*)(iVar6 + 0x1f) = *(s8*)(iVar6 + 0x1f) + '\x01';
  }
  uVar2 = FUN_80090160((int)param_1,(int)param_2);
  *(s32 *)(iVar6 + 0x90) = uVar2;
  return;
}
