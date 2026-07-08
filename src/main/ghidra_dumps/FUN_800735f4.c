
void FUN_800735f4(int param_1,short param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    if ((DAT_800bf816 != '\0') && (DAT_800bf80f == '\0')) {
      if (*(byte *)(*(int *)(param_1 + 0x14) + 4) < 2) {
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      goto LAB_8007373c;
    }
    sVar3 = *(short *)(param_1 + 0x40) + -1;
    *(short *)(param_1 + 0x40) = sVar3;
    if (sVar3 != -1) {
      return;
    }
    if (*(byte *)(*(int *)(param_1 + 0x14) + 4) < 2) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    cVar2 = *(char *)(param_1 + 7);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      if (*(char *)(param_1 + 0x29) != '\0') {
        return;
      }
LAB_8007373c:
      *(undefined1 *)(param_1 + 7) = 0;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800bf816 != '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x29) == '\0') {
      return;
    }
    iVar4 = FUN_8007e038((int)param_2,2);
    *(int *)(param_1 + 0x14) = iVar4;
    if (iVar4 == 0) {
      return;
    }
    cVar2 = *(char *)(param_1 + 7);
    *(undefined2 *)(param_1 + 0x40) = 0x46;
  }
  *(char *)(param_1 + 7) = cVar2 + '\x01';
  return;
}

