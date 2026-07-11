/**
 * @brief Menu slot drawer: switch on entity[0x1F], draws save slots
 * @note Original: func_8003A5E4 at 0x8003A5E4
 */
// Menu_SlotDraw



void FUN_8003a5e4(int param_1,short *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  switch((char)param_2[0x1f]) {
  case '\0':
    iVar4 = (int)*param_2;
    *(char *)(param_2 + 0x1f) = (char)param_2[0x1f] + '\x01';
    sVar3 = *param_2 >> 0xf;
    if (iVar4 < 0) {
      sVar3 = ((short)((ulonglong)((longlong)iVar4 * 0x55555556) >> 0x20) - sVar3) + -5;
    }
    else {
      sVar3 = ((short)((ulonglong)((longlong)iVar4 * 0x55555556) >> 0x20) - sVar3) + 5;
    }
    param_2[8] = sVar3;
    param_2[9] = -0x100;
  case '\x01':
    sVar3 = param_2[9];
    *param_2 = *param_2 + param_2[8];
    sVar2 = param_2[9];
    param_2[9] = sVar2 + 0x20;
    param_2[1] = param_2[1] + (sVar3 >> 4);
    if (0x100 < (short)(sVar2 + 0x20)) {
      cVar1 = (char)param_2[0x1f];
      sVar3 = -0xc0;
LAB_8003a6c4:
      param_2[9] = sVar3;
LAB_8003a6cc:
      *(char *)(param_2 + 0x1f) = cVar1 + '\x01';
      return;
    }
    break;
  case '\x02':
    sVar3 = param_2[9];
    *param_2 = *param_2 + param_2[8];
    sVar2 = param_2[9];
    param_2[9] = sVar2 + 0x18;
    param_2[1] = param_2[1] + (sVar3 >> 4);
    if ((short)(sVar2 + 0x18) < 0xc1) {
      return;
    }
    cVar1 = (char)param_2[0x1f];
    sVar3 = -0x80;
    goto LAB_8003a6c4;
  case '\x03':
    sVar3 = param_2[9];
    *param_2 = *param_2 + param_2[8];
    sVar2 = param_2[9];
    param_2[9] = sVar2 + 0x10;
    param_2[1] = param_2[1] + (sVar3 >> 4);
    if ((short)(sVar2 + 0x10) < 0x81) {
      return;
    }
    cVar1 = (char)param_2[0x1f];
    goto LAB_8003a6cc;
  case '\x04':
    if (*(char *)((int)param_2 + 0x3f) == '\0') {
      *(undefined1 *)(param_1 + 4) = 2;
    }
  }
  return;
}
