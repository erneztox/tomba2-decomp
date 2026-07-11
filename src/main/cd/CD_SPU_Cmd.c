/**
 * @brief CD/SPU command: branch on DAT_800ac5f0 flag, selects buffer for transfer
 * @note Original: func_80097E40 at 0x80097E40
 */
// CD_SPU_Cmd



uint CD_SPU_Cmd(int param_1,uint param_2,int param_3,int param_4)

{
  u16 uVar1;
  u16 *puVar2;
  int iVar3;
  u16 *puVar4;
  u16 uVar5;
  uint uVar6;
  
  iVar3 = -0x7fefa2c0;
  if ((DAT_800ac5f0 & 1) == 0) {
    iVar3 = g_SPU_Regs;
  }
  uVar6 = (uint)*(u16 *)(param_3 * 2 + iVar3) | (*(u16 *)(param_4 * 2 + iVar3) & 0xff) << 0x10
  ;
  uVar5 = (u16)param_2;
  uVar1 = (u16)(param_2 >> 0x10);
  if (param_1 == 1) {
    if ((DAT_800ac5f0 & 1) == 0) {
      puVar2 = (u16 *)(param_3 * 2 + g_SPU_Regs);
      puVar4 = (u16 *)(param_4 * 2 + g_SPU_Regs);
      *puVar2 = *puVar2 | uVar5;
      *puVar4 = *puVar4 | uVar1 & 0xff;
    }
    else {
      puVar2 = (u16 *)(param_3 * 2 + -0x7fefa2c0);
      puVar4 = (u16 *)(param_4 * 2 + -0x7fefa2c0);
      *puVar2 = *puVar2 | uVar5;
      *puVar4 = *puVar4 | uVar1 & 0xff;
      DAT_800ac5bc = DAT_800ac5bc | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
    }
    uVar6 = uVar6 | param_2 & 0xffffff;
  }
  else if (param_1 < 2) {
    if (param_1 == 0) {
      if ((DAT_800ac5f0 & 1) == 0) {
        puVar2 = (u16 *)(param_3 * 2 + g_SPU_Regs);
        puVar4 = (u16 *)(param_4 * 2 + g_SPU_Regs);
        *puVar2 = *puVar2 & ~uVar5;
        *puVar4 = *puVar4 & ~(uVar1 & 0xff);
      }
      else {
        puVar2 = (u16 *)(param_3 * 2 + -0x7fefa2c0);
        puVar4 = (u16 *)(param_4 * 2 + -0x7fefa2c0);
        *puVar2 = *puVar2 & ~uVar5;
        *puVar4 = *puVar4 & ~(uVar1 & 0xff);
        DAT_800ac5bc = DAT_800ac5bc | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
      }
      uVar6 = uVar6 & ~(param_2 & 0xffffff);
    }
  }
  else if (param_1 == 8) {
    if ((DAT_800ac5f0 & 1) == 0) {
      puVar2 = (u16 *)(param_4 * 2 + g_SPU_Regs);
      *(u16 *)(param_3 * 2 + g_SPU_Regs) = uVar5;
      *puVar2 = uVar1 & 0xff;
    }
    else {
      *(u16 *)(param_3 * 2 + -0x7fefa2c0) = uVar5;
      *(u16 *)(param_4 * 2 + -0x7fefa2c0) = uVar1 & 0xff;
      DAT_800ac5bc = DAT_800ac5bc | 1 << (param_3 + -0xc6 >> 1 & 0x1fU);
    }
    uVar6 = param_2 & 0xffffff;
  }
  return uVar6;
}
