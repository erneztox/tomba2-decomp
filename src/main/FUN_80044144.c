
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80044144(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    uVar3 = *(ushort *)(param_1 + 0x66);
    if (((int)*(short *)(param_1 + 0x66) & 0x8000U) == 0) {
      if ((uVar3 & 0xff) != (ushort)*(byte *)(_DAT_800e7eb8 + 4)) goto LAB_8004427c;
      FUN_80074810(*(undefined1 *)(param_1 + 0x68),0);
      uVar3 = *(ushort *)(param_1 + 0x66) | 0x8000;
    }
    else {
      if ((uVar3 & 0xff) == (ushort)*(byte *)(_DAT_800e7eb8 + 4)) goto LAB_8004427c;
      uVar3 = uVar3 & 0x7fff;
    }
    *(ushort *)(param_1 + 0x66) = uVar3;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return 0;
      }
      if (DAT_800e7fe4 == '\0') {
        if (*(short *)(param_1 + 0x72) == 2) {
          sVar2 = *(short *)(param_1 + 0x76);
          uVar4 = (int)*(short *)(param_1 + 0x74) | 0x8000;
        }
        else {
          uVar4 = (uint)*(short *)(param_1 + 0x74);
          sVar2 = *(short *)(param_1 + 0x76);
        }
        FUN_800440e4(&DAT_800e7e80,uVar4,(int)sVar2);
        if (*(short *)(param_1 + 0x72) == 0) {
          if ((**(ushort **)(param_1 + 0x6c) & 0x2000) == 0) {
            *(undefined1 *)(param_1 + 0x78) = 2;
            return 0;
          }
          *(undefined1 *)(param_1 + 0x78) = 1;
          return 0;
        }
        return 1;
      }
      return 1;
    }
    if (bVar1 != 2) {
      return 0;
    }
  }
LAB_8004427c:
  if (DAT_800bf80e == '\0') {
    return 0;
  }
  return 1;
}

