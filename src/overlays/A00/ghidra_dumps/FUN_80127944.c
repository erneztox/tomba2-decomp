// FUN_80127944

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80127944(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int unaff_s1;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x2b) == '\0') {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x2b);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(ushort *)(param_1 + 0x6c) = (ushort)bVar1;
  if ((*(ushort *)(param_1 + 0x7a) & 2) != 0) {
    return 0;
  }
  iVar3 = (int)*(short *)(param_1 + 0x6c);
  if ((*(byte *)(*(int *)(param_1 + iVar3 * 4 + 0xc0) + 0x3e) & 0xc0) != 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x47);
  if ((bVar1 & 4) != 0) {
    if (((bVar1 & 2) == 0) || ((*(ushort *)(param_1 + 0x60) & 4) == 0)) {
      *(undefined1 *)(param_1 + 5) = 3;
      if (*(short *)(param_1 + 0x78) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3e) = *(undefined1 *)(param_1 + 6);
      }
      *(undefined1 *)(param_1 + 6) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x74) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = 2;
    }
LAB_80130aa4:
    uVar5 = FUN_8011884c(iVar3,3);
    sVar2 = func_0x800781e0(param_3 - iVar3,
                            (int)uVar5 - (int)*(short *)((int)((ulonglong)uVar5 >> 0x20) + 0x164));
    if (((((int)_DAT_800e7ffe & 0x8200U) == 0) && (sVar2 < 0x641)) && (sVar2 < 0x44d)) {
      iVar3 = 2;
      if (600 < sVar2) {
        iVar3 = 1;
      }
      uVar4 = 1;
      if (iVar3 != 0) {
        uVar4 = 4;
      }
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
      FUN_801406e4();
      return uVar4;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(param_1 + 0x78) != 0) {
    return 1;
  }
  if ((bVar1 & 1) != 0) {
    return 1;
  }
  if ((*(ushort *)(param_1 + 0x60) & 0xf0) == 0x40) goto LAB_80127b08;
  if (iVar3 == 2) {
    *(undefined2 *)(param_1 + 0x48) = 0xe000;
    if ((DAT_800bf9ea & 2) == 0) {
      if ((DAT_800bf9ea & 4) == 0) {
        if ((DAT_800bf9ea & 8) == 0) {
          return DAT_800bf9ea & 0x80;
        }
        if ((DAT_800bf9ea & 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_801252c0(*(undefined4 *)(unaff_s1 + 0xe4),2,3);
        }
        iVar3 = *(int *)(unaff_s1 + 0xe4);
        goto LAB_80130aa4;
      }
      if ((DAT_800bf9ea & 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_801252c0(*(undefined4 *)(unaff_s1 + 0xdc),2,2);
      }
      FUN_8011884c(*(undefined4 *)(unaff_s1 + 0xdc),2);
    }
    else {
      if ((DAT_800bf9ea & 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_801252c0(*(undefined4 *)(unaff_s1 + 0xd4),2,1);
      }
      FUN_8011884c(*(undefined4 *)(unaff_s1 + 0xd4),1);
      if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
        *(int *)(param_1 + 0x34) =
             *(int *)(param_1 + 0x34) +
             (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
        uVar4 = FUN_80142a64();
        return uVar4;
      }
    }
LAB_80139a20:
    uVar4 = FUN_801429d8();
    return uVar4;
  }
  *(undefined2 *)(param_1 + 0x48) = 0x2000;
  *(undefined2 *)(param_1 + 0x4e) = 0xff80;
  sVar2 = *(short *)(*(int *)(param_1 + 0xc4) + 8);
  if ((sVar2 == *(short *)(param_1 + 100)) || (sVar2 == *(short *)(param_1 + 0x66))) {
LAB_80127adc:
    iVar3 = 0x82;
    if (*(char *)(param_1 + 1) != '\0') {
      uVar4 = func_0x80074590(0x82,0,0);
      return uVar4;
    }
  }
  else if (*(char *)(param_1 + 1) != '\0') {
    if (_DAT_8014a270 == 0) {
      if (0x7ff < sVar2) {
        uVar4 = func_0x80074590(0x81,0xfffffff6,0xfffffff2);
        return uVar4;
      }
      goto LAB_80139a20;
    }
    goto LAB_80127adc;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0x5e) = 0;
LAB_80127b08:
  uVar4 = FUN_80130ab0(iVar3);
  return uVar4;
}

