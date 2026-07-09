// FUN_80130900

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80130900(int param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int extraout_v1;
  int iVar4;
  undefined8 uVar5;
  
  func_0x8004cc64(*(undefined4 *)(param_1 + 0xe8),7);
  if ((DAT_800bf9ee & 1) == 0) {
    if ((DAT_800bf9ea & 1) == 0) {
      if ((DAT_800bf9ea & 2) == 0) {
        if ((DAT_800bf9ea & 4) == 0) {
          if ((DAT_800bf9ea & 8) == 0) {
            return DAT_800bf9ea & 0x80;
          }
          if ((DAT_800bf9ea & 0x80) != 0) {
            iVar4 = *(int *)(param_1 + 0xe4);
            uVar5 = FUN_8011884c(iVar4,3);
            sVar1 = func_0x800781e0(param_3 - iVar4,
                                    (int)uVar5 -
                                    (int)*(short *)((int)((ulonglong)uVar5 >> 0x20) + 0x164));
            if (((((int)_DAT_800e7ffe & 0x8200U) == 0) && (sVar1 < 0x641)) && (sVar1 < 0x44d)) {
              iVar4 = 2;
              if (600 < sVar1) {
                iVar4 = 1;
              }
              uVar2 = 1;
              if (iVar4 != 0) {
                uVar2 = 4;
              }
              _DAT_800bf8a2 = _DAT_800bf8a2 + 0x10;
              FUN_801406e4();
              return uVar2;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Subroutine does not return */
          FUN_801252c0(*(undefined4 *)(param_1 + 0xe4),2,3);
        }
        if ((DAT_800bf9ea & 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_801252c0(*(undefined4 *)(param_1 + 0xdc),2,2);
        }
        FUN_8011884c(*(undefined4 *)(param_1 + 0xdc),2);
        goto LAB_80139a20;
      }
      if ((DAT_800bf9ea & 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_801252c0(*(undefined4 *)(param_1 + 0xd4),2,1);
      }
      FUN_8011884c(*(undefined4 *)(param_1 + 0xd4),1);
    }
    else {
      if ((DAT_800bf9ea & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_801252c0(*(undefined4 *)(param_1 + 0xcc),2,0);
      }
      FUN_8011884c(*(undefined4 *)(param_1 + 0xcc),0);
      if (0x640 < extraout_v1) {
        uVar2 = FUN_8014296c();
        return uVar2;
      }
      if (0x44c < extraout_v1) {
        uVar2 = FUN_8014296c();
        return uVar2;
      }
    }
    if ((_DAT_800bf8d2 & 1) != 0) {
LAB_80139a20:
      uVar2 = FUN_801429d8();
      return uVar2;
    }
    uVar2 = _DAT_800bf89c + (int)_DAT_800bf8b8 * (int)_DAT_800bf8be;
    uVar3 = _DAT_800bf8a4 + (int)_DAT_800bf8bc * (int)_DAT_800bf8be;
  }
  else {
    if ((DAT_800bf9ea & 1) != 0) {
      DAT_800bf9ea = DAT_800bf9ea | 0x10;
      FUN_8011884c(*(undefined4 *)(param_1 + 0xcc),0);
    }
    if ((DAT_800bf9ea & 2) != 0) {
      DAT_800bf9ea = DAT_800bf9ea | 0x20;
      FUN_8011884c(*(undefined4 *)(param_1 + 0xd4),1);
    }
    if ((DAT_800bf9ea & 4) != 0) {
      DAT_800bf9ea = DAT_800bf9ea | 0x40;
      FUN_8011884c(*(undefined4 *)(param_1 + 0xdc),2);
    }
    uVar3 = (uint)DAT_800bf9ea;
    uVar2 = uVar3 | 0x80;
    if ((DAT_800bf9ea & 8) == 0) {
      return uVar2;
    }
    DAT_800bf9ea = (byte)uVar2;
  }
  _DAT_800bf89c = uVar2;
  _DAT_800bf8a4 = uVar3;
  uVar2 = FUN_80142a64();
  return uVar2;
}

