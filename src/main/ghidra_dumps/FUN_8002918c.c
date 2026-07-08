
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8002918c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
    iVar3 = FUN_8009a450();
    *(char *)(param_1 + 6) = (char)(iVar3 >> 0xb) + '\b';
    if ((*(char *)(param_1 + 3) == '5') && (_DAT_800e7ffe < 0)) {
      iVar3 = FUN_8009a450();
      *(char *)(param_1 + 6) = (char)(iVar3 >> 0xc) + '\x03';
    }
  }
  iVar3 = FUN_8009a450();
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + (char)(iVar3 >> 9);
  sVar2 = FUN_8002b278(param_1);
  if (*(char *)(param_1 + 7) < '\0') {
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -0x80;
  }
  else {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined1 *)(param_1 + 4) = 2;
    }
    else if (sVar2 == 0) {
      FUN_80031780(param_1);
    }
  }
  return;
}

