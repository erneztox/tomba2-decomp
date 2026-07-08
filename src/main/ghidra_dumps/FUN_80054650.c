
undefined4 FUN_80054650(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  
  DAT_1f800258 = '\0';
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfb;
  if (*(char *)(param_1 + 0x16b) == '\0') {
    uVar4 = 0;
    if ((param_2 == 0) && (uVar4 = 0x1e, -1 < *(short *)(param_1 + 0x17e))) {
      uVar4 = 0x3c;
    }
    if (*(char *)(param_1 + 0x78) == '\0') {
      iVar1 = (int)*(short *)(param_1 + 0x62);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar1 = ((int)*(short *)(iVar1 + 0x86) - (int)*(short *)(iVar1 + 0x84)) -
              ((int)*(short *)(param_1 + 0x32) - (int)*(short *)(iVar1 + 0x32));
    }
    sVar3 = (short)(iVar1 / 2);
    iVar1 = FUN_8004954c(param_1,uVar4,(int)sVar3);
    if ((iVar1 != 0) || (iVar1 = FUN_8004954c(param_1,uVar4,(int)-sVar3), iVar1 != 0)) {
      bVar2 = *(byte *)(param_1 + 0x149) & 1;
      if ((*(byte *)(param_1 + 0x149) & 4) == 0) {
        bVar2 = *(byte *)(param_1 + 0x147);
      }
      *(undefined1 *)(param_1 + 0x60) = 1;
      *(byte *)(param_1 + 0x5f) = bVar2 + 4;
      return 1;
    }
    if (DAT_1f800258 != '\0') {
      *(char *)(param_1 + 0x5f) = '\x05' - *(char *)(param_1 + 0x147);
    }
  }
  return 0;
}

