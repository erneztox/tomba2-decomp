/**
 * @brief System init: calls BIOS init seq, clears 0x5C at 0x800BF498
 * @note Original: func_8001CC00 at 0x8001CC00
 */
// System_Init



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001cc00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_8009bb10(1);
  FUN_8009bb7c();
  FUN_80080820();
  FUN_80080920(0);
  FUN_8009a420(0x800bf498,0,0x5c);
  iVar3 = 0;
  FUN_80080890();
  _DAT_800bf4b4 = FUN_80080830(0xf4000001,4,0x2000,0);
  _DAT_800bf4b8 = FUN_80080830(0xf4000001,0x8000,0x2000,0);
  _DAT_800bf4bc = FUN_80080830(0xf4000001,0x100,0x2000,0);
  _DAT_800bf4c0 = FUN_80080830(0xf4000001,0x2000,0x2000,0);
  _DAT_800bf4c4 = FUN_80080830(0xf0000011,4,0x2000,0);
  _DAT_800bf4c8 = FUN_80080830(0xf0000011,0x8000,0x2000,0);
  _DAT_800bf4cc = FUN_80080830(0xf0000011,0x100,0x2000,0);
  _DAT_800bf4d0 = FUN_80080830(0xf0000011,0x2000,0x2000,0);
  FUN_800808a0();
  FUN_80080850(_DAT_800bf4b4);
  FUN_80080850(_DAT_800bf4b8);
  FUN_80080850(_DAT_800bf4bc);
  FUN_80080850(_DAT_800bf4c0);
  FUN_80080850(_DAT_800bf4c4);
  FUN_80080850(_DAT_800bf4c8);
  FUN_80080850(_DAT_800bf4cc);
  FUN_80080850(_DAT_800bf4d0);
  FUN_8001cba8(0x800bf498,0);
  FUN_8001cba8(0x800bf498,1);
  iVar1 = -0x7ff41270;
  iVar2 = -0x7ff40eec;
  do {
    FUN_8009a420(iVar1,0,0x3c);
    FUN_8009a420(iVar2,0,0x3c);
    iVar2 = iVar2 + 0x3c;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0x3c;
  } while (iVar3 < 0xf);
  return;
}
