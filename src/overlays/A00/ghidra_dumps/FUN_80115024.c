// FUN_80115024

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_80115024(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  sVar2 = FUN_8011e7cc();
  if (sVar2 != 0) {
    sVar5 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar5 + -1;
    if (sVar5 == 1) {
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x80074590(0x95,0,0);
        return;
      }
      func_0x8009a450(0x95);
      return;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((int)((*(ushort *)(param_1 + 0x60) - 3) * 0x10000) >> 0x10) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    FUN_8011ff78(param_1,(int)sVar2,1);
    sVar2 = FUN_80121518(param_1);
    if (sVar2 == 0) {
      return;
    }
    func_0x80077cfc(param_1,0x8014e1a4,2,8);
    uVar4 = *(ushort *)(param_1 + 0x66) & 0xfff;
    *(ushort *)(param_1 + 0x66) = uVar4;
    *(ushort *)(param_1 + 0x56) = uVar4;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    goto LAB_8011e328;
  }
  if (1 < bVar1) {
    if (bVar1 == 2) {
      func_0x80076d68(param_1);
      func_0x80076d68(param_1);
      FUN_8011ff78(param_1,(int)sVar2,2);
      if ((*(short *)(param_1 + 0x60) != *(short *)(param_1 + 0x6c)) ||
         (*(short *)(param_1 + 0x62) != 0)) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 1;
    }
    else if (bVar1 == 3) {
      if (*(short *)(param_1 + 0x42) != 0) {
        func_0x80076d68(param_1);
        func_0x80076d68(param_1);
      }
      sVar2 = FUN_80121518(param_1);
      if (sVar2 == 0) {
        return;
      }
      func_0x80077cfc(param_1,0x8014e1a4,1,8);
      sVar2 = *(short *)(param_1 + 0x6c);
      uVar4 = *(ushort *)(param_1 + 0x66) & 0xfff;
      *(ushort *)(param_1 + 0x66) = uVar4;
      *(ushort *)(param_1 + 0x56) = uVar4;
      if (sVar2 == 9) {
        sVar5 = 0x11;
        *(undefined2 *)(param_1 + 0x6c) = 0x11;
      }
      else if (sVar2 < 10) {
        sVar5 = 0xd;
        if (sVar2 == 4) {
          *(undefined2 *)(param_1 + 0x6c) = 0xd;
        }
      }
      else {
        sVar5 = 0x11;
        if (sVar2 == 0xd) {
          sVar5 = 4;
          *(undefined2 *)(param_1 + 0x6c) = 4;
        }
        else if (sVar2 == 0x11) {
          *(undefined2 *)(param_1 + 0x6c) = 9;
          func_0x8009a450();
          return;
        }
      }
      *(short *)(param_1 + 0x40) = sVar5 + -1;
      if ((short)(sVar5 + -1) != 0) {
        return;
      }
    }
    goto LAB_8011e328;
  }
  if (bVar1 != 0) goto LAB_8011e328;
  FUN_8011ff78(param_1,(int)sVar2,0);
  iVar7 = (int)*(short *)(param_1 + 0x6c);
  if ((int)*(short *)(param_1 + 0x60) != iVar7 + -1) {
    return;
  }
  if (*(short *)(param_1 + 0x62) != 0) {
    return;
  }
  if (*(short *)(param_1 + 0x70) != 0) {
    *(undefined2 *)(param_1 + 0x70) = 0;
    goto LAB_8011e328;
  }
  if (iVar7 != 9) {
    uVar6 = 4;
    if (iVar7 < 10) {
      if (iVar7 != 4) goto LAB_8011e178;
    }
    else {
      if (iVar7 == 0xd) goto LAB_801151bc;
      uVar6 = 0x11;
      if (iVar7 != 0x11) goto LAB_8011e178;
    }
    *(undefined1 *)(param_1 + 0x2a) = 10;
    *(undefined2 *)(param_1 + 0x6e) = 0xa0a;
    uVar3 = FUN_8011fd94(param_1,0);
    *(undefined2 *)(param_1 + 0x66) = uVar3;
    uVar3 = FUN_801214ac(param_1,2);
    *(undefined2 *)(param_1 + 0x50) = uVar3;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
LAB_8011e328:
    FUN_80121918();
    bVar1 = *(byte *)(*(int *)(param_1 + 0xcc) + 0x3e);
    if ((bVar1 & 0x80) != 0) {
      if ((bVar1 & 1) != 0) {
        sVar2 = FUN_80127384(param_1);
        if (sVar2 != 0) {
          *(undefined2 *)(param_1 + 0x7a) = 0;
          iVar7 = *(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0);
          *(byte *)(iVar7 + 0x3e) = *(byte *)(iVar7 + 0x3e) & 0xfe;
          FUN_801303b0();
          return;
        }
        iVar7 = *(int *)(param_1 + *(short *)(param_1 + 0x6c) * 4 + 0xc0);
        *(byte *)(iVar7 + 0x3e) = *(byte *)(iVar7 + 0x3e) & 0x7f;
        FUN_801303bc(param_1);
        return;
      }
      if ((bVar1 & 0x10) == 0) {
        *(byte *)(*(int *)(param_1 + 0xcc) + 0x3e) = bVar1 | 0x10;
        FUN_80131768(param_1,(int)*(short *)(param_1 + 0x6c),0);
      }
    }
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
    FUN_801303f8();
    return;
  }
LAB_801151bc:
  *(undefined1 *)(param_1 + 0x2a) = 1;
  uVar6 = (uint)*(ushort *)(param_1 + 0x68);
LAB_8011e178:
  *(short *)(param_1 + 0x68) = (short)(uVar6 | 2);
  iVar8 = *(int *)(param_1 + (uVar6 | 2) * 4 + 0xc0);
  iVar7 = (uint)*(ushort *)(iVar8 + 0x14) << 0x10;
  *(short *)(iVar8 + 0x12) = (short)((iVar7 >> 0x10) - (iVar7 >> 0x1f) >> 1);
  *(undefined2 *)(param_1 + 0x74) = 0;
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) | 0x80;
  FUN_801303f8();
  return;
}

