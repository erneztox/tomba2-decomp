// DEMO_SequencePlayer (DEMO_SequencePlayer) - Demo sequence/recording player

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DEMO_SequencePlayer(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  s32 local_10;
  s32 local_c;
  
  local_10 = _DAT_1f80002c;
  local_c = _DAT_1f800030;
  iVar3 = 1 - _DAT_1f800014;
  sVar2 = _DAT_1f80002c + 0x10;
  _DAT_1f80002c = CONCAT22(_DAT_1f80002e,sVar2);
  if ((int)sVar2 <
      (int)*(short *)(_DAT_1f800028 * 8 + 0x1f800018) +
      (int)*(short *)(_DAT_1f800028 * 8 + 0x1f80001c)) {
    _DAT_1f800014 = iVar3;
    MDEC_Init(*(s32 *)(iVar3 * 4 + 0x1f80000c),
                    ((int)_DAT_1f800030 * (int)_DAT_1f800032) / 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f800028 = (uint)DAT_1f800135;
  _DAT_1f800034 = 1;
  _DAT_1f80002c = *(s32 *)(_DAT_1f800028 * 8 + 0x1f800018);
  iVar1 = _DAT_1f800014 * 4;
  _DAT_1f800014 = iVar3;
  GPU_LoadImage(&local_10,*(s32 *)(iVar1 + 0x1f80000c));
  return;
}

