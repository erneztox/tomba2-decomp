/**
 * @brief System init: calls BIOS init seq, clears 0x5C at 0x800BF498
 * @note Original: func_8001CC00 at 0x8001CC00
 */
// System_Init



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void System_Init(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  BIOS_InitIRQ(1);
  BIOS_Seq3();
  BIOS_EnterCritical();
  BIOS_Syscall_B0_80080920(0);
  Mem_Set(0x800bf498,0,0x5c);
  iVar3 = 0;
  BIOS_Syscall0();
  _DAT_800bf4b4 = BIOS_Syscall_B0_80080830(0xf4000001,4,0x2000,0);
  _DAT_800bf4b8 = BIOS_Syscall_B0_80080830(0xf4000001,0x8000,0x2000,0);
  _DAT_800bf4bc = BIOS_Syscall_B0_80080830(0xf4000001,0x100,0x2000,0);
  _DAT_800bf4c0 = BIOS_Syscall_B0_80080830(0xf4000001,0x2000,0x2000,0);
  _DAT_800bf4c4 = BIOS_Syscall_B0_80080830(0xf0000011,4,0x2000,0);
  _DAT_800bf4c8 = BIOS_Syscall_B0_80080830(0xf0000011,0x8000,0x2000,0);
  _DAT_800bf4cc = BIOS_Syscall_B0_80080830(0xf0000011,0x100,0x2000,0);
  _DAT_800bf4d0 = BIOS_Syscall_B0_80080830(0xf0000011,0x2000,0x2000,0);
  BIOS_Syscall0_2();
  BIOS_Syscall_B0_80080850(_DAT_800bf4b4);
  BIOS_Syscall_B0_80080850(_DAT_800bf4b8);
  BIOS_Syscall_B0_80080850(_DAT_800bf4bc);
  BIOS_Syscall_B0_80080850(_DAT_800bf4c0);
  BIOS_Syscall_B0_80080850(_DAT_800bf4c4);
  BIOS_Syscall_B0_80080850(_DAT_800bf4c8);
  BIOS_Syscall_B0_80080850(_DAT_800bf4cc);
  BIOS_Syscall_B0_80080850(_DAT_800bf4d0);
  Pad_Init_2(0x800bf498,0);
  Pad_Init_2(0x800bf498,1);
  iVar1 = -0x7ff41270;
  iVar2 = -0x7ff40eec;
  do {
    Mem_Set(iVar1,0,0x3c);
    Mem_Set(iVar2,0,0x3c);
    iVar2 = iVar2 + 0x3c;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0x3c;
  } while (iVar3 < 0xf);
  return;
}
