/**
 * @brief Entity behavior type variant 5: complex dispatch
 * @note Original: func_80024F18 at 0x80024F18
 */
// Entity_BehaviorType5



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80024f18(int param_1)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  
  if (_DAT_800e7fee < (short)(ushort)DAT_800bf87d) {
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
    DAT_800bfa5c = '-';
  }
  else if (DAT_800bfa5c == '\0') {
    DAT_800ed061 = 0;
  }
  else {
    DAT_800bfa5c = DAT_800bfa5c + -1;
    *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 1;
  }
  if ((((_DAT_800bf80c & 0xff00ff00) == 0) && (DAT_800bf870 != '\x03')) && (DAT_1f800137 == '\0')) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if (DAT_800bf91e == -1) {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      if (*(char *)(param_1 + 4) == '\0') {
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined2 *)(param_1 + 0x12) = 0x2d;
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if ((*(char *)(param_1 + 4) == '\x01') &&
           (sVar2 = *(short *)(param_1 + 0x12), *(short *)(param_1 + 0x12) = sVar2 + -1, sVar2 == 1)
           ) {
          bVar3 = true;
          *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
        }
      }
      if (!bVar3) {
        return;
      }
      *(undefined1 *)(param_1 + 3) = 0;
      *(undefined1 *)(param_1 + 4) = 0;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800bf820 != '\0') {
      *(undefined1 *)(param_1 + 3) = 1;
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 1;
      return;
    }
    if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 3) = 2;
    return;
  }
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    DAT_800bf87f = DAT_800bf87f + '\x01';
    sVar2 = *(short *)(param_1 + 0x10);
    *(short *)(param_1 + 0x10) = sVar2 + -1;
    bVar3 = false;
    if (sVar2 != 1) goto LAB_80025154;
    *(undefined2 *)(param_1 + 0x10) = 0x3c;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  else {
    if (1 < bVar1) {
      bVar3 = false;
      if ((bVar1 == 2) &&
         (sVar2 = *(short *)(param_1 + 0x10), *(short *)(param_1 + 0x10) = sVar2 + -1, sVar2 == 1))
      {
        bVar3 = true;
        *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
      }
      goto LAB_80025154;
    }
    bVar3 = false;
    if (bVar1 != 0) goto LAB_80025154;
    *(undefined1 *)(param_1 + 4) = 1;
    FUN_8004ed94(0xb,0x40);
    *(undefined2 *)(param_1 + 0x10) = 0x10;
  }
  bVar3 = false;
LAB_80025154:
  if (bVar3) {
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    DAT_800bf820 = '\0';
  }
  return;
}
