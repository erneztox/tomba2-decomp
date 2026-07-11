/**
 * @brief Entity physics main: collision + movement pipeline
 * @note Original: func_80063F9C at 0x80063F9C
 */
// Entity_PhysicsMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80063f9c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x158);
  FUN_80055e28(param_1,0);
  *(undefined1 *)(iVar5 + 0x29) = 1;
  FUN_800635d4(param_1,0);
  FUN_80076d68(param_1);
  FUN_80063b94(param_1,0);
  if (*(byte *)(param_1 + 0x168) < 3) {
    DAT_800bf840 = 0x47;
  }
  else {
    DAT_800bf840 = 0x87;
  }
  if (*(char *)(param_1 + 0x15c) == '\0') {
    if ((_DAT_800e7e68 & _DAT_1f800172) != 0) {
      bVar1 = *(byte *)(param_1 + 0x14a);
      *(undefined1 *)(param_1 + 0x15c) = 1;
      *(byte *)(param_1 + 0x15d) = bVar1;
      if (*(char *)(param_1 + 0x147) != '\0') {
        *(byte *)(param_1 + 0x15d) = bVar1 & 0xe;
        *(byte *)(param_1 + 0x15d) = bVar1 & 0xe | ~bVar1 & 1;
      }
    }
    if (*(char *)(param_1 + 0x15c) == '\0') goto switchD_8006409c_default;
  }
  switch(*(undefined1 *)(param_1 + 0x168)) {
  case 0:
  case 1:
    cVar3 = (&DAT_800a47a4)[*(byte *)(param_1 + 0x15d)];
    if (cVar3 == '\x04') {
      if (0x140 < (*(short *)(param_1 + 0x58) + 0xa0U & 0xfff)) break;
      cVar3 = '\x04';
    }
    else if ((*(char *)(param_1 + 0x167) == '\0') || ((*(ushort *)(param_1 + 0x58) & 0xfff) < 0xb01)
            ) break;
    FUN_80064358(param_1,cVar3,iVar5);
    *(undefined2 *)(param_1 + 0x58) = 0;
    break;
  case 2:
    uVar4 = (&DAT_800a47b4)[*(byte *)(param_1 + 0x15d)];
    switch(uVar4) {
    case 0:
    case 1:
      if ((*(short *)(param_1 + 0x44) != 0) || ((*(ushort *)(param_1 + 0x58) & 0xfff) < 0xa01))
      goto switchD_8006409c_default;
      goto LAB_80064280;
    case 2:
    case 5:
      if (*(char *)(param_1 + 0x167) == '\0') goto switchD_8006409c_default;
switchD_80064210_caseD_2:
      uVar2 = *(short *)(param_1 + 0x58) - 0xb60;
      break;
    case 3:
      if (*(char *)(param_1 + 0x167) == '\0') goto switchD_8006409c_default;
      uVar2 = *(short *)(param_1 + 0x58) - 0xd60;
      break;
    case 4:
      uVar2 = *(short *)(param_1 + 0x58) + 0xa0;
      break;
    default:
      goto switchD_8006409c_default;
    }
LAB_8006426c:
    if ((uVar2 & 0xfff) < 0x141) {
LAB_80064280:
      FUN_80064358(param_1,uVar4,iVar5);
    }
    break;
  case 3:
  case 4:
    uVar4 = (&DAT_800a47b4)[*(byte *)(param_1 + 0x15d)];
    switch(uVar4) {
    case 0:
      if (0x140 < (*(short *)(param_1 + 0x58) - 0x600U & 0xfff)) goto switchD_8006409c_default;
      *(undefined2 *)(param_1 + 0x58) = 0x700;
      goto LAB_80064280;
    case 1:
      uVar2 = *(short *)(param_1 + 0x58) - 0x960;
      break;
    case 2:
    case 5:
      goto switchD_80064210_caseD_2;
    case 3:
      uVar2 = *(short *)(param_1 + 0x58) - 0xd60;
      break;
    case 4:
      uVar2 = *(short *)(param_1 + 0x58) + 0xa0;
      break;
    default:
      goto switchD_8006409c_default;
    }
    goto LAB_8006426c;
  }
switchD_8006409c_default:
  if (*(char *)(iVar5 + 0xc) != '\x04') {
    return;
  }
  bVar1 = *(byte *)(iVar5 + 2);
  if (bVar1 != 4) {
    if (bVar1 < 5) {
      if (bVar1 != 2) {
        return;
      }
    }
    else if (bVar1 != 7) {
      if (bVar1 != 0x11) {
        return;
      }
      FUN_80063ecc(param_1,iVar5);
      return;
    }
  }
  if (DAT_800bf870 == '\0') {
    func_0x8010ad68(param_1,iVar5);
  }
  else if (DAT_800bf870 == '\x06') {
    func_0x80113acc(param_1,iVar5);
  }
  if (DAT_800bf870 == '\x0f') {
    func_0x8010b194(param_1,iVar5);
  }
  return;
}
