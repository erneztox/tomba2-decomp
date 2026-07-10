// FUN_8005cdf8

void FUN_8005cdf8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    iVar2 = FUN_80076d68(param_1);
    iVar3 = FUN_800633b0(param_1,1);
    if (iVar3 == 0) {
      iVar3 = FUN_800557ec(param_1);
      if (iVar3 != 0) {
        *(char *)(param_1 + 0x147) = '\x01' - *(char *)(param_1 + 0x147);
        FUN_800551c4(param_1);
        FUN_80054c08(param_1,0);
        goto LAB_8005d0a8;
      }
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_8005376c(param_1);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_80055704(param_1,0);
      if (iVar2 == 2) {
        *(undefined1 *)(param_1 + 0x146) = 2;
        FUN_80053670(param_1,1,1);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        return;
      }
LAB_8005d144:
      *(undefined1 *)(param_1 + 5) = 4;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
    }
LAB_8005d150:
    *(undefined1 *)(param_1 + 0x146) = 0;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xbf) = 0;
      *(undefined1 *)(param_1 + 0xbe) = 0;
      FUN_80054198(param_1);
      FUN_80055e28(param_1,0);
      *(undefined *)(param_1 + 0x14a) =
           (&DAT_800a46c4)
           [(uint)*(byte *)(param_1 + 0x147) * 0x10 + (uint)*(byte *)(param_1 + 0x14a)];
      if (*(char *)(param_1 + 0x175) != '\0') {
        *(undefined1 *)(param_1 + 0x146) = 2;
        FUN_80053670(param_1,1,1);
        FUN_80054b34(param_1,1,*(undefined1 *)(param_1 + 0x160));
        *(undefined1 *)(param_1 + 6) = 2;
        iVar2 = FUN_800633b0(param_1,1);
        if (iVar2 == 0) {
          return;
        }
        *(undefined1 *)(param_1 + 0x146) = 0;
        return;
      }
      *(undefined1 *)(param_1 + 0x146) = 1;
      FUN_80053670(param_1,0,1);
      FUN_80054b34(param_1,0,*(undefined1 *)(param_1 + 0x160));
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      iVar2 = FUN_800633b0(param_1);
      if (iVar2 != 0) goto LAB_8005d150;
      iVar2 = FUN_800557ec(param_1);
      if (iVar2 == 0) {
        return;
      }
      *(char *)(param_1 + 0x147) = '\x01' - *(char *)(param_1 + 0x147);
      FUN_800551c4(param_1);
      FUN_80054c08(param_1,0);
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      FUN_80055e28(param_1,0);
      *(undefined *)(param_1 + 0x14a) =
           (&DAT_800a46c4)
           [(uint)*(byte *)(param_1 + 0x147) * 0x10 + (uint)*(byte *)(param_1 + 0x14a)];
      FUN_80054b34(param_1,1,*(undefined1 *)(param_1 + 0x160));
      iVar2 = FUN_800633b0(param_1,1);
      if (iVar2 != 0) goto LAB_8005d150;
      iVar2 = FUN_800557ec(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_80055704(param_1,1);
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 0xbf) = 0;
          *(undefined1 *)(param_1 + 0x146) = 3;
          FUN_80053670(param_1,0,8);
          FUN_80054b34(param_1,0,*(undefined1 *)(param_1 + 0x160));
          *(undefined1 *)(param_1 + 0xbe) = 0;
          *(undefined1 *)(param_1 + 6) = 1;
          return;
        }
        if (0 < iVar2) {
          if (iVar2 != 2) {
            return;
          }
          FUN_80076d68(param_1);
          return;
        }
        if (iVar2 != -1) {
          return;
        }
        goto LAB_8005d144;
      }
      *(char *)(param_1 + 0x147) = '\x01' - *(char *)(param_1 + 0x147);
      FUN_800551c4();
      FUN_80054c08(param_1,1);
      *(undefined2 *)(param_1 + 0x58) = 0;
    }
LAB_8005d0a8:
    FUN_80074590(0x1d,0,0);
    *(undefined1 *)(param_1 + 5) = 6;
    *(undefined1 *)(param_1 + 7) = 0;
    FUN_80053d90();
  }
  return;
}

