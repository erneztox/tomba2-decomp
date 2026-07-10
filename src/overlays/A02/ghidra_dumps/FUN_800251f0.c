// FUN_800251f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800251f0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  if ((_DAT_800bf880 & 0x600) != 0) {
    return;
  }
  if ((_DAT_800bf880 & 0x100) != 0) {
    return;
  }
  if (DAT_800bf816 != '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return;
        }
        if (((_DAT_800e7e68 & 0x400) == 0) || (DAT_800bf80f != '\0')) {
          cVar2 = *(char *)(param_1 + 6) + '\x04';
          *(char *)(param_1 + 6) = cVar2;
          if (cVar2 != '\x10') {
            return;
          }
          *(undefined1 *)(param_1 + 5) = 0;
          cVar2 = *(char *)(param_1 + 8) + -1;
          *(char *)(param_1 + 8) = cVar2;
          if (cVar2 == -1) {
            *(char *)(param_1 + 8) = *(char *)(param_1 + 7) + -1;
          }
          goto LAB_80025544;
        }
        cVar2 = *(char *)(param_1 + 8) + -1;
        *(char *)(param_1 + 8) = cVar2;
        if (cVar2 == -1) {
          *(char *)(param_1 + 8) = *(char *)(param_1 + 7) + -1;
        }
        *(undefined1 *)(param_1 + 6) = 0;
        if (DAT_1f800232 != '\0') goto LAB_800254dc;
        goto LAB_800254f4;
      }
      if (((_DAT_800e7e68 & 0x800) == 0) || (DAT_800bf80f != '\0')) {
        cVar2 = *(char *)(param_1 + 6) + -4;
        *(char *)(param_1 + 6) = cVar2;
        if (cVar2 != -0x10) {
          return;
        }
        *(undefined1 *)(param_1 + 5) = 0;
        bVar1 = *(char *)(param_1 + 8) + 1;
        *(byte *)(param_1 + 8) = bVar1;
        if (*(byte *)(param_1 + 7) <= bVar1) {
          *(undefined1 *)(param_1 + 8) = 0;
        }
LAB_80025544:
        DAT_800bf88c = *(byte *)(&DAT_8009d284 +
                                (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + 8) + 0x22) * 2);
        DAT_800e7eec = DAT_800bf88c;
        *(undefined1 *)(param_1 + 6) = 0;
        return;
      }
      bVar1 = *(char *)(param_1 + 8) + 1;
      *(byte *)(param_1 + 8) = bVar1;
      if (*(byte *)(param_1 + 7) <= bVar1) {
        *(undefined1 *)(param_1 + 8) = 0;
      }
      *(undefined1 *)(param_1 + 6) = 0;
      if (DAT_1f800232 == '\0') {
        *(undefined1 *)(param_1 + 5) = 0;
        return;
      }
      goto LAB_800254dc;
    }
    iVar4 = 0;
    if (bVar1 != 0) {
      return;
    }
    psVar5 = &DAT_8009d284;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    do {
      if ((&DAT_800bfab4)[*psVar5] != '\0') {
        *(char *)(param_1 + (uint)*(byte *)(param_1 + 7) + 0x22) = (char)iVar4;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      }
      iVar4 = iVar4 + 1;
      psVar5 = psVar5 + 2;
    } while (iVar4 < 10);
    iVar4 = 0;
    if (*(byte *)(param_1 + 7) < 2) {
      *(undefined1 *)(param_1 + 8) = 0;
      return;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    if (*(byte *)(param_1 + 7) != 0) {
      iVar3 = param_1;
      do {
        if ((&DAT_8009d284)[(uint)*(byte *)(iVar3 + 0x22) * 2] == (ushort)DAT_800bf88c) {
          *(char *)(param_1 + 8) = (char)iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar3 = param_1 + iVar4;
      } while (iVar4 < (int)(uint)*(byte *)(param_1 + 7));
    }
  }
  if (DAT_800bf80f != '\0') {
    return;
  }
  if ((_DAT_800e7e68 & 0x800) == 0) {
    if ((_DAT_800e7e68 & 0x400) == 0) {
LAB_800254f4:
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
    if (DAT_1f800232 == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 3;
  }
  else {
    if (DAT_1f800232 == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 2;
  }
LAB_800254dc:
  FUN_80074590(0x15,5,0);
  return;
}

