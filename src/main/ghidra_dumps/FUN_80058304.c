
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80058304(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined4 uVar4;
  
  switch(param_2) {
  case 0:
    if ((*(byte *)(param_1 + 0x174) & 8) != 0) break;
    FUN_8004ed94(0x3a,0x41);
    bVar1 = *(byte *)(param_1 + 0x174) | 8;
    bVar3 = *(byte *)(param_1 + 0xd) | 0x42;
    goto LAB_800583d8;
  case 1:
    if ((*(byte *)(param_1 + 0x174) & 8) == 0) break;
    FUN_800310f4(0x25,0);
    uVar4 = 0x3b;
    bVar1 = *(byte *)(param_1 + 0x174) & 0xf7;
    bVar3 = *(byte *)(param_1 + 0xd) & 0xbd;
    goto LAB_80058444;
  case 2:
    if ((*(byte *)(param_1 + 0x174) & 8) == 0) break;
    FUN_8004ed94(0x3b,0x41);
    bVar1 = *(byte *)(param_1 + 0x174) & 0xf7;
    bVar3 = *(byte *)(param_1 + 0xd) & 0xbd;
LAB_800583d8:
    *(byte *)(param_1 + 0x174) = bVar1;
    *(byte *)(param_1 + 0xd) = bVar3;
    break;
  case 3:
    bVar1 = *(byte *)(param_1 + 0xd);
    bVar3 = *(byte *)(param_1 + 0x174) | 0x20;
    goto LAB_80058410;
  case 4:
    bVar1 = *(byte *)(param_1 + 0xd);
    bVar3 = *(byte *)(param_1 + 0x174) | 0x10;
LAB_80058410:
    *(byte *)(param_1 + 0x174) = bVar3;
    *(byte *)(param_1 + 0xd) = bVar1 | 0x12;
    FUN_8004ed94(0x4b,0x41);
    DAT_1f800247 = 0;
    break;
  case 5:
    uVar4 = 0x4c;
    bVar1 = *(byte *)(param_1 + 0x174) & 0xcf;
    bVar3 = *(byte *)(param_1 + 0xd) & 0xed;
LAB_80058444:
    *(byte *)(param_1 + 0x174) = bVar1;
    *(byte *)(param_1 + 0xd) = bVar3;
    FUN_8004ed94(uVar4,0x41);
    break;
  case 6:
    *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) | 4;
    FUN_80057dc0(param_1,1);
    uVar4 = 0x49;
    goto LAB_80058494;
  case 7:
    *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) & 0xfb;
    FUN_80057dc0(param_1,0);
    uVar4 = 0x4a;
LAB_80058494:
    _DAT_800bf89e = *(ushort *)(param_1 + 0x17e);
    FUN_8004ed94(uVar4,0x41);
    break;
  case 8:
  case 0xd:
    bVar1 = *(byte *)(param_1 + 0x174);
    if ((bVar1 & 1) != 0) {
      DAT_800bf881 = bVar1;
      return;
    }
    *(byte *)(param_1 + 0x174) = bVar1 & 0xfd | 1;
    FUN_8004ed94(0x45,0x41);
    uVar2 = 0x38;
    if (param_2 != 0xd) {
LAB_80058538:
      *(undefined1 *)(param_1 + 5) = uVar2;
      *(undefined1 *)(param_1 + 6) = 2;
      break;
    }
    uVar4 = 0x39;
    goto LAB_80058524;
  case 9:
  case 0xe:
    bVar1 = *(byte *)(param_1 + 0x174);
    if ((bVar1 & 2) != 0) {
      DAT_800bf881 = bVar1;
      return;
    }
    *(byte *)(param_1 + 0x174) = bVar1 & 0xfe | 2;
    FUN_8004ed94(0x47,0x41);
    uVar2 = 0x39;
    if (param_2 != 0xe) goto LAB_80058538;
    uVar4 = 0x3a;
LAB_80058524:
    FUN_80074590(uVar4,0,0);
    break;
  case 10:
    *(byte *)(param_1 + 0x174) = *(byte *)(param_1 + 0x174) & 0xfc;
    uVar4 = 0x46;
    if (((DAT_800bf881 & 1) != 0) || (uVar4 = 0x48, (DAT_800bf881 & 2) != 0)) {
      FUN_8004ed94(uVar4,0x41);
    }
    break;
  case 0xb:
    if ((*(byte *)(param_1 + 0x174) & 0x20) != 0) {
      FUN_8004ed94(0x4c,0x41);
    }
    bVar1 = *(byte *)(param_1 + 0x174);
    *(byte *)(param_1 + 0x174) = bVar1 & 0xdf;
    if ((bVar1 & 0x10) == 0) {
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xed;
    }
    break;
  case 0xc:
    *(undefined1 *)(param_1 + 0x174) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    if (((int)*(short *)(param_1 + 0x17e) & 0x8000U) != 0) {
      _DAT_800bf89e = *(ushort *)(param_1 + 0x17e) & 0x7fff;
      *(ushort *)(param_1 + 0x17e) = _DAT_800bf89e;
    }
    if ((*(ushort *)(param_1 + 0x17e) & 0x200) != 0) {
      *(undefined1 *)(param_1 + 0x6f) = 0;
      DAT_800bf88f = 0;
      *(undefined2 *)(param_1 + 0x17e) = 0x10;
      _DAT_800bf89e = 0x10;
    }
  }
  DAT_800bf881 = *(undefined1 *)(param_1 + 0x174);
  return;
}

