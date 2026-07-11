/**
 * @brief Entity collision response: sets entity[0x29], pushes
 * @note Original: func_80020868 at 0x80020868
 */
// Entity_CollisionResponse



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80020868(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(undefined1 *)(param_2 + 0x29) = 0;
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 != *(char *)(param_2 + 3))) {
    return;
  }
  if (*(char *)(param_1 + 0x2a) != *(char *)(param_2 + 0x2a)) {
    return;
  }
  iVar5 = FUN_8001f9dc(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x5f) == '\0') {
    iVar5 = (uint)*(ushort *)(param_1 + 0x140) << 0x10;
  }
  else {
    iVar5 = (*(ushort *)(param_1 + 0x140) + 0x800) * 0x10000;
  }
  iVar6 = FUN_80083f50(iVar5 >> 0x10);
  sVar1 = *(short *)(param_1 + 0x80);
  sVar2 = *(short *)(param_2 + 0x80);
  iVar5 = FUN_80083e80(iVar5 >> 0x10);
  sVar3 = *(short *)(param_2 + 0x80);
  iVar7 = (int)_DAT_1f80009c;
  *(short *)(param_1 + 0x2e) =
       (short)(iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc) +
       *(short *)(param_2 + 0x2e) + *(short *)(param_2 + 0x60);
  *(short *)(param_1 + 0x36) =
       (*(short *)(param_2 + 0x36) + *(short *)(param_2 + 100)) -
       (short)(iVar5 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
  cVar4 = FUN_80077768(iVar7,(int)*(short *)(param_1 + 0x140),1);
  *(char *)(param_1 + 0x5f) = cVar4 + '\x02';
  if (*(char *)(param_2 + 0x5f) == *(char *)(param_1 + 0x147)) {
    return;
  }
  if (DAT_1f800230 != '\0') {
    return;
  }
  if (DAT_800bf80f != '\0') {
    return;
  }
  if (DAT_800bf873 == '\0') {
    *(undefined1 *)(param_2 + 0x29) = 1;
    DAT_800bf81f = ('\x01' - *(char *)(param_2 + 0x5f)) * '\x10';
    return;
  }
  switch(DAT_800bf870) {
  case 1:
    cVar4 = *(char *)(param_1 + 0x2a);
    if ((((cVar4 == 'I') || (cVar4 == '\x19')) || (cVar4 == '\x1a')) || (cVar4 == '\''))
    goto switchD_80020a0c_caseD_9;
    if (cVar4 != '+') {
      return;
    }
    break;
  default:
    goto switchD_80020a0c_caseD_2;
  case 5:
    if (*(char *)(param_1 + 0x2a) != '\b') {
      return;
    }
    if (*(short *)(param_1 + 0x36) < 0x2969) {
      return;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x2a) != '\a') {
      return;
    }
    if (0x1ce7 < *(short *)(param_1 + 0x2e)) {
      return;
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x2a) != '\x1f') {
      return;
    }
  case 9:
switchD_80020a0c_caseD_9:
  }
  *(undefined1 *)(param_2 + 0x29) = 1;
  DAT_800bf81f = ('\x01' - *(char *)(param_2 + 0x5f)) * '\x10';
switchD_80020a0c_caseD_2:
  return;
}
