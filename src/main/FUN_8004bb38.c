
void FUN_8004bb38(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    if (param_1[3] == '\0') {
      if (param_1[0x5e] == '\0') {
        if (param_1[5] == '\0') {
          *param_1 = 3;
          *(undefined2 *)(param_1 + 0x88) = 0xffb0;
          param_1[5] = 1;
          *(undefined2 *)(param_1 + 0x8a) = 0x14;
          *(undefined2 *)(param_1 + 0x8c) = 0;
        }
        else if (param_1[5] != '\x01') {
          return;
        }
        FUN_80051614(param_1,param_1 + 0x88,0,0);
        cVar2 = DAT_800e7e81;
        param_1[1] = DAT_800e7e81;
        if (cVar2 != '\0') {
          FUN_80077efc(param_1);
        }
      }
      else if (param_1[0x5e] == '\x01') {
        FUN_8004b788(param_1);
      }
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) && (param_1[4] = 1, param_1[3] == '\0')) {
      if (*(short *)(param_1 + 0x5c) == 0) {
        uVar4 = 0;
      }
      else if (*(short *)(param_1 + 0x5c) == 1) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0x17;
      }
      iVar3 = FUN_80051b70(param_1,1,uVar4);
      if (iVar3 == 0) {
        *(undefined2 *)(param_1 + 0x80) = 0x46;
        *(undefined2 *)(param_1 + 0x82) = 0x8c;
        *(undefined2 *)(param_1 + 0x84) = 100;
        *(undefined2 *)(param_1 + 0x86) = 100;
        *(undefined2 *)(param_1 + 0x54) = 0;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        param_1[0x29] = 0;
      }
    }
  }
  else if (bVar1 == 2) {
    if (param_1[3] == '\0') {
      FUN_8004b9c8(param_1);
    }
  }
  else if (bVar1 == 3) {
    FUN_8007a624(param_1);
  }
  return;
}

