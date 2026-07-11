/**
 * @brief CD SPU reader: reads SPU RAM via g_SPU_Regs+0x1AE
 * @note Original: func_80096E70 at 0x80096E70
 */
// CD_SPU_Read



void CD_SPU_Read(s16 *param_1,uint param_2)

{
  u16 *puVar1;
  s16 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  u16 uVar7;
  
  puVar1 = (u16 *)(g_SPU_Regs + 0x1ae);
  *(s16 *)(g_SPU_Regs + 0x1a6) = DAT_800ac61c;
  uVar7 = *puVar1 & 0x7ff;
  MC_Stop();
  iVar3 = g_SPU_Regs;
  do {
    g_SPU_Regs = iVar3;
    if (param_2 == 0) {
      *(u16 *)(iVar3 + 0x1aa) = *(u16 *)(iVar3 + 0x1aa) & 0xffcf;
      if ((*(u16 *)(iVar3 + 0x1ae) & 0x7ff) != uVar7) {
        uVar6 = 1;
        do {
          if (0xf00 < uVar6) {
            Debug_Printf(s_SPU_T_O___s__8001c670,s_wait__dmaf_clear_W__8001c6a4);
            return;
          }
          uVar6 = uVar6 + 1;
        } while ((*(u16 *)(g_SPU_Regs + 0x1ae) & 0x7ff) != uVar7);
      }
      return;
    }
    uVar6 = 0x40;
    if (param_2 < 0x41) {
      uVar6 = param_2;
    }
    iVar4 = 0;
    if (0 < (int)uVar6) {
      do {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        iVar4 = iVar4 + 2;
        *(s16 *)(iVar3 + 0x1a8) = uVar2;
      } while (iVar4 < (int)uVar6);
    }
    *(u16 *)(g_SPU_Regs + 0x1aa) = *(u16 *)(g_SPU_Regs + 0x1aa) & 0xffcf | 0x10;
    MC_Stop();
    if ((*(u16 *)(g_SPU_Regs + 0x1ae) & 0x400) != 0) {
      uVar5 = 1;
      do {
        if (0xf00 < uVar5) {
          Debug_Printf(s_SPU_T_O___s__8001c670,s_wait__wrdy_H__>_L__8001c690);
          break;
        }
        uVar5 = uVar5 + 1;
      } while ((*(u16 *)(g_SPU_Regs + 0x1ae) & 0x400) != 0);
    }
    param_2 = param_2 - uVar6;
    MC_Stop();
    MC_Stop();
    iVar3 = g_SPU_Regs;
  } while( true );
}
