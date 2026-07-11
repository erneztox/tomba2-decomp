/**
 * @brief CD SPU transfer: checks slot count, initiates DMA transfer
 * @note Original: func_80098DE0 at 0x80098DE0
 */
// CD_SPU_Transfer



s32 CD_SPU_Transfer(uint param_1)

{
  s32 bVar1;
  s32 bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_28;
  
  local_28 = 0;
  if (param_1 < 10) {
    iVar4 = CD_AllocDMA((&DAT_800acb94)[param_1]);
    iVar3 = DAT_800ac620;
    if (iVar4 == 0) {
      if (param_1 == 0) {
        uVar6 = 0x10 << (DAT_800ac62c & 0x1f);
        iVar4 = 0xfff0 << (DAT_800ac62c & 0x1f);
      }
      else {
        iVar4 = (&DAT_800acb94)[param_1];
        uVar6 = 0x10000 - iVar4 << (DAT_800ac62c & 0x1f);
        iVar4 = iVar4 << (DAT_800ac62c & 0x1f);
      }
      bVar1 = DAT_800ac620 == 1;
      if (bVar1) {
        DAT_800ac620 = 0;
      }
      bVar2 = true;
      if (DAT_800ac63c != 0) {
        local_28 = DAT_800ac63c;
        DAT_800ac63c = 0;
      }
      do {
        uVar5 = 0x400;
        if (uVar6 < 0x401) {
          bVar2 = false;
          uVar5 = uVar6;
        }
        CD_SPU_Cmd2(2,iVar4);
        CD_SPU_Cmd2(1);
        CD_SPU_Cmd2(3,&DAT_800ac674,uVar5);
        uVar6 = uVar6 - 0x400;
        iVar4 = iVar4 + 0x400;
        BIOS_Syscall_B0_80098F80(DAT_800ac58c);
      } while (bVar2);
      if (bVar1) {
        DAT_800ac620 = iVar3;
      }
      if (local_28 == 0) {
        return 0;
      }
      DAT_800ac63c = local_28;
      return 0;
    }
  }
  return 0xffffffff;
}
