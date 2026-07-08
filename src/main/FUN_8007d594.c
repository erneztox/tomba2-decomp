
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007d594(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  local_10 = DAT_800170f4;
  local_c = DAT_800170f8;
  local_b = DAT_800170f9;
  switch(*(undefined1 *)(param_1 + 5)) {
  case 0:
    switch(*(undefined1 *)(param_1 + 3)) {
    case 0:
    case 3:
    case 4:
    case 5:
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    case 1:
    case 2:
      *(undefined1 *)(param_1 + 4) = 3;
      return;
    default:
      return;
    }
  case 1:
    if (*(byte *)(param_1 + 3) < 2) {
      if (((_DAT_800e7e68 & _DAT_1f800174) == 0) || ((*(byte *)(param_1 + 0x46) & 1) != 0))
      goto LAB_8007d6a8;
      uVar6 = 0;
LAB_8007d6c8:
      FUN_8007c0d0(param_1,uVar6);
    }
    else if (*(byte *)(param_1 + 3) < 6) {
LAB_8007d6a8:
      uVar2 = *(short *)(param_1 + 0x40) - 1;
      *(ushort *)(param_1 + 0x40) = uVar2;
      if ((int)((uint)uVar2 << 0x10) < 1) {
        uVar6 = 1;
        goto LAB_8007d6c8;
      }
    }
    goto LAB_8007d79c;
  case 2:
    FUN_8007c940(param_1);
    if (((_DAT_800e7e68 & _DAT_1f800174) == 0) || ((*(byte *)(param_1 + 0x46) & 1) != 0))
    goto LAB_8007d73c;
    if (*(char *)(param_1 + 0xd) != -1) {
      FUN_8001cf78();
    }
  case 10:
switchD_8007d5f4_caseD_a:
    FUN_8007d14c(param_1);
    break;
  case 3:
    FUN_8007c940(param_1);
LAB_8007d73c:
    sVar3 = *(short *)(param_1 + 0x42);
    if ((sVar3 != -1) && (*(ushort *)(param_1 + 0x42) = sVar3 + 1U, 8 < (ushort)(sVar3 + 1U))) {
      *(ushort *)(param_1 + 0x42) = sVar3 + 1U & 0xf;
      FUN_8007cdd4(param_1 + 0x54);
    }
    break;
  case 4:
    sVar3 = *(short *)(param_1 + 0x42) + -1;
    *(short *)(param_1 + 0x42) = sVar3;
    if (sVar3 == 0) {
      *(undefined2 *)(param_1 + 0x42) = 0xffff;
      *(undefined1 *)(param_1 + 5) = 3;
    }
LAB_8007d79c:
    FUN_8007c940(param_1);
    break;
  case 5:
    FUN_8007c940(param_1);
    if (*(short *)(param_1 + 0x42) != 0) {
      *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + -1;
      if (((*(char *)(param_1 + 0xd) == -1) || ((DAT_800be0e4 & 0x80) != 0)) ||
         ((DAT_800be0e4 & 2) == 0)) break;
      *(undefined2 *)(param_1 + 0x42) = 300;
      cVar1 = *(char *)(param_1 + 5) + '\x01';
      goto LAB_8007da18;
    }
    goto switchD_8007d5f4_caseD_a;
  case 6:
    sVar3 = *(short *)(param_1 + 0x42) + -1;
    *(short *)(param_1 + 0x42) = sVar3;
    if ((sVar3 != 0) && ((DAT_800be0e4 & 2) != 0)) break;
    *(undefined2 *)(param_1 + 0x42) = 0xf;
    cVar1 = *(char *)(param_1 + 5) + '\x01';
    goto LAB_8007da18;
  case 7:
    sVar3 = *(short *)(param_1 + 0x42) + -1;
    *(short *)(param_1 + 0x42) = sVar3;
    if (sVar3 != 0) break;
    goto switchD_8007d5f4_caseD_a;
  case 0x5a:
    iVar5 = (int)*(short *)(param_1 + 0x82);
    _DAT_1f80017e = 0;
    if (iVar5 < 0x80) {
      iVar5 = iVar5 - *(short *)(param_1 + 0x56);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      sVar3 = (short)(iVar5 >> 2);
      if (iVar5 >> 2 < 4) {
        sVar3 = 2;
      }
      sVar3 = *(short *)(param_1 + 0x56) + sVar3;
      *(short *)(param_1 + 0x56) = sVar3;
      if (sVar3 < *(short *)(param_1 + 0x82)) break;
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x82);
      cVar1 = *(char *)(param_1 + 5) + '\x01';
    }
    else {
      iVar5 = *(short *)(param_1 + 0x56) - iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      iVar4 = -(iVar5 >> 2);
      if (iVar5 >> 2 < 4) {
        iVar4 = -2;
      }
      iVar4 = (uint)*(ushort *)(param_1 + 0x56) + iVar4;
      *(short *)(param_1 + 0x56) = (short)iVar4;
      if ((int)*(short *)(param_1 + 0x82) < iVar4 * 0x10000 >> 0x10) break;
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x82);
      cVar1 = *(char *)(param_1 + 5) + '\x01';
    }
    goto LAB_8007da18;
  case 0x5b:
    _DAT_1f80017e = 0;
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + *(short *)(param_1 + 0x60);
    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 4;
    if (*(short *)(param_1 + 0x84) <= *(short *)(param_1 + 0x58)) {
      *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x84);
      *(undefined2 *)(param_1 + 0x40) = 5;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    iVar5 = (uint)*(ushort *)(param_1 + 0x58) << 0x10;
    *(short *)(param_1 + 0x54) = 0xa0 - (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
    break;
  case 0x5c:
    _DAT_1f80017e = 0;
    uVar2 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar2;
    if (0 < (int)((uint)uVar2 << 0x10)) break;
    *(undefined2 *)(param_1 + 0x40) = 3;
    cVar1 = '\x01';
LAB_8007da18:
    *(char *)(param_1 + 5) = cVar1;
  }
  FUN_8007cc00(param_1);
  FUN_8005019c(param_1 + 0x54,*(undefined1 *)((int)&local_10 + (uint)*(byte *)(param_1 + 0x18)),1,2)
  ;
  return;
}

