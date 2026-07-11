/**
 * @brief BIOS memory test: fills 128-u8 buffer, validates pattern
 * @note Original: func_8009C2B0 at 0x8009C2B0
 */
// BIOS_MemTest



s32 BIOS_MemTest(int param_1,s32 param_2,u8 *param_3)

{
  u8 bVar1;
  u8 bVar2;
  uint uVar3;
  u8 *pbVar4;
  int iVar5;
  int iVar6;
  u8 local_a0 [128];
  
  iVar6 = 0;
  bVar2 = 0;
  iVar5 = 0x7e;
  pbVar4 = param_3;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    iVar5 = iVar5 + -1;
    bVar2 = bVar2 ^ bVar1;
  } while (-1 < iVar5);
  *pbVar4 = bVar2;
  while( true ) {
    if (7 < iVar6) {
      return 0;
    }
    BIOS_Syscall_B0_8009BB00();
    iVar5 = BIOS_Syscall_B0_8009BAF0(param_1,param_2,param_3);
    if (iVar5 != 1) break;
    do {
      uVar3 = BIOS_Syscall_B0_8009C610(param_1 >> 4);
    } while ((uVar3 & 1) == 0);
    Mem_Compare(local_a0,0x80);
    BIOS_Syscall_B0_8009BB00();
    iVar5 = BIOS_Syscall_B0_8009C600(param_1,param_2,local_a0);
    if (iVar5 == 1) {
      do {
        uVar3 = BIOS_Syscall_B0_8009C610(param_1 >> 4);
      } while ((uVar3 & 1) == 0);
    }
    else {
      Debug_Printf(s_card_read_error_8001ca50);
    }
    pbVar4 = local_a0;
    bVar2 = 0;
    iVar5 = 0x7e;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      iVar5 = iVar5 + -1;
      bVar2 = bVar2 ^ bVar1;
    } while (-1 < iVar5);
    iVar6 = iVar6 + 1;
    if (param_3[0x7f] == bVar2) {
      return 1;
    }
  }
  return 0;
}
