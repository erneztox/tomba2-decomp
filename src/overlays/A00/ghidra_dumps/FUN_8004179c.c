// FUN_8004179c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8004179c(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = param_1;
  if ((*(ushort *)(param_1 + 0x72) & 1) != 0) {
    iVar4 = _DAT_1f800214;
  }
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    uVar2 = *(ushort *)(param_1 + 0x66);
    if (((int)*(short *)(param_1 + 0x66) & 0x8000U) == 0) {
      if ((uVar2 & 0xff) != (ushort)*(byte *)(*(int *)(iVar4 + 0x38) + 4)) goto LAB_800418dc;
      FUN_80074590(*(undefined1 *)(param_1 + 0x68),0,0);
      uVar3 = *(ushort *)(param_1 + 0x66) | 0x8000;
    }
    else {
      uVar3 = uVar2 & 0x7fff;
      if ((uVar2 & 0xff) == (ushort)*(byte *)(*(int *)(iVar4 + 0x38) + 4)) goto LAB_800418dc;
    }
    *(ushort *)(param_1 + 0x66) = uVar3;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return 0;
      }
      if (*(short *)(param_1 + 0x74) == -1) {
        *(ushort *)(param_1 + 0x74) = (ushort)*(byte *)(param_1 + 0x7b);
      }
      FUN_80041768(iVar4,(int)*(short *)(param_1 + 0x74),(int)*(short *)(param_1 + 0x76));
      if ((*(ushort *)(param_1 + 0x72) & 2) != 0) {
        if ((**(ushort **)(param_1 + 0x6c) & 0x2000) == 0) {
          *(undefined1 *)(param_1 + 0x78) = 2;
          return 0;
        }
        *(undefined1 *)(param_1 + 0x78) = 1;
        return 0;
      }
      return 1;
    }
    if (bVar1 != 2) {
      return 0;
    }
  }
LAB_800418dc:
  if (*(char *)(iVar4 + 0x79) != '\x01') {
    return 0;
  }
  return 1;
}

