// FUN_800387e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800387e0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((_DAT_800e7e68 & 0xc000) == 0) {
    if ((_DAT_800e7e68 & 0x2000) != 0) {
      *(undefined1 *)(param_1 + 9) = 0;
      FUN_80034670();
      return;
    }
  }
  else {
    FUN_80074590(0x12,0,0);
  }
  if ((_DAT_800e7e68 & 0x20) == 0) {
    if ((_DAT_800e7e68 & 0x80) != 0) {
      uVar3 = 0x12;
      if (*(char *)(param_1 + 0x1d) != '\0') {
        *(undefined1 *)(param_1 + 0x1d) = 0;
        goto LAB_80038878;
      }
      goto LAB_8003887c;
    }
  }
  else {
    uVar3 = 0x12;
    if (*(char *)(param_1 + 0x1d) != '\x01') {
      *(undefined1 *)(param_1 + 0x1d) = 1;
LAB_80038878:
      uVar3 = 0x15;
    }
LAB_8003887c:
    FUN_80074590(uVar3,0,0);
  }
  if ((_DAT_800e7e68 & 0x200) == 0) {
    if ((_DAT_800e7e68 & 0x100) == 0) {
      if ((_DAT_800e7e68 & 0x40) == 0) {
        if ((_DAT_800ecf54 & 0x40) == 0) {
          if ((_DAT_800e7e68 & 0x10) != 0) {
            *(undefined2 *)(param_1 + 0x18) = 0;
            iVar1 = FUN_80038758(param_1);
            uVar3 = 0x15;
            if (iVar1 == 0) {
              *(undefined1 *)(param_1 + 9) = 0;
              FUN_80034670(param_1);
              goto LAB_800389dc;
            }
            goto LAB_800389d0;
          }
          if ((_DAT_800ecf54 & 0x10) == 0) goto LAB_800389dc;
          uVar2 = *(ushort *)(param_1 + 0x18) + 1;
          *(short *)(param_1 + 0x18) = (short)uVar2;
          if (((int)(uVar2 * 0x10000) >> 0x10 < 9) || ((uVar2 & 1) == 0)) goto LAB_800389dc;
          iVar1 = FUN_80038758(param_1);
        }
        else {
          uVar2 = *(ushort *)(param_1 + 0x18) + 1;
          *(short *)(param_1 + 0x18) = (short)uVar2;
          if (((int)(uVar2 * 0x10000) >> 0x10 < 9) || ((uVar2 & 1) == 0)) goto LAB_800389dc;
          iVar1 = FUN_800386c0(param_1);
        }
        uVar3 = 0x15;
        if (iVar1 == 0) goto LAB_800389dc;
      }
      else {
        *(undefined2 *)(param_1 + 0x18) = 0;
        iVar1 = FUN_800386c0(param_1);
        uVar3 = 0x15;
        if (iVar1 == 0) {
          uVar3 = 0x12;
        }
      }
    }
    else {
      iVar1 = FUN_80038794(param_1);
      uVar3 = 4;
      if (iVar1 != 0) {
        uVar4 = 5;
        goto LAB_800389d4;
      }
      uVar3 = 0x12;
    }
LAB_800389d0:
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_80038708(param_1);
    uVar3 = 4;
    if (iVar1 == 0) {
      uVar3 = 0x12;
      goto LAB_800389d0;
    }
    uVar4 = 5;
  }
LAB_800389d4:
  FUN_80074590(uVar3,uVar4,0);
LAB_800389dc:
  *(char *)(param_1 + 0x1c) = *(char *)(param_1 + 0x1f) - *(char *)(param_1 + 0x1e);
  return;
}

