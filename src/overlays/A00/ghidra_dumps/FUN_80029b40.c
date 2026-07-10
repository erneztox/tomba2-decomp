// FUN_80029b40

void FUN_80029b40(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 *puVar10;
  
  pcVar9 = (char *)(param_1 + 0x2c);
  puVar10 = (undefined2 *)(param_1 + 0x38);
  pcVar8 = *(char **)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      iVar7 = 0;
      if (bVar1 != 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0x2c) = 4;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined1 *)(param_1 + 0x2e) = 0xa0;
      do {
        iVar5 = iVar7 << 0x10;
        iVar7 = iVar7 + 1;
        puVar6 = (undefined4 *)((iVar5 >> 0xd) + (int)puVar10);
        *puVar6 = 0;
        puVar6[1] = 0;
      } while (iVar7 * 0x10000 >> 0x10 < 5);
      *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(pcVar8 + 0x2e);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(pcVar8 + 0x32);
      uVar3 = *(undefined2 *)(pcVar8 + 0x36);
      *(undefined2 *)(param_1 + 0x36) = 0;
      *(undefined2 *)(param_1 + 0x34) = uVar3;
      return;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    iVar7 = 5;
    do {
      puVar6 = (undefined4 *)(((iVar7 << 0x10) >> 0xd) + (int)puVar10);
      iVar7 = iVar7 + -1;
      *puVar6 = puVar6[-2];
      puVar6[1] = puVar6[-1];
    } while (0 < iVar7 * 0x10000);
    *puVar10 = 0;
    *(undefined2 *)(param_1 + 0x3a) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    if (1 < *(byte *)(param_1 + 5)) {
      cVar2 = *pcVar9;
      *pcVar9 = cVar2 + '\x01';
      if ('\x04' < (char)(cVar2 + '\x01')) {
        *pcVar9 = '\0';
      }
      puVar10[*pcVar9 * 4 + 3] = 0;
      if ((*(ushort *)(param_1 + 0x36) & 7) < 3) {
        *(ushort *)(param_1 + 0x36) = *(ushort *)(param_1 + 0x36) + 1;
      }
      if (*pcVar9 != *(char *)(param_1 + 0x2d)) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 3;
      return;
    }
    if (*(int *)(param_1 + 0x58) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
    return;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
LAB_80029c70:
    if ((*pcVar8 == '\x01') && (pcVar8[0x5e] == '\x01')) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
LAB_80029ca0:
      *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(pcVar8 + 0x2e);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(pcVar8 + 0x32);
      *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(pcVar8 + 0x36);
      *(ushort *)(param_1 + 0x36) = *(ushort *)(pcVar8 + 0x6a) & 0xff0;
      bVar1 = *(byte *)(param_1 + 3);
      if (bVar1 == 0) {
        if (*pcVar8 != '\x01') goto LAB_80029d98;
      }
      else {
        if (2 < bVar1) {
          if (bVar1 < 6) {
            if (pcVar8[0x2b] != '\x02') {
              bVar1 = *(byte *)(param_1 + 6);
              bVar4 = bVar1 < 4;
LAB_80029d90:
              *(byte *)(param_1 + 6) = bVar1 + 1;
              if (bVar4) goto LAB_80029ddc;
            }
          }
          else if (pcVar8[0x2b] != '\x03') {
            bVar1 = *(byte *)(param_1 + 6);
            bVar4 = bVar1 < 3;
            goto LAB_80029d90;
          }
LAB_80029d98:
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          goto LAB_80029da8;
        }
        if ((*pcVar8 != '\x01') || (pcVar8[0x29] != '\0')) goto LAB_80029d98;
      }
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_80029de0;
    }
    if (*pcVar8 == '\x02') {
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_80029c70;
    }
  }
  else {
    if (bVar1 == 2) goto LAB_80029ca0;
    if (bVar1 != 3) {
      *(undefined1 *)(param_1 + 1) = 1;
      goto LAB_80029de0;
    }
LAB_80029da8:
    if ((*(ushort *)(param_1 + 0x36) & 7) < 3) {
      *(ushort *)(param_1 + 0x36) = *(ushort *)(param_1 + 0x36) + 1;
    }
    else {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
LAB_80029ddc:
  *(undefined1 *)(param_1 + 1) = 1;
LAB_80029de0:
  if (((1 < (byte)pcVar8[4]) || ((DAT_800e7fc6 & 4) != 0)) || (iVar7 = 5, DAT_800e7fc6 == 0)) {
    *(char *)(param_1 + 0x2d) = *pcVar9;
    *(undefined1 *)(param_1 + 4) = 2;
    iVar7 = 5;
  }
  do {
    puVar6 = (undefined4 *)(((iVar7 << 0x10) >> 0xd) + (int)puVar10);
    iVar7 = iVar7 + -1;
    *puVar6 = puVar6[-2];
    puVar6[1] = puVar6[-1];
  } while (0 < iVar7 * 0x10000);
  *puVar10 = *(undefined2 *)(pcVar8 + 0x2e);
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(pcVar8 + 0x32);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(pcVar8 + 0x36);
  return;
}

