
undefined4 FUN_80087fa0(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 0x46);
  if (bVar1 == 3) {
    iVar5 = *(int *)(param_1 + 0x3c);
    if (*(char *)(iVar5 + 2) != '\0') {
      return 0;
    }
    if (*(char *)(iVar5 + 3) != '\0') {
      return 0;
    }
    sVar4 = (ushort)*(byte *)(iVar5 + 5) + (ushort)*(byte *)(iVar5 + 4) * 0x100;
    *(short *)(param_1 + 0xe6) = sVar4;
    if (*(short *)(param_1 + 0xee) == sVar4) {
      *(undefined2 *)(param_1 + 0xee) = 0xffff;
      *(undefined1 *)(param_1 + 0xeb) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      return 1;
    }
    *(short *)(param_1 + 0xee) = sVar4;
  }
  else if (bVar1 < 4) {
    if (bVar1 != 2) {
      return 1;
    }
    iVar5 = *(int *)(param_1 + 0x3c);
    if (*(char *)(iVar5 + 7) != '\0') {
      return 0;
    }
    if ((((*(char *)(param_1 + 0xe3) == *(char *)(iVar5 + 3)) &&
         (*(char *)(param_1 + 0xe4) == *(char *)(iVar5 + 4))) &&
        (*(char *)(param_1 + 0xe9) == *(char *)(iVar5 + 5))) &&
       (*(char *)(param_1 + 0xea) == *(char *)(iVar5 + 6))) {
      *(undefined2 *)(param_1 + 0xee) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0xee) = 0xffff;
    }
    *(undefined1 *)(param_1 + 0xe3) = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 3);
    uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 4);
    *(undefined2 *)(param_1 + 0xe6) = 0;
    *(undefined1 *)(param_1 + 0xe4) = uVar2;
    *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 5);
    uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x3c) + 6);
    *(undefined2 *)(param_1 + 0xec) = 0;
    *(undefined1 *)(param_1 + 0xea) = uVar2;
    if (*(short *)(param_1 + 0xee) == 0) {
      *(undefined1 *)(param_1 + 0xeb) = 0;
      return 1;
    }
  }
  else {
    if (bVar1 != 4) {
      return 1;
    }
    iVar5 = *(int *)(param_1 + 0x3c);
    if (*(char *)(iVar5 + 2) != '\0') {
      return 0;
    }
    if (*(char *)(iVar5 + 3) != '\0') {
      return 0;
    }
    bVar1 = *(byte *)(iVar5 + 4);
    bVar3 = *(char *)(param_1 + 0x47) + 1;
    *(byte *)(param_1 + 0x47) = bVar3;
    *(ushort *)(param_1 + 0xec) = *(short *)(param_1 + 0xec) + 8 + (bVar1 + 3 & 0x1fc);
    if (*(byte *)(param_1 + 0xea) <= bVar3) {
      iVar5 = FUN_80088210(param_1);
      if (iVar5 < 0x81) {
        if (*(short *)(param_1 + 0xee) != *(short *)(param_1 + 0xec)) {
          *(short *)(param_1 + 0xee) = *(short *)(param_1 + 0xec);
          *(undefined1 *)(param_1 + 0x47) = 0;
          *(undefined2 *)(param_1 + 0xec) = 0;
          return 0;
        }
        *(undefined2 *)(param_1 + 0xee) = 0;
        *(undefined1 *)(param_1 + 0xeb) = 0;
        *(undefined1 *)(param_1 + 0x46) = 0xff;
        FUN_80088248(param_1,param_1 + 99);
        *(undefined1 *)(param_1 + 0x46) = 2;
      }
      else {
        (*DAT_800abe3c)(param_1);
        *(undefined1 *)(param_1 + 0x46) = 0xfe;
        *(undefined1 *)(param_1 + 0x49) = 2;
      }
    }
  }
  return 0;
}

