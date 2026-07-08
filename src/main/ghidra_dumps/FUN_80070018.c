
void FUN_80070018(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if ((*(char *)(param_1 + 0xbe) != '\0') && (DAT_800bf816 == '\0')) {
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    if (*(char *)(param_1 + 5) == '\0') {
      FUN_800702c0(param_1);
    }
    else if (*(char *)(param_1 + 5) == '\x01') {
      FUN_80070650(param_1);
    }
    cVar2 = *(char *)(iVar3 + 1);
    *(char *)(param_1 + 1) = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    bVar1 = *(byte *)(param_1 + 0x5f);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (*(short *)(param_1 + 0x74) == 0) {
      if ((*(byte *)(param_1 + 0x5f) & 1) != 0) {
        if ((*(byte *)(param_1 + 0x5f) & 2) != 0) {
          switch(*(undefined1 *)(param_1 + 3)) {
          case 0:
            param_2 = FUN_80049e54(param_1,1);
            break;
          case 1:
            param_2 = FUN_80049e54(param_1,2);
            break;
          case 4:
            param_2 = FUN_8004b3f4(param_1,100);
            break;
          case 5:
            param_2 = FUN_8004b3f4(param_1,200);
            break;
          case 6:
            param_2 = FUN_8004b3f4(param_1,500);
            break;
          case 7:
            param_2 = FUN_8004b3f4(param_1,1000);
            break;
          case 0xb:
            param_2 = FUN_8004b3f4(param_1,100000);
            break;
          case 0xf:
            param_2 = FUN_8004a118(param_1);
            break;
          case 0x10:
            param_2 = FUN_8004a2a0(param_1);
            break;
          case 0x11:
            param_2 = FUN_8004b428(param_1);
          }
          if (param_2 == 0) {
            return;
          }
          *(undefined1 *)(param_1 + 4) = 3;
          return;
        }
        iVar3 = FUN_8004a3d4(param_1);
        if (iVar3 == 0) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 4) = 3;
      return;
    }
    *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + -1;
    cVar2 = *(char *)(*(int *)(param_1 + 0x10) + 1);
    *(char *)(param_1 + 1) = cVar2;
    if (cVar2 == '\0') {
      return;
    }
    bVar1 = *(byte *)(param_1 + 0x5f);
  }
  if ((bVar1 & 0x80) == 0) {
    FUN_800517f8(param_1);
  }
  else {
    FUN_80077b5c(param_1);
  }
  return;
}

