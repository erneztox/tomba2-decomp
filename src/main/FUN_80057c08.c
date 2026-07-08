
void FUN_80057c08(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_80057a68();
  if (iVar2 != 0) {
    return;
  }
  if (param_2 == 2) {
    return;
  }
  if ((*(char *)(param_1 + 0x29) == '\0') && ((*(ushort *)(param_1 + 0x17e) & 0x180) != 0)) {
    if (param_2 != 0) goto LAB_80057d24;
    if (*(char *)(param_1 + 0x16a) != '\0') goto LAB_80057cbc;
    iVar2 = FUN_80055824();
    if (iVar2 != 0) {
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined1 *)(param_1 + 5) = 0x1c;
      if (*(char *)(param_1 + 0x145) == '\x02') {
        *(undefined1 *)(param_1 + 6) = 1;
        FUN_80054d14(param_1,0xe5,4);
        return;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      return;
    }
  }
  else {
LAB_80057cbc:
    if (param_2 != 0) goto LAB_80057d24;
  }
  if ((*(char *)(param_1 + 0x16a) == '\0') && (iVar2 = FUN_80055634(param_1,0), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 6) = 0;
    bVar1 = *(byte *)(param_1 + 0x14a) & 0xe;
    *(byte *)(param_1 + 0x14a) = bVar1;
    *(byte *)(param_1 + 0x14a) = bVar1 | *(byte *)(param_1 + 0x147);
    if (*(char *)(param_1 + 0x29) != '\0') {
      *(undefined1 *)(param_1 + 5) = 5;
      *(undefined1 *)(param_1 + 7) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 5) = 6;
    return;
  }
LAB_80057d24:
  if ((*(char *)(param_1 + 0x29) != '\0') && (iVar2 = FUN_800532a0(param_1), iVar2 == 0)) {
    *(undefined1 *)(param_1 + 7) = 0;
    bVar1 = *(byte *)(param_1 + 0x14a) & 0xe;
    *(byte *)(param_1 + 0x14a) = bVar1;
    *(byte *)(param_1 + 0x14a) = bVar1 | *(byte *)(param_1 + 0x147);
    if ((*(byte *)(param_1 + 0x149) & 2) == 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined1 *)(param_1 + 6) = 0;
      FUN_80054e80();
    }
    else {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)(param_1 + 6) = 2;
      FUN_80054d14(param_1,0x17,1);
    }
  }
  return;
}

