// FUN_080387b4

void FUN_080387b4(int param_1,short param_2,short param_3,uint param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  
  func_0x0013b8f4(param_1,(int)param_2,(int)param_3);
  if ((param_4 & 1) == 0) {
    return;
  }
  func_0x00041ac0(param_1);
  if (*(char *)(param_1 + 0x29) == '\0') {
    cVar1 = func_0x00049250(param_1,0,0xc0);
    *(char *)(param_1 + 0x5f) = cVar1;
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x29) = 4;
      if (*(char *)(param_1 + 0x5f) == '\x02') goto LAB_080388a0;
      *(undefined1 *)(param_1 + 0x5f) = 0;
    }
    bVar4 = *(byte *)(param_1 + 0x29);
    iVar3 = func_0x0004954c(param_1,0x30,0x60);
    bVar4 = bVar4 | iVar3 != 0;
    *(byte *)(param_1 + 0x29) = bVar4;
    iVar3 = func_0x0004954c(param_1,0x30,0xffffff60);
    bVar4 = bVar4 | iVar3 != 0;
    *(byte *)(param_1 + 0x29) = bVar4;
    iVar3 = func_0x000493e8(param_1,0,0xfffffec0);
    if (iVar3 != 0) {
      bVar4 = bVar4 | 2;
    }
    *(byte *)(param_1 + 0x29) = bVar4;
  }
LAB_080388a0:
  func_0x0004130c(param_1,0);
  sVar2 = *(short *)(param_1 + 0x44) >> 4;
  *(short *)(param_1 + 0x62) = sVar2;
  *(short *)(param_1 + 0x58) = sVar2;
  return;
}

