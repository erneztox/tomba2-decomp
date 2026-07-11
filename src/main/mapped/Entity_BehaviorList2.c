/**
 * @brief Entity behavior list variant 2: checks timer + DAT_800bf80d flag
 * @note Original: func_80022760 at 0x80022760
 */
// Entity_BehaviorList2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80022760(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  if (((*(short *)(param_1 + 0x16e) == 0) || (DAT_800bf80d != '\0')) ||
     (uVar2 = 0, puVar4 = _DAT_1f800154, cVar1 = DAT_1f80015c,
     (*(ushort *)(param_1 + 0x17e) & 0x200) != 0)) {
    return;
  }
joined_r0x800227c8:
  DAT_800bf80d = uVar2;
  if (cVar1 == '\0') {
    DAT_1f800182 = cVar1;
    return;
  }
  pcVar3 = (char *)*puVar4;
  DAT_1f800182 = cVar1 + -1;
  puVar4 = puVar4 + 1;
  if (*pcVar3 != '\x01') goto switchD_8002281c_caseD_5;
  switch(pcVar3[2]) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\a':
    goto switchD_8002281c_caseD_0;
  case '\x04':
    if (pcVar3[0x5e] == '\x02') {
      func_0x80114e74(param_1);
      uVar2 = DAT_800bf80d;
      cVar1 = DAT_1f800182;
      goto joined_r0x800227c8;
    }
switchD_8002281c_caseD_0:
    FUN_80022060(param_1);
    uVar2 = DAT_800bf80d;
    cVar1 = DAT_1f800182;
    goto joined_r0x800227c8;
  default:
    break;
  case '\x06':
    FUN_80022190(param_1);
  }
switchD_8002281c_caseD_5:
  uVar2 = DAT_800bf80d;
  cVar1 = DAT_1f800182;
  goto joined_r0x800227c8;
}
