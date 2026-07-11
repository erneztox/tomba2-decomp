/**
 * @brief CD data transfer: checks DAT_800ac620, setup DMA + IRQ
 * @note Original: func_800991B0 at 0x800991B0
 */
// CD_Transfer



int CD_Transfer(uint param_1)

{
  s32 bVar1;
  s32 bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_28;
  
  iVar3 = DAT_800ac620;
  local_28 = 0;
  bVar1 = DAT_800ac620 == 1;
  if (bVar1) {
    DAT_800ac620 = 0;
  }
  bVar2 = true;
  iVar5 = (uint)DAT_800ac61c << (DAT_800ac62c & 0x1f);
  if (DAT_800ac63c != 0) {
    local_28 = DAT_800ac63c;
    DAT_800ac63c = 0;
  }
  iVar6 = 0;
  do {
    if (param_1 < 0x401) {
      uVar4 = param_1 & 0xffffffc0;
      bVar2 = false;
      if (uVar4 < param_1) {
        uVar4 = uVar4 + 0x40;
      }
    }
    else {
      uVar4 = 0x400;
    }
    CD_SPU_Cmd2(2,iVar5);
    CD_SPU_Cmd2(1);
    CD_SPU_Cmd2(3,&DAT_800ac674,uVar4);
    param_1 = param_1 - 0x400;
    iVar5 = iVar5 + 0x400;
    iVar6 = iVar6 + uVar4;
    BIOS_Syscall_B0_80098F80(DAT_800ac58c);
  } while (bVar2);
  if (bVar1) {
    DAT_800ac620 = iVar3;
  }
  if (local_28 != 0) {
    DAT_800ac63c = local_28;
  }
  return iVar6;
}
