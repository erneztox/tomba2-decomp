/**
 * @brief GPU sprite command processor: entity[0x46] flags, dispatches
 * @note Original: func_8007D208 at 0x8007D208
 */
// GPU_SpriteCmd



void FUN_8007d208(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  ushort local_10;
  ushort local_e [3];
  
  bVar1 = *(byte *)(param_1 + 0x46);
  if ((bVar1 & 1) == 0) {
    return;
  }
  if ((bVar1 & 0x80) == 0) {
    *(char *)(param_1 + 0x29) = *(char *)(param_1 + 0x29) + '\x01';
  }
  else {
    *(byte *)(param_1 + 0x46) = bVar1 & 0x7f;
  }
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 0xfe;
  if ((((*(short *)(param_1 + 0x44) == 1) || (DAT_800bfe4e == '\0')) &&
      (*(short *)(param_1 + 0x5c) != -1)) && (*(char *)(param_1 + 0xd) != -1)) {
    FUN_8001d41c((int)*(short *)(param_1 + 0x5c),
                 (uint)*(byte *)(param_1 + 0xd) + (uint)*(byte *)(param_1 + 0x29));
  }
  FUN_8007ceec(param_1,&local_10,local_e);
  bVar1 = *(byte *)(param_1 + 0x47);
  *(short *)(param_1 + 0x54) =
       0xa0 - (short)(((int)((uint)local_10 << 0x10) >> 0x10) -
                      ((int)((uint)local_10 << 0x10) >> 0x1f) >> 1);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 3);
    if (bVar1 != 1) {
      if (bVar1 < 2) {
        if (bVar1 != 0) goto LAB_8007d574;
        sVar2 = 0xd0;
        uVar3 = local_e[0];
      }
      else {
        if (bVar1 != 2) {
          sVar2 = 0x90;
          if (bVar1 != 3) goto LAB_8007d574;
          goto LAB_8007d570;
        }
        uVar3 = (ushort)(((int)((uint)local_e[0] << 0x10) >> 0x10) -
                         ((int)((uint)local_e[0] << 0x10) >> 0x1f) >> 1);
        sVar2 = 0x40;
      }
      goto LAB_8007d56c;
    }
    *(undefined2 *)(param_1 + 0x54) = 0x11;
    sVar2 = 0xbf;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_8007d574;
      bVar1 = *(byte *)(param_1 + 3);
      if (bVar1 == 4) {
        *(undefined2 *)(param_1 + 0x54) = 0x10;
        sVar2 = 0x40;
        uVar3 = (ushort)(((int)((uint)local_e[0] << 0x10) >> 0x10) -
                         ((int)((uint)local_e[0] << 0x10) >> 0x1f) >> 1);
      }
      else if (bVar1 < 5) {
        sVar2 = *(short *)(param_1 + 0xe);
        if (sVar2 == 0) {
          sVar2 = 0x40;
          uVar3 = (ushort)(((int)((uint)local_e[0] << 0x10) >> 0x10) -
                           ((int)((uint)local_e[0] << 0x10) >> 0x1f) >> 1);
        }
        else if (sVar2 < 1) {
          if (sVar2 != -1) goto LAB_8007d574;
          if (((*(char *)(param_1 + 0x18) == '\0') || (*(char *)(param_1 + 0x18) == '\x05')) ||
             (*(short *)(param_1 + 0x5c) == -1)) {
            sVar2 = 0xb0;
            uVar3 = (ushort)(((int)((uint)local_e[0] << 0x10) >> 0x10) -
                             ((int)((uint)local_e[0] << 0x10) >> 0x1f) >> 1);
          }
          else {
            sVar2 = 0x40;
            uVar3 = (ushort)(((int)((uint)local_e[0] << 0x10) >> 0x10) -
                             ((int)((uint)local_e[0] << 0x10) >> 0x1f) >> 1);
          }
        }
        else {
          if (sVar2 != 1) goto LAB_8007d574;
          sVar2 = 0xb0;
          uVar3 = (ushort)(((int)((uint)local_e[0] << 0x10) >> 0x10) -
                           ((int)((uint)local_e[0] << 0x10) >> 0x1f) >> 1);
        }
      }
      else {
        if (bVar1 != 5) goto LAB_8007d574;
        *(ushort *)(param_1 + 0x54) = 0x130 - local_10;
        sVar2 = 0x40;
        uVar3 = (ushort)(((int)((uint)local_e[0] << 0x10) >> 0x10) -
                         ((int)((uint)local_e[0] << 0x10) >> 0x1f) >> 1);
      }
    }
    else {
      if (bVar1 != 2) goto LAB_8007d574;
      if (*(char *)(param_1 + 3) == '\0') {
        sVar2 = 0x70;
        uVar3 = (ushort)(((int)((uint)local_e[0] << 0x10) >> 0x10) -
                         ((int)((uint)local_e[0] << 0x10) >> 0x1f) >> 1);
      }
      else {
        sVar2 = 0x18;
        uVar3 = (ushort)(((int)((uint)local_e[0] << 0x10) >> 0x10) -
                         ((int)((uint)local_e[0] << 0x10) >> 0x1f) >> 1);
      }
    }
LAB_8007d56c:
    sVar2 = sVar2 - uVar3;
  }
LAB_8007d570:
  *(short *)(param_1 + 0x56) = sVar2;
LAB_8007d574:
  *(ushort *)(param_1 + 0x58) = local_10;
  *(ushort *)(param_1 + 0x5a) = local_e[0];
  return;
}
