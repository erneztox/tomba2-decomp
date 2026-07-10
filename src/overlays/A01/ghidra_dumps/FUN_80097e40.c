// FUN_80097e40

uint FUN_80097e40(int param_1,uint param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  
  iVar3 = -0x7fefa2c0;
  if ((DAT_800ac5f0 & 1) == 0) {
    iVar3 = DAT_800ac604;
  }
  uVar6 = (uint)*(ushort *)(param_3 * 2 + iVar3) | (*(ushort *)(param_4 * 2 + iVar3) & 0xff) << 0x10
  ;
  uVar5 = (ushort)param_2;
  uVar1 = (ushort)(param_2 >> 0x10);
  if (param_1 == 1) {
    if ((DAT_800ac5f0 & 1) == 0) {
      puVar2 = (ushort *)(param_3 * 2 + DAT_800ac604);
      puVar4 = (ushort *)(param_4 * 2 + DAT_800ac604);
      *puVar2 = *puVar2 | uVar5;
      *puVar4 = *puVar4 | uVar1 & 0xff;
    }
    else {
      puVar2 = (ushort *)(param_3 * 2 + -0x7fefa2c0);
      puVar4 = (ushort *)(param_4 * 2 + -0x7fefa2c0);
      *puVar2 = *puVar2 | uVar5;
      *puVar4 = *puVar4 | uVar1 & 0xff;
      DAT_800ac5bc = DAT_800ac5bc | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
    }
    uVar6 = uVar6 | param_2 & 0xffffff;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      if ((DAT_800ac5f0 & 1) == 0) {
        puVar2 = (ushort *)(param_3 * 2 + DAT_800ac604);
        puVar4 = (ushort *)(param_4 * 2 + DAT_800ac604);
        *puVar2 = *puVar2 & ~uVar5;
        *puVar4 = *puVar4 & ~(uVar1 & 0xff);
      }
      else {
        puVar2 = (ushort *)(param_3 * 2 + -0x7fefa2c0);
        puVar4 = (ushort *)(param_4 * 2 + -0x7fefa2c0);
        *puVar2 = *puVar2 & ~uVar5;
        *puVar4 = *puVar4 & ~(uVar1 & 0xff);
        DAT_800ac5bc = DAT_800ac5bc | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
      }
      uVar6 = uVar6 & ~(param_2 & 0xffffff);
    }
  }
  else if (param_1 == 8) {
    if ((DAT_800ac5f0 & 1) == 0) {
      puVar2 = (ushort *)(param_4 * 2 + DAT_800ac604);
      *(ushort *)(param_3 * 2 + DAT_800ac604) = uVar5;
      *puVar2 = uVar1 & 0xff;
    }
    else {
      *(ushort *)(param_3 * 2 + -0x7fefa2c0) = uVar5;
      *(ushort *)(param_4 * 2 + -0x7fefa2c0) = uVar1 & 0xff;
      DAT_800ac5bc = DAT_800ac5bc | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
    }
    uVar6 = param_2 & 0xffffff;
  }
  return uVar6;
}

