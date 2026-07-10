// FUN_8004022c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004022c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x29) == '\0') {
      sVar2 = *(short *)(param_1 + 0x4a);
      iVar3 = (uint)*(ushort *)(param_1 + 0x4a) + (uint)*(ushort *)(param_1 + 0x50);
      *(short *)(param_1 + 0x4a) = (short)iVar3;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
      if (0x3000 < iVar3 * 0x10000 >> 0x10) {
        *(undefined2 *)(param_1 + 0x4a) = 0x3000;
      }
      FUN_8004766c(param_1);
      if ((*(char *)(param_1 + 0x29) != '\0') ||
         (iVar3 = FUN_80049250(param_1,0,
                               (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                     (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10),
         iVar3 != 0)) {
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
    else {
      *(undefined1 *)(param_1 + 6) = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x4a) = 0x1000;
      *(undefined1 *)(param_1 + 6) = 1;
      *(undefined2 *)(param_1 + 0x50) = 0x200;
    }
  }
  else if (bVar1 == 2) {
    FUN_80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x700,8);
    FUN_80074590(0xc,0,0);
    *(undefined1 *)(param_1 + 4) = 3;
    if (*(char *)(param_1 + 0x5e) == '\x05') {
      _DAT_800bf850 = _DAT_800bf850 + -1;
    }
  }
  return;
}

