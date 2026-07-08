
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004cc88(int param_1)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  
  uVar2 = (uint)_DAT_1f80017c;
  uVar4 = 0;
  if (0 < *(short *)(param_1 + 0x6a)) {
    psVar3 = (short *)(*(int *)(param_1 + 0x6c) + 8);
    do {
      uVar1 = 1 << (uVar4 & 0x1f);
      if (((*(uint *)(param_1 + 0x70) & uVar1) != 0) && ((*(uint *)(param_1 + 0x74) & uVar1) == 0))
      {
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)((int)psVar3 + -5);
        *(int *)(param_1 + 0x2c) = (int)psVar3[-2] << 0x10;
        *(int *)(param_1 + 0x30) = (int)psVar3[-1] << 0x10;
        *(int *)(param_1 + 0x34) = (int)*psVar3 << 0x10;
        FUN_8004a828(param_1);
        if (*(byte *)(param_1 + 3) < 2) {
          *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xdf;
          FUN_8003c2d4(param_1);
        }
        else if ((byte)(*(byte *)(param_1 + 3) - 4) < 7) {
          *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (uVar2 % 0x14 & 0xfffe) * 2;
          *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xdf;
          FUN_8003c2d4(param_1);
        }
        else {
          FUN_8004b374(param_1,0);
          FUN_8003c464(param_1);
        }
      }
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 8;
    } while ((int)uVar4 < (int)*(short *)(param_1 + 0x6a));
  }
  return;
}

