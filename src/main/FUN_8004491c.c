
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8004491c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x79) != '\x01') {
      return 0;
    }
    FUN_800440e4(&DAT_800e7e80,0xcf,2);
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x72);
    if ((uVar2 & 0x2000) == 0) {
      if ((uVar2 & 0x1000) == 0) {
        iVar3 = FUN_8006fb0c(param_1,uVar2 & 0x3ff);
      }
      else {
        iVar3 = FUN_8006fde8(param_1,uVar2 & 0x3ff);
      }
    }
    else {
      iVar3 = FUN_8006fc34(param_1,uVar2 & 0x3ff);
    }
    _DAT_800bf844 = iVar3;
    if (iVar3 != 0) {
      if ((**(ushort **)(param_1 + 0x6c) & 0x2000) == 0) {
        *(undefined1 *)(iVar3 + 0x5e) = 1;
      }
      else {
        *(undefined2 *)(iVar3 + 0x60) = *(undefined2 *)(param_1 + 0x66);
        *(undefined2 *)(iVar3 + 0x62) = *(undefined2 *)(param_1 + 0x6a);
        *(undefined1 *)(iVar3 + 0x5e) = *(undefined1 *)(param_1 + 0x68);
      }
      if ((*(ushort *)(param_1 + 0x72) & 0x800) == 0) {
        *(byte *)(iVar3 + 0x5f) = *(byte *)(iVar3 + 0x5f) | 1;
      }
    }
    FUN_80041718(param_1,(int)*(short *)(param_1 + 0x74),4);
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return 0;
      }
      if ((DAT_800bf822 & 1) != 0) {
        return 0;
      }
      return 1;
    }
    if (DAT_800bf80e == '\0') {
      return 0;
    }
    FUN_800440e4(&DAT_800e7e80,2,4);
    *(undefined1 *)(_DAT_800bf844 + 4) = 2;
    *(undefined1 *)(_DAT_800bf844 + 5) = 0;
    *(undefined1 *)(_DAT_800bf844 + 6) = 0;
    FUN_80041718(param_1,(int)*(short *)(param_1 + 0x76),4);
    if ((*(ushort *)(param_1 + 0x72) & 0x800) != 0) {
      return 1;
    }
  }
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  return 0;
}

