// FUN_80097194

undefined4 FUN_80097194(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 uVar4;
  
  if (param_1 == 1) {
    DAT_800ac654 = 0;
    if (*(short *)(DAT_800ac604 + 0x1a6) != DAT_800ac61c) {
      uVar2 = 1;
      do {
        if (0xf00 < uVar2) {
          DAT_800ac654 = 0;
          return 0xfffffffe;
        }
        uVar2 = uVar2 + 1;
      } while (*(short *)(DAT_800ac604 + 0x1a6) != DAT_800ac61c);
    }
    *(ushort *)(DAT_800ac604 + 0x1aa) = *(ushort *)(DAT_800ac604 + 0x1aa) & 0xffcf | 0x20;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      DAT_800ac654 = 1;
      if (*(short *)(DAT_800ac604 + 0x1a6) != DAT_800ac61c) {
        uVar2 = 1;
        do {
          if (0xf00 < uVar2) {
            DAT_800ac654 = 1;
            return 0xfffffffe;
          }
          uVar2 = uVar2 + 1;
        } while (*(short *)(DAT_800ac604 + 0x1a6) != DAT_800ac61c);
      }
      *(ushort *)(DAT_800ac604 + 0x1aa) = *(ushort *)(DAT_800ac604 + 0x1aa) | 0x30;
    }
  }
  else if (param_1 == 2) {
    DAT_800ac61c = (short)(param_2 >> (DAT_800ac62c & 0x1f));
    *(short *)(DAT_800ac604 + 0x1a6) = DAT_800ac61c;
  }
  else if (param_1 == 3) {
    uVar3 = 0x20;
    if (DAT_800ac654 == 1) {
      uVar3 = 0x30;
    }
    uVar2 = 1;
    uVar1 = *(ushort *)(DAT_800ac604 + 0x1aa);
    while ((uVar1 & 0x30) != uVar3) {
      if (0xf00 < uVar2) {
        return 0xfffffffe;
      }
      uVar2 = uVar2 + 1;
      uVar1 = *(ushort *)(DAT_800ac604 + 0x1aa);
    }
    if (DAT_800ac654 == 1) {
      FUN_800976a0();
    }
    else {
      FUN_80097678();
    }
    DAT_800ac65c = (param_3 >> 6) + (uint)((param_3 & 0x3f) != 0);
    DAT_800ac658 = param_2;
    *DAT_800ac608 = param_2;
    *DAT_800ac60c = DAT_800ac65c << 0x10 | 0x10;
    uVar4 = 0x1000201;
    if (DAT_800ac654 == 1) {
      uVar4 = 0x1000200;
    }
    *DAT_800ac610 = uVar4;
  }
  return 0;
}

