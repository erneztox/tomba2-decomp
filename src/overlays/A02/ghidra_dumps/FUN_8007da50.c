// FUN_8007da50

void FUN_8007da50(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    FUN_8007d594(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 0x18) =
           *(undefined1 *)(*(short *)(param_1 + 0x5e) * 4 + *(int *)(param_1 + 0x4c) + 3);
      if (*(char *)(param_1 + 0xd) != -1) {
        *(undefined1 *)(param_1 + 0xd) =
             *(undefined1 *)(*(short *)(param_1 + 0x5e) * 4 + *(int *)(param_1 + 0x4c) + 2);
      }
      iVar3 = *(int *)(param_1 + 0x50) +
              (uint)*(ushort *)(*(short *)(param_1 + 0x5e) * 4 + *(int *)(param_1 + 0x4c));
      *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) | 1;
      *(int *)(param_1 + 0x10) = iVar3;
      *(int *)(param_1 + 0x14) = iVar3;
      FUN_8007d0d0(param_1);
      *(undefined2 *)(param_1 + 0x42) = 0;
      if ((DAT_800bf84b == '\0') && (*(byte *)(param_1 + 3) < 4)) {
        FUN_8007c940(param_1);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x58);
        *(undefined2 *)(param_1 + 0x58) = 8;
        *(undefined2 *)(param_1 + 0x54) = 0x9c;
        if (*(short *)(param_1 + 0x56) < 0x80) {
          sVar2 = -*(short *)(param_1 + 0x5a);
        }
        else {
          sVar2 = 0x100;
        }
        *(short *)(param_1 + 0x56) = sVar2;
        *(undefined2 *)(param_1 + 0x60) = 0x10;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 5) = 0x5a;
      }
      else {
        *(undefined1 *)(param_1 + 5) = 1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      DAT_800bf84b = '\x01';
      DAT_800bf822 = DAT_800bf822 | 2;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    DAT_800bf822 = DAT_800bf822 & 0xfd;
    FUN_8007a624(param_1);
  }
  return;
}

