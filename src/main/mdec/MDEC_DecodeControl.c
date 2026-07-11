/**
 * @brief MDEC decode controller: reads macroblock header, dispatches
 * @note Original: func_800892A4 at 0x800892A4
 */
// MDEC_DecodeControl



void FUN_800892a4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = **(byte **)(param_1 + 0x3c) >> 4;
  if ((**(byte **)(param_1 + 0x3c) & 0xf0) == 0) {
    **(undefined1 **)(param_1 + 0x30) = 0xff;
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 1) = 0;
    *(undefined1 *)(param_1 + 0xe8) = 0;
    *(undefined1 *)(param_1 + 0x35) = 0;
    (*DAT_800abe3c)();
    return;
  }
  cVar2 = *(char *)(param_1 + 0xe8);
  *(byte *)(param_1 + 0xe8) = bVar1;
  if (bVar1 == 0xf) {
    *(char *)(param_1 + 0xe8) = cVar2;
  }
  else {
    **(undefined1 **)(param_1 + 0x30) = 0;
    iVar3 = 2;
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 1) = **(undefined1 **)(param_1 + 0x3c);
    *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_1 + 0x44);
    if (2 < *(byte *)(param_1 + 0x44)) {
      do {
        *(undefined1 *)(*(int *)(param_1 + 0x30) + iVar3) =
             *(undefined1 *)(*(int *)(param_1 + 0x3c) + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x44));
    }
  }
  if (((*(char *)(*(int *)(param_1 + 0x3c) + 1) == '\0') &&
      (((*(char *)(param_1 + 0x46) != '\x01' || (*(int *)(param_1 + 0x14) != 0)) &&
       (*(char *)(param_1 + 0x50) == '\0')))) || (*(char *)(param_1 + 0xe8) != cVar2)) {
    (*DAT_800abe3c)(param_1);
  }
  cVar2 = *(char *)(param_1 + 0x46);
  *(undefined1 *)(param_1 + 0x4a) = 0;
  if (cVar2 == -1) {
    return;
  }
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x37) == '\0')) {
    return;
  }
  if (((byte)(cVar2 - 2U) < 0xfc) && (**(char **)(param_1 + 0x3c) != -0xd)) {
    (*DAT_800abe3c)(param_1);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x46);
    *(undefined1 *)(param_1 + 0x47) = 0;
LAB_800894ac:
    *(char *)(param_1 + 0x46) = cVar2 + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        cVar2 = *(char *)(param_1 + 0x46);
        *(undefined1 *)(param_1 + 0x49) = 1;
        goto LAB_800894ac;
      }
    }
    else if (bVar1 == 0xfe) {
      *(undefined1 *)(param_1 + 0x46) = 0xff;
      return;
    }
    if (*(code **)(param_1 + 0x18) == (code *)0x0) {
      cVar2 = FUN_80087fa0(param_1);
    }
    else {
      cVar2 = (**(code **)(param_1 + 0x18))(param_1);
    }
    *(char *)(param_1 + 0x46) = *(char *)(param_1 + 0x46) + cVar2;
  }
  return;
}
