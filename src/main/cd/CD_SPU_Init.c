/**
 * @brief CD SPU initializer: sets SPU RAM config, clears buffers
 * @note Original: func_80096BF0 at 0x80096BF0
 */
// CD_SPU_Init



#include "tomba.h"
s32 CD_SPU_Init(int param_1)

{
  uint uVar1;
  s16 *puVar2;
  int iVar3;
  s16 *puVar4;
  
  *DAT_800ac614 = *DAT_800ac614 | 0xb0000;
  puVar2 = g_SPU_Regs;
  DAT_800ac620 = 0;
  DAT_800ac624 = 0;
  DAT_800ac61c = 0;
  g_SPU_Regs[0xc0] = 0;
  puVar2[0xc1] = 0;
  puVar2[0xd5] = 0;
  MC_Stop();
  puVar2 = g_SPU_Regs;
  g_SPU_Regs[0xc0] = 0;
  puVar2[0xc1] = 0;
  if ((puVar2[0xd7] & 0x7ff) != 0) {
    uVar1 = 1;
    do {
      if (0xf00 < uVar1) {
        Debug_Printf(s_SPU_T_O___s__8001c670,s_wait__reset__8001c680);
        break;
      }
      uVar1 = uVar1 + 1;
    } while ((g_SPU_Regs[0xd7] & 0x7ff) != 0);
  }
  puVar2 = g_SPU_Regs;
  iVar3 = 0;
  puVar4 = (s16 *)&DAT_80105ec8;
  DAT_800ac628 = 2;
  DAT_800ac62c = 3;
  DAT_800ac630 = 8;
  DAT_800ac634 = 7;
  g_SPU_Regs[0xd6] = 4;
  puVar2[0xc2] = 0;
  puVar2[0xc3] = 0;
  puVar2[0xc6] = 0xffff;
  puVar2[199] = 0xffff;
  puVar2[0xcc] = 0;
  puVar2[0xcd] = 0;
  do {
    *puVar4 = 0;
    puVar2 = g_SPU_Regs;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 10);
  if (param_1 == 0) {
    DAT_800ac61c = 0x200;
    g_SPU_Regs[200] = 0;
    puVar2[0xc9] = 0;
    puVar2[0xca] = 0;
    puVar2[0xcb] = 0;
    puVar2[0xd8] = 0;
    puVar2[0xd9] = 0;
    puVar2[0xda] = 0;
    puVar2[0xdb] = 0;
    CD_SPU_Read(&DAT_800ac644,0x10);
    iVar3 = 0;
    puVar2 = g_SPU_Regs;
    do {
      *puVar2 = 0;
      puVar2->flags = 0;
      puVar2->kind = 0x3fff;
      puVar2->sub_type = 0x200;
      puVar2->state = 0;
      puVar2->behavior_state = 0;
      puVar4 = g_SPU_Regs;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 8;
    } while (iVar3 < 0x18);
    g_SPU_Regs[0xc4] = 0xffff;
    puVar4[0xc5] = 0xff;
    MC_Stop();
    MC_Stop();
    MC_Stop();
    MC_Stop();
    puVar2 = g_SPU_Regs;
    g_SPU_Regs[0xc6] = 0xffff;
    puVar2[199] = 0xff;
    MC_Stop();
    MC_Stop();
    MC_Stop();
    MC_Stop();
  }
  DAT_800ac638 = 1;
  g_SPU_Regs[0xd5] = 0xc000;
  DAT_800ac63c = 0;
  DAT_800ac640 = 0;
  return 0;
}
