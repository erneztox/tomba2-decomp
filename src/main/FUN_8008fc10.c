
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8008fc10(short param_1,short param_2,byte param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = (int)param_1;
  iVar4 = (int)param_2;
  puVar6 = (undefined4 *)(*(int *)(&DAT_80104c30 + iVar5 * 4) + iVar4 * 0xb0);
  uVar1 = *(undefined1 *)*puVar6;
  *puVar6 = (undefined1 *)*puVar6 + 1;
  pcVar2 = _DAT_80104bb8;
  if (param_3 != 0x40) {
    if (param_3 < 0x41) {
      pcVar2 = _DAT_80104bac;
      if (param_3 != 7) {
        if (param_3 < 8) {
          if (param_3 == 0) {
            *(undefined1 *)((int)puVar6 + 0x26) = uVar1;
          }
          else {
            pcVar2 = _DAT_80104ba8;
            if (param_3 == 6) goto LAB_8008fde8;
          }
        }
        else {
          pcVar2 = _DAT_80104bb0;
          if ((param_3 == 10) || (pcVar2 = _DAT_80104bb4, param_3 == 0xb)) goto LAB_8008fde8;
        }
LAB_8008fe20:
        uVar3 = FUN_80090160((int)param_1,(int)param_2);
        puVar6[0x24] = uVar3;
        return;
      }
    }
    else {
      pcVar2 = _DAT_80104bc0;
      if (param_3 != 99) {
        if (param_3 < 100) {
          pcVar2 = _DAT_80104bcc;
          if ((param_3 != 0x5b) && (pcVar2 = _DAT_80104bbc, param_3 != 0x62)) goto LAB_8008fe20;
        }
        else {
          pcVar2 = _DAT_80104bc8;
          if ((param_3 != 0x65) && (pcVar2 = _DAT_80104bc4, 100 < param_3)) {
            if (param_3 == 0x79) {
              (*_DAT_80104bd0)(iVar5,iVar4);
              return;
            }
            goto LAB_8008fe20;
          }
        }
      }
    }
  }
LAB_8008fde8:
  (*pcVar2)(iVar5,iVar4,uVar1);
  return;
}

