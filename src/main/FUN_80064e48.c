
void FUN_80064e48(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 0x144) = 0;
        FUN_80074590(0x1e,0,0);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        *(undefined1 *)(param_1 + 0x164) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
        if (*(short *)(param_1 + 0x4a) < 0) {
          *(undefined2 *)(param_1 + 0x40) = 2;
        }
        else {
          *(undefined2 *)(param_1 + 0x40) = 3;
        }
      }
      else if (bVar1 != 3) goto LAB_80065050;
      if (*(short *)(param_1 + 0x58) != 0) {
        uVar3 = *(short *)(param_1 + 0x58) - 0x100;
        if (*(short *)(param_1 + 0x58) < 0x801) {
          *(ushort *)(param_1 + 0x58) = uVar3;
          if ((int)((uint)uVar3 << 0x10) < 0) {
            *(undefined2 *)(param_1 + 0x58) = 0;
          }
        }
        else {
          sVar4 = *(short *)(param_1 + 0x58) + 0x100;
          *(short *)(param_1 + 0x58) = sVar4;
          if (0xfff < sVar4) {
            *(undefined2 *)(param_1 + 0x58) = 0;
          }
        }
      }
      FUN_80056b48(param_1,1);
      FUN_80055d5c(param_1);
      FUN_800574e0(param_1,1);
      FUN_80076d68(param_1);
      if (*(short *)(param_1 + 0x40) != 0) {
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      }
      if ((*(short *)(param_1 + 0x4a) < -0xdff) || (*(short *)(param_1 + 0x40) != 0)) {
        iVar5 = FUN_80055634(param_1,1);
        if (iVar5 != 0) {
          *(undefined1 *)(param_1 + 0x144) = 0;
          *(undefined1 *)(param_1 + 6) = 0;
          if (*(char *)(param_1 + 0x29) == '\0') {
            *(undefined1 *)(param_1 + 5) = 6;
          }
          else {
            *(undefined1 *)(param_1 + 5) = 5;
            *(undefined1 *)(param_1 + 7) = 0;
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 5) = 2;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      goto LAB_80065050;
    }
    if (bVar1 != 0) goto LAB_80065050;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined1 *)(param_1 + 0x15c) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    if (*(short *)(param_1 + 0x44) < 0) {
      *(short *)(param_1 + 0x44) = -*(short *)(param_1 + 0x44);
    }
    uVar2 = 8;
    if ((0x9ff < *(short *)(param_1 + 0x44)) && (uVar2 = 0x10, 0xfff < *(short *)(param_1 + 0x44)))
    {
      uVar2 = 0x20;
    }
    *(undefined1 *)(param_1 + 0x169) = uVar2;
    *(byte *)(param_1 + 0x168) = *(byte *)(param_1 + 0x169) >> 4;
  }
  FUN_80063f9c(param_1);
LAB_80065050:
  FUN_800551c4(param_1);
  return;
}

