/**
 * @brief Entity fade behavior: checks entity[0x14]/[0x15], handles fade transition
 * @note Original: func_80026024 at 0x80026024
 */
// Entity_Behavior_Fade



void FUN_80026024(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x15) == '\0') {
    return;
  }
  FUN_80040aa4(*(undefined1 *)(param_1 + 0x16),*(undefined1 *)(param_1 + 0x1c));
  if (*(char *)(param_1 + 0x1c) == '\0') {
    uVar3 = 2;
  }
  else {
    uVar3 = 3;
    if (*(char *)(param_1 + 0x1c) != '\x01') goto LAB_8002608c;
  }
  FUN_80074bf8(uVar3);
LAB_8002608c:
  if (0 < (int)(*(byte *)(param_1 + 0x15) - 1)) {
    iVar2 = 0;
    iVar4 = 1;
    do {
      *(undefined1 *)(param_1 + iVar2 + 0x16) = *(undefined1 *)(param_1 + iVar4 + 0x16);
      *(undefined1 *)(param_1 + iVar2 + 0x1c) = *(undefined1 *)(param_1 + iVar4 + 0x1c);
      bVar1 = iVar4 < (int)(*(byte *)(param_1 + 0x15) - 1);
      iVar2 = iVar4;
      iVar4 = iVar4 + 1;
    } while (bVar1);
  }
  *(char *)(param_1 + 0x15) = *(char *)(param_1 + 0x15) + -1;
  *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x14) + '\x01';
  return;
}
